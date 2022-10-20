int swstatus;
 int cnt;
void setup() {
  pinMode(24, INPUT);
  Serial.begin(9600);
  swstatus = 0;
  cnt=0;
}

void loop() {

  if (digitalRead(24)) {
    cnt+=1;
    if(cnt == 2){
    if (swstatus == 0) {
      swstatus = 1;
      Serial.println("스위치 OFF");
    }
  }
  }
  else {
    swstatus = 0;
  }

}
