# 📣 Homie 3.0 Ping Example

[![Current Build](https://api.travis-ci.org/stritti/Homie8266-Ping.svg?branch=master)](https://travis-ci.org/stritti/Homie8266-Ping)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

📣 Homie 3.0 Ping example for ESP8266.

This is a simple example for Ping: You can send a Homie 3.0 compatible ping-request to the controller and it
will answer with message 'pong'.
For seeing it is alive, the controller sends in loop 'hello' messages.
# Usage

If the sketch is deployed you will get the ID of the ESP for the HOMIE-messages. Something like:

```
💡 Booting into normal mode 
{} Stored configuration
  • Hardware device ID: [deviceID]
  • Device ID: [deviceID]
  • Name: Ping
  • Device Stats Interval: 60 sec
  • Wi-Fi:
    ◦ SSID: *****
    ◦ Password not shown
  • MQTT:
    ◦ Host: *****
    ◦ Port: 1883
    ◦ Base topic: homie/
    ◦ Auth? no
  • OTA:
    ◦ Enabled? yes
```

Now you are able to send any String to MQTT-topic `homie/[deviceID]/ping/ping/set` and will receive `pong` message as reply.

# Develop & Deploy

Use PlatformIO. 
See also at Readme.md of Homie-ESP8266 project: (https://github.com/homieiot/homie-esp8266/)

## Used Libraries

- [Homie-ESP8266](https://github.com/homieiot/homie-esp8266): **Branch for version 3.0.0**

# License

[LICENSE](LICENSE)

---

My Smart Home Blog: https://medium.com/diy-my-smart-home
