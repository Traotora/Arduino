#define echo 11
#define trig 12
long sure, mesafe;
int sagmotorileri = 5;
int sagmotorgeri = 4;
int sagmotorhiz = 3;
int solmotorileri = 7;
int solmotorgeri = 6;
int solmotorhiz=9;
void setup() {
Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(solmotorileri, OUTPUT);
pinMode(solmotorgeri, OUTPUT);
pinMode(sagmotorileri, OUTPUT);
pinMode(sagmotorgeri, OUTPUT);
pinMode(solmotorhiz, OUTPUT);
pinMode(sagmotorhiz, OUTPUT);

}

void loop() {
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
sure=pulseIn(echo,HIGH);
mesafe=sure/58.2;
Serial.println(mesafe);
if (mesafe <20 );{

  
digitalWrite(solmotorgeri, LOW);
digitalWrite(solmotorileri,HIGH);
digitalWrite(sagmotorileri, LOW);
digitalWrite(sagmotorgeri, HIGH);

digitalWrite(solmotorileri,HIGH);
digitalWrite(solmotorileri, LOW);
digitalWrite(solmotorgeri, HIGH);
digitalWrite(sagmotorgeri, LOW);
digitalWrite(sagmotorileri, HIGH);
digitalWrite(solmotorgeri, LOW);
digitalWrite(solmotorileri, HIGH);
digitalWrite(sagmotorgeri, LOW);
digitalWrite(sagmotorileri, HIGH);
digitalWrite(solmotorileri, LOW);
digitalWrite(solmotorgeri, HIGH);
digitalWrite(sagmotorileri, LOW);
digitalWrite(sagmotorgeri, HIGH);
}
}







