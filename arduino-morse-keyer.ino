/*
 * Manual Morse Code Keyer (Straight Key)
 * 
 * Plays a tone on a passive buzzer or speaker whenever a push button is held down.
 * Uses the Arduino's internal pull-up resistor so no external resistor is needed.
 */

const int buttonPin = 2;   // Push button connected to Digital Pin 2 and GND
const int buzzerPin = 8;   // Passive buzzer (+) connected to Digital Pin 8 and (-) to GND
const int toneFreq = 800;  // Tone frequency in Hz

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Internal pull-up resistor (reads LOW when pressed)
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    tone(buzzerPin, toneFreq); // Play sound while button is held
  } else {
    noTone(buzzerPin);         // Stop sound when button is released
  }
}
