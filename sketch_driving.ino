int Value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Value = analogRead(A0);
  Value= Value/68.2667; // 15 wartości 
  Serial.println(Value);
  delay(200);
}
