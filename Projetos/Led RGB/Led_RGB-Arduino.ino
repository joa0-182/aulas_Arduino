// C++ code
//
int potencia = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  potencia = map(analogRead(A0), 0, 1023, 1, 10);
  Serial.println(potencia);
  if (potencia == 1) {
    analogWrite(3, 255);
    analogWrite(5, 0);
    analogWrite(6, 0);
  }
  if (potencia == 2) {
    analogWrite(3, 255);
    analogWrite(5, 100);
    analogWrite(6, 0);
  }
  if (potencia == 3) {
    analogWrite(3, 255);
    analogWrite(5, 255);
    analogWrite(6, 0);
  }
  if (potencia == 4) {
    analogWrite(3, 0);
    analogWrite(5, 255);
    analogWrite(6, 0);
  }
  if (potencia == 5) {
    analogWrite(3, 0);
    analogWrite(5, 0);
    analogWrite(6, 255);
  }
  if (potencia == 6) {
    analogWrite(3, 75);
    analogWrite(5, 0);
    analogWrite(6, 130);
  }
  if (potencia == 7) {
    analogWrite(3, 255);
    analogWrite(5, 0);
    analogWrite(6, 255);
  }
  if (potencia == 8) {
    analogWrite(3, 255);
    analogWrite(5, 145);
    analogWrite(6, 200);
  }
  if (potencia == 9) {
    analogWrite(3, 120);
    analogWrite(5, 172);
    analogWrite(6, 53);
  }
  if (potencia == 10) {
    analogWrite(3, 12);
    analogWrite(5, 37);
    analogWrite(6, 178);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
