void setup() {
  Serial.begin(9600);
}

void loop() {
  int SW = 1;
  if(SW==1)
  {
    Serial.println("if false els if true!!");
  }
  else if(SW==2)
  {;
    Serial.println("if false else if true!!");
  }
  else
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    Serial.println("if else if false!!!");

  Serial.println("next sentence");
  Serial.end();

}
