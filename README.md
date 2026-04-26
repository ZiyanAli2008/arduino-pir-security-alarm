# Arduino PIR Security Alarm

A motion-detection security alarm system built with Arduino using a PIR sensor, LEDs, and a buzzer. The system detects movement, alerts the user, and uses status indicators to simulate a real alarm system.

## Features

- 10-second arming countdown on startup
- PIR motion detection
- Audible buzzer alarm when motion is detected
- LED system status indicators
- Cooldown timer to prevent repeated alarm spam
- Clean embedded logic using Arduino C++

## Components Used

- Arduino Uno
- PIR Motion Sensor
- Red LED
- Yellow LED
- Green LED
- Buzzer
- Breadboard
- Jumper Wires
- Resistors

## System Behavior

### Startup Mode
- Yellow LED blinks during arming countdown

### Armed Mode
- Green LED stays ON when system is ready

### Intrusion Detected
- Red LED turns ON
- Buzzer sounds
- Alert message sent through Serial Monitor

### Cooldown Protection
- Waits before allowing another trigger

## Files Included

- `main.ino` → Arduino source code
- `Arduino PIR Security Alarm.pdf` → Tinkercad wiring schematic
- `README.md` → Project documentation

## Skills Demonstrated

- Sensor integration
- Embedded programming
- Conditional logic
- Timing systems using `millis()`
- Hardware debugging
- Breadboard circuit design

## Future Improvements

- Keypad arming/disarming
- LCD status display
- SMS/WiFi alerts
- Battery backup
- Door sensor integration

## Author

Ziyan Ali  
Aspiring Electrical Engineering and Computer Engineering Student
