int buton_1=6;
int buton_2=3;
int led=11;
int sayac=0;

void setup() {
 pinMode(buton_1,INPUT);
 pinMode(buton_2,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  if(sayac>=250)
  {
    if(digitalRead(buton_2)==HIGH)
    {
      sayac=sayac-1;
    }
  }
else if(sayac<=0)
{
  if(digitalRead(buton_1)==HIGH)
  {
    sayac=sayac+1;
  }
}
else
{
  if(digitalRead(buton_1)==HIGH)
  {
    sayac=sayac+1;
  }
}
if(digitalRead(buton_2)==HIGH)
{
  sayac=sayac-1;
}
analogWrite(led,sayac);
delay(50);
}
