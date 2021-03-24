int motorileri =5;
int motorgeri =4;
int motorhiz =3;
void setup() {
  // put your setup code here, to run once:
pinMode(motorileri,OUTPUT);
pinMode(motorgeri,OUTPUT);
pinMode(motorhiz,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=256;i<0;i--){ //burda i=o;i<256;i++ olduğunda motor her 50 mili saniyede hızlanıcaktır. i=256;i<0;i-- de ise motorun hızı azalıcaktır.
digitalWrite(motorileri,HIGH);
digitalWrite(motorgeri,LOW);
analogWrite(motorhiz,i);
delay(50);/*
digitalWrite(motorileri,LOW);
digitalWrite(motorgeri,HIGH);
delay(3000); */
  }
}
