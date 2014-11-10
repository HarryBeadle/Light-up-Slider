// LEDs light up with a pot

// LEDs on pins 2 though 7
// Pot on pin A0

void setup() {
  for (int x = 2; x <= 7; x++) {
    pinMode(x, OUTPUT);
  }
  pinMode(A0, INPUT);
}

int Lights = 0;

void loop() {
  Lights = map(analogRead(A0), 0, 1023, 1, 7);
  for (int i = 2; i <= Lights; i++) {

int Input = 0;

void loop() {
  Input = map(analogRead(A0), 0, 1023, 1, 7);
  for (int i = 2; i <= Input; i++) {
    digitalWrite(i, HIGH);
  }
  for (int i = 7; i > Input; i--) {
    digitalWrite(i, LOW);
  }
}

