//motor 1 variables//
int ena = 25;
int in1 = 26;
int in2 = 27;

//motor 2 variables//
int enb = 14;
int in3 = 32;
int in4 = 33;

 int pins[6]={ena,in1,in2,enb,in3,in4};
 void forward(){
   digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);

   digitalWrite(in3,HIGH);
   digitalWrite(in4,LOW);

  analogWrite(ena, 150);
  analogWrite(ena, 150);
 }
void backward(){
   digitalWrite(in1,LOW);
   digitalWrite(in2,HIGH);

   digitalWrite(in3,LOW);
   digitalWrite(in4,HIGH);

   analogWrite(ena, 150);
   analogWrite(ena, 150);

   
  
}

void setup() {
  for (auto pin : Pins){
    PinMode(INPUT,OUTPUT)
  }
  ledcAttachPin(ena, 2)
  ledcAttachPin(enb, 2)
  ledcSetup(0,1000,8)
}




void loop() {
  forward();
  delay(5000);
  reverse();
  delay();

  
  // put your main code here, to run repeatedly:

}
