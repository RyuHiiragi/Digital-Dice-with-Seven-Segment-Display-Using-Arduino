// Define pins for seven-segment display
const int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8}; // a, b, c, d, e, f, g
const int buttonPin = 9;

// Define patterns for numbers 0-9 on a seven-segment display
const byte digitPatterns[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  // Set segment pins as outputs
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }

  // Set button pin as input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Check if the button is pressed
  if (digitalRead(buttonPin) == HIGH) {
    delay(200); // Debounce delay
    if (digitalRead(buttonPin) == HIGH) {
      // Generate a random number between 1 and 6
      int randomNumber = random(1, 7);

      // Display the random number on the seven-segment display
      displayNumber(randomNumber);

      // Wait until the button is released
      while (digitalRead(buttonPin) == HIGH);
    }
  }
}

void displayNumber(int number) {
  // Turn off all segments
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], LOW);
  }

  // Turn on segments corresponding to the number
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], digitPatterns[number][i]);
  }
}
