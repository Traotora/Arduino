int buton1 = 2; // butonu 2. pine tanımladık 
int buton2 = 3; // butonu 3. pine tanımladık 
int led = 13; // ledi 13. pine tanımladık  
void setup() {   
 pinMode(buton1, INPUT); // 2. pin giriş oldu 
pinMode(buton2, INPUT); // 3. pin giriş oldu 
 pinMode(led, OUTPUT);  // 13. pin çıkış oldu 
 } 
void loop(){   //sonsuz döngü  
int oku1= digitalRead(2); 
int oku2= digitalRead(3);  
if (oku1 == HIGH  && oku2 == HIGH) {  
digitalWrite(led,HIGH);
}
}
