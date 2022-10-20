int swstatus;

void setup() {
  pinMode(24, INPUT);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(24)==1) {
    if (swstatus == 0) {
      swstatus = 1;
      Serial.println("ON");
    }
  
  
   else if(digitalRead(24)==0){
    if(swstatus == 1){
      swstatus = 0;
      Serial.println("OFF");
    }
  }
  }

  
}

//누르면 on 계속 뜨고 떼면 off하나
