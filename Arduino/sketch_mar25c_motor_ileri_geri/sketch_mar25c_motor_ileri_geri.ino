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
  digitalWrite(motorileri,HIGH);
  digitalWrite(motorgeri,LOW);
  // put your main code here, to run repeatedly:
  
  for(int i=0;i<255;i++){ //burda i=o;i<256;i++ olduğunda motor her 50 mili saniyede hızlanıcaktır. i=256;i<0;i-- de ise motorun hızı azalıcaktır.

analogWrite(motorhiz,i);
delay(50);
  }
for(int i=255;i>0;+-i--)
{
analogWrite(motorhiz,i);
delay(20);
}
/*
digitalWrite(motorileri,LOW);
digitalWrite(motorgeri,HIGH);
delay(3000); */
  digitalWrite(motorileri,LOW);
  digitalWrite(motorgeri,HIGH);
  for(int i=0;i<256;i++)
  {
    analogWrite(motorhiz,i);
    delay(20);
    
  }
  for(int i=255;i>0;i--)
  {
    analogWrite(motorhiz, i);
  }
  
}
