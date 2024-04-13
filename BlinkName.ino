// ***
// File :: BlinkName
// Author :: Kathleen Fraser
// Student Number :: 96709661
// ***

// Define the pins.
int buttonPin = 2;
int ledPin = LED_BUILTIN;

void setup() {

  // Tell device that "buttonPin" is an input device.
  pinMode(buttonPin, INPUT);

  // Tell device that "ledPin" is an output device.
  pinMode(ledPin, OUTPUT);
}

// Function for Morse code dash.
void dash() {
  digitalWrite(ledPin, HIGH);
  delay(2000);
}

// Function for Morse code dot.
void dot() {
  digitalWrite(ledPin, HIGH);
  delay(500);
}

// Functiona for Morse code space.
void space() {
  digitalWrite(ledPin, LOW);
  delay(500);
}

void loop() {

  // Read the state of the push button.
  int buttonState = digitalRead(buttonPin);

  // If the push button to pressed spell name in Morse code.
  if (buttonState == HIGH) {

    // Call functions for Morse code "K".
    dash();
    space();
    dot();
    space();

    // Call functions for Morse code "A".
    dot();
    space();
    dash();
    space();

    // Call functions for Morse code "T".
    dash();
    space();

    // Call functions for Morse code "H".
    dot();
    space();
    dot();
    space();
    dot();
    space();
    dot();
    space();

    // Call functions for Morse code "Y".
    dash();
    space();
    dot();
    space();
    dash();
    space();
    dash();
    space();
  }
}
