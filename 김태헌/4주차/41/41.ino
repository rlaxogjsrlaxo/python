void setup() {
  Serial. begin(9600);

}

void loop() {
  int a=10;
  int b=3;
  int led;
  Serial.print("a > b : ");
  Serial.println(led = a > b);
  Serial.print("a >= b : ");
  Serial.println(led = a >= b);
  Serial.print("a < b : ");
  Serial.println(led= a < b  );
  Serial.print("a <= b : ");
  Serial.println(led = a <= b );
  Serial.print("a == b : ");
  Serial.println(led = a==b);
  Serial.print("a !=b : ");
  Serial.println(led = a !=b);
  Serial.end();
  
}
