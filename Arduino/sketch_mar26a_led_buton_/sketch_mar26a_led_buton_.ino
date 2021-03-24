           

int buton = 7; // butonu 3. pine tanımladık 
int led = 9; // ledi 9. pine tanımladık 
void setup() {   
 pinMode(buton, INPUT); // 3. pin giriş oldu 
 pinMode(led, OUTPUT);  // 9. pin çıkış oldu 
 } 
void loop(){  //sonsuz döngü 
if (digitalRead(buton) == HIGH) { //okunan buton 1 ise  
digitalWrite(led, HIGH); // ledi yak 
} 
}
