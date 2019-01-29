int led=10;
int buton=5;
void setup() {
pinMode(led,OUTPUT);
pinMode(buton,INPUT);
}
void loop() {
if (digitalRead(buton)==1){
digitalWrite(led,HIGH);
}
else{
digitalWrite(led,LOW);
}
}
