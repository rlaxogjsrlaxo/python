int led  = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT); 
}

void loop() {
  int SW = 1;
  if(SW==1)
  {
    digitalWrite(led,HIGH);
    Serial.println("true led on");
  }
  else
    Serial.println("false led off");

  Serial.println("next sentence");
  Serial.end();

}
