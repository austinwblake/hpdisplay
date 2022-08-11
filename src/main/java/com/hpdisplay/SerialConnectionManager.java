package com.hpdisplay;

import com.fazecast.jSerialComm.SerialPort;
import net.runelite.api.ChatMessageType;
import net.runelite.api.Client;
import net.runelite.api.Skill;
import javax.inject.Inject;
import java.io.IOException;

public class SerialConnectionManager {
    @Inject
    private Client client;

    @Inject
    private HpDisplayConfig config;

    private SerialPort serialPort;

    public void setupSerialPort() {
        if (serialPort == null || !serialPort.isOpen()) {
            serialPort = SerialPort.getCommPort(config.serialPort());
            serialPort.setComPortParameters(9600, 8, 1, 0);
            serialPort.setComPortTimeouts(SerialPort.TIMEOUT_WRITE_BLOCKING, 0, 0);
            if (serialPort.openPort()) {
                client.addChatMessage(ChatMessageType.GAMEMESSAGE, "", "Connected to Arduino through Serial Port: " + config.serialPort() + ".", null, true);
                sendHpInfo(client.getRealSkillLevel(Skill.HITPOINTS), client.getBoostedSkillLevel(Skill.HITPOINTS));
            } else {
                client.addChatMessage(ChatMessageType.GAMEMESSAGE, "", "Unable to connect to Arduino through Serial Port: " + config.serialPort() + ".", null, true);
            }
        }
    }

    public void sendHpInfo(int totalHitpoints, int currentHitpoints) {
        if (serialPort != null && serialPort.isOpen()) {
            try {
                serialPort.getOutputStream().write(calculateHitpointPercentage(totalHitpoints, currentHitpoints));
                serialPort.getOutputStream().flush();
            } catch (IOException e) {
                client.addChatMessage(ChatMessageType.GAMEMESSAGE, "", "Something went wrong communicating with Arduino.", null, true);
            }
        }
    }

    private int calculateHitpointPercentage(int totalHitpoints, int currentHitpoints) {
        return (int) Math.round((double) (currentHitpoints) / (double) (totalHitpoints) * 100);
    }

    public void turnOffLeds() throws IOException {
        if (config.disconnectArduino()) {
            serialPort.getOutputStream().write(1);
            serialPort.getOutputStream().flush();
            serialPort.closePort();
            client.addChatMessage(ChatMessageType.GAMEMESSAGE, "", "Disconnected from Arduino through Serial Port: " + config.serialPort() + ".", null, true);
        }
    }
}