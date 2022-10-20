void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

switch(sw){
    case 'y':
                Serial.println("켜졌습니다");
                break;
    case 'n':
                Serial.println("꺼졌습니다");
                break;
    default:
                Serial.println("에러");       
