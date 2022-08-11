package com.hpdisplay;

import com.google.inject.Provides;
import lombok.extern.slf4j.Slf4j;
import net.runelite.api.GameState;
import net.runelite.api.Skill;
import net.runelite.api.events.GameStateChanged;
import net.runelite.api.events.GameTick;
import net.runelite.api.events.StatChanged;
import net.runelite.client.config.ConfigManager;
import net.runelite.client.eventbus.Subscribe;
import net.runelite.client.events.ConfigChanged;
import net.runelite.client.plugins.Plugin;
import net.runelite.client.plugins.PluginDescriptor;

import javax.inject.Inject;
import java.io.IOException;


@Slf4j
@PluginDescriptor(
		name = "HP Display"
)
public class HpDisplayPlugin extends Plugin
{
	private boolean shouldTurnOffLeds = false;

	@Inject
	private SerialConnectionManager serialConnectionManager;

	@Subscribe
	public void onStatChanged(StatChanged statChanged)
	{
		int level = statChanged.getLevel();
		int boostedLevel = statChanged.getBoostedLevel();

		if (statChanged.getSkill() == Skill.HITPOINTS && level != boostedLevel)
		{
			serialConnectionManager.sendHpInfo(statChanged.getLevel(), statChanged.getBoostedLevel());
		}
	}

	@Subscribe
	public void onConfigChanged(ConfigChanged configChanged) throws IOException {
		if (configChanged.getGroup().equals("hpdisplay"))
		{
			serialConnectionManager.setupSerialPort();
		}
		else configChanged.getKey().equals("disconnectArduino");
		{
			shouldTurnOffLeds = true;
		}
	}

	@Provides
	private HpDisplayConfig provideConfig(ConfigManager configManager)
	{
		return configManager.getConfig(HpDisplayConfig.class);
	}

	@Subscribe
	public void onGameStateChanged(GameStateChanged gameStateChanged)
	{
		if (gameStateChanged.getGameState() == GameState.LOGGED_IN)
		{
			serialConnectionManager.setupSerialPort();
		}
	}

	@Subscribe
	public void onGameTick(GameTick gameTick) throws IOException
	{
		if(shouldTurnOffLeds) {
			shouldTurnOffLeds = false;
			serialConnectionManager.turnOffLeds();
		}
	}
}