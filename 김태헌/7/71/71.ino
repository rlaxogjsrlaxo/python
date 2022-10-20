boolean swstatus;
void setup() {
  pinMode(24,INPUT);
  Serial.begin(9600);
  swstatus = 0;
}

void loop() {
  if(digitalRead(24)){
    if(swstatus == 0){
      swstatus = 1;
      Serial.println("스위치눌림");
    }
  }
  else {
    swstatus = 0;
  }

}
