/*
    Project name : ESP32 Distance Sharp IR Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-distance-sharp-ir-sensor
*/

const int irSensorPin = 34; // Analog pin connected to the IR distance sensor

void setup() {
  Serial.begin(115200); // Initialize serial communication
}

void loop() {
  // Read analog voltage from IR sensor
  int sensorValue = analogRead(irSensorPin);

  // Convert analog value to distance in centimeters
  // Note: The conversion formula may need to be adjusted based on the specific sensor model and its datasheet.
  float distance_cm = 10650.08 / (sensorValue - 27.728); // Example formula for GP2Y0A21YK0F

  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500); // Add a small delay before the next reading
}
