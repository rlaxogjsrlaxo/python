void setup() {
  Serial. begin(9600);

}

void loop() {
  int a=10;
  int b=3;
  int led;
  Serial.print("a==10 && b==3 : ");
  Serial.println(led = (a==10 && b==3));
  Serial.print("a==10 && b==5 : ");
  Serial.println(led = (a==10 && b==5));
  Serial.print("a==10 || b==5 : ");
  Serial.println(led = (a==10 || b==5));
  Serial.print("a==9 || b==5 : ");
  Serial.println(led = (a==9 || b==5));
  Serial.print("!0 : ");
  Serial.println(led = 10);
  Serial.print("!a : ");
  Serial.println(led = !a);
  
  Serial.end();
  
}
