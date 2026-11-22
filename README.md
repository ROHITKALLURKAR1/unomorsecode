# Arduino Manual Morse Code Keyer

A simple, beginner-friendly Arduino project that turns a push button and a buzzer into a manual Morse code sound maker (straight key). Press and hold the button to generate a continuous tone; release to stop.

## Features
- **Zero external resistors needed:** Uses the Arduino's built-in `INPUT_PULLUP` resistor.
- **Customizable pitch:** Easily adjust the output frequency (`toneFreq`) in Hz.
- **Lightweight & responsive:** Instant audio feedback with zero blocking delays.

## Hardware Required
- 1x Arduino board (Uno, Nano, Mega, etc.)
- 1x Tactile push button
- 1x Passive buzzer (or small 8-ohm speaker)
- Jumper wires and a breadboard

## Wiring Diagram

| Component | Arduino Pin | Notes |
| :--- | :--- | :--- |
| **Push Button (Leg 1)** | `D2` | Digital Pin 2 |
| **Push Button (Leg 2)** | `GND` | Ground |
| **Passive Buzzer (+)** | `D8` | Digital Pin 8 |
| **Passive Buzzer (-)** | `GND` | Ground |

```text
  [Push Button]
    |       |
   D2      GND

  [Passive Buzzer]
    (+)     (-)
     |       |
    D8      GND
```

## Getting Started
1. Clone or download this repository.
2. Open `arduino-morse-keyer.ino` in the **Arduino IDE**.
3. Wire the push button and buzzer according to the table above.
4. Select your **Board** and **Port** under the `Tools` menu.
5. Click **Upload**.
6. Press the button to tap out dots (short presses) and dashes (long presses)!

## Active vs. Passive Buzzer Note
- **Passive Buzzer (Default):** Works out of the box with `tone()` and lets you change the pitch.
- **Active Buzzer:** Produces a fixed tone automatically when powered. If using an active buzzer, replace `tone(buzzerPin, toneFreq);` with `digitalWrite(buzzerPin, HIGH);` and `noTone(buzzerPin);` with `digitalWrite(buzzerPin, LOW);`.

## License
This project is open-source and available under the [MIT License](LICENSE).
