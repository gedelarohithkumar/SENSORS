// Temperature Sensor Project using LM35 and Arduino UNO
 
const int sensorPin = A0; // LM35 output connected to A0
 
void setup() {
Serial.begin(9600);
Serial.println("Temperature Monitoring System");
}
 
void loop() {
int sensorValue = analogRead(sensorPin);
 
// Convert ADC value to voltage
float voltage = sensorValue * (5.0 / 1023.0);
 
// Convert voltage to temperature in Celsius
float temperature = voltage * 100.0;
 
Serial.print("Temperature: ");
Serial.print(temperature);
Serial.println(" °C");
 
delay(1000); // Update every second
}
