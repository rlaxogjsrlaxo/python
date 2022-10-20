boolean swstatus;
void setup() {
  pinMode(24,INPUT);
  Serial.begin(9600);
  swstatus = 0;
}

void loop() {
  if(digitalRead(24==0)){
    if(swstatus == 0){
      swstatus = 1;
      Serial.println("스위치 OFF");
    }
  }
  else {
    swstatus = 1;
  }

}

전력 3 13.5
스마트 3 13.5
상1 2 9
상2 3 13.5
마 3 9
  3 13.5
