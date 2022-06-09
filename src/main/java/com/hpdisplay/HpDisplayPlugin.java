package com.hpdisplay;

import com.google.inject.Provides;
import lombok.extern.slf4j.Slf4j;
import net.runelite.api.GameState;
import net.runelite.api.Skill;
import net.runelite.api.events.GameStateChanged;
import net.runelite.api.events.StatChanged;
import net.runelite.client.config.ConfigManager;
import net.runelite.client.eventbus.Subscribe;
import net.runelite.client.events.ConfigChanged;
import net.runelite.client.plugins.Plugin;
import net.runelite.client.plugins.PluginDescriptor;

import javax.inject.Inject;


@Slf4j
@PluginDescriptor(
		name = "HP Display"
)
public class HpDisplayPlugin extends Plugin
{
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
	public void onConfigChanged(ConfigChanged configChanged)
	{
		if (configChanged.getGroup().equals("hpdisplay"))
		{
			serialConnectionManager.setupSerialPort();
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
}