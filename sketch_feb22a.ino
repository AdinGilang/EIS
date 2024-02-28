#include <NewPing.h>

#define TRIGGER_PIN 11
#define ECHO_PIN 12

#define MAX_DISTANCE 500

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

// Define LED pins
#define LED1_PIN 2
#define LED2_PIN 3
#define LED3_PIN 4

void setup() {
  // Setup code runs once when the Arduino is powered on or reset
  Serial.begin(9600);  // Initialize serial communication with a baud rate of 9600

  // Set LED pins as OUTPUT
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
}

void loop() {
  // Loop code runs repeatedly

  delay(2000);  // Delay for 2000 milliseconds (2 second)

  unsigned int distance = sonar.ping_cm();

  // Print the measured distance to the serial monitor
  Serial.print("Jarak = ");
  Serial.print(distance);
  Serial.println(" cm");

}
