package com.hpdisplay;

import net.runelite.client.config.Config;
import net.runelite.client.config.ConfigGroup;
import net.runelite.client.config.ConfigItem;

@ConfigGroup("hpdisplay")
public interface HpDisplayConfig extends Config
{
	@ConfigItem(
			keyName = "serialPort",
			name = "Serial Port",
			description = "Arduino Serial Port"
	)
	default String serialPort()
	{
		return "COM5";
	}

	@ConfigItem(
			position = 1,
			keyName = "disconnectArduino",
			name = "Disconnect",
			description = "Turn off LEDs and disconnect from Arduino"
	)
	default boolean disconnectArduino() { return false; }
}
