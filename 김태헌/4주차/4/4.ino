void setup() {
  Serial. begin(9600);

}

void loop() {
  int a=10;
  int b=10;
  int led;
  Serial.print("++a + 5: ");
  Serial.println(led = ++a + 5);
  Serial.print("b++ + 5: ");
  Serial.println(led = b++ + 5);
  Serial.print("a= ");
  Serial.println(a++);
  Serial.print("b = ");
  Serial.println(++b);
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.end();
  
}
