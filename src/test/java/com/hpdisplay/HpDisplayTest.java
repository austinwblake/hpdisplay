package com.hpdisplay;

import net.runelite.client.RuneLite;
import net.runelite.client.externalplugins.ExternalPluginManager;

public class HpDisplayTest
{
	public static void main(String[] args) throws Exception
	{
		ExternalPluginManager.loadBuiltin(HpDisplayPlugin.class);
		RuneLite.main(args);
	}
}