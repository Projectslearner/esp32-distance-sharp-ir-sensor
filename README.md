# ESP32 Distance Measurement Using Sharp IR Sensor Project

## Project Overview
This project demonstrates how to interface an ESP32 microcontroller with a Sharp IR distance sensor to measure distances. The sensor outputs an analog voltage corresponding to the distance of an object, which is then read and processed by the ESP32.

## Components Needed
- ESP32 Microcontroller
- Sharp IR Distance Sensor (e.g., GP2Y0A21YK0F)
- Jumper Wires
- Breadboard

## Block diagram


## Circuit Setup
1. **Connecting the Sharp IR Sensor to ESP32:**
   - Connect the VCC pin of the IR sensor to the 3.3V pin on the ESP32.
   - Connect the GND pin of the IR sensor to the GND pin on the ESP32.
   - Connect the analog output pin of the IR sensor to GPIO 34 on the ESP32.

## Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 115200 using `Serial.begin()`.

2. **Operation:**
   - In the `loop()` function:
     - Read the analog voltage from the IR sensor using `analogRead(irSensorPin)`.
     - Convert the analog value to distance in centimeters using the appropriate conversion formula. Note that the formula used here is specific to the GP2Y0A21YK0F model and may need adjustment for other models.
     - Print the distance in centimeters to the serial monitor.
     - Add a delay of 500 milliseconds before taking the next reading.

3. **Considerations:**
   - **Sensor Calibration:** Calibrate the sensor based on the specific model and environmental conditions for accurate measurements.
   - **Conversion Formula:** Adjust the conversion formula according to the sensor’s datasheet for precise distance calculation.
   - **Environmental Factors:** Ensure stable environmental conditions to avoid interference and inaccurate readings.

## Applications
- **Object Detection:** Use in robotics and automation systems for detecting and avoiding obstacles.
- **Distance Measurement:** Implement in projects requiring precise distance measurement, such as rangefinders.
- **Educational Projects:** Learn about analog sensors and distance measurement with microcontrollers.

## Notes
- **Sensor Accuracy:** The accuracy of distance measurements depends on proper calibration and understanding of the sensor’s characteristics.
- **Analog Reading:** The analog value read from the sensor is converted to distance using a specific formula that may vary between different sensor models.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Distance Sharp IR Sensor](https://projectslearner.com/learn/esp32-distance-sharp-ir-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner