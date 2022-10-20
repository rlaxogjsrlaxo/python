boolean swstatus;

void setup() {
  pinMode(13,INPUT);
  Serial.begin(9600);
  swstatus = 0;
}
void loop() {
  if(digitalRead(13)){
    if(swstatus == 0){
      swstatus = 1;
      Serial.println("스위치눌림");
    }
  }
  else if (digitalRead(13)==0){
    if(swstatus == 1){
      swstatus = 0;
      Serial.println("스위치 떨어짐");
    }
  }
}

//눌렀을때 출력 떼면 꺼짐
