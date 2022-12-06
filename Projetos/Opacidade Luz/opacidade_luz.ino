// C++ code
//
int pot = 0;

void setup()
{
  pinMode(A3, INPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  pot = analogRead(A3);
  pot = map(pot, 0, 1023, 0, 255);
  analogWrite(6, pot);
  delay(10); // Delay a little bit to improve simulation performance
}
