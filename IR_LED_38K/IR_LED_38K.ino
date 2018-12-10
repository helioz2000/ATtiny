/*
 * 38kHz driver for IR LED's
 * 
 */

#define LED_PIN 0

void setup() { 
  pinMode(LED_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, HIGH); 
  delayMicroseconds(13);
  digitalWrite(LED_PIN, LOW);    
  delayMicroseconds(13);
}
