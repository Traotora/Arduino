int buton=6;
int led=12;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buton,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(buton));
if(digitalRead(buton)==HIGH)
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW);
}
}
