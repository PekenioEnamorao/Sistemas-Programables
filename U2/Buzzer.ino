int speakerPin =9;

void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
beep(50);
beep(50);
beep(50);
delay(1000);
}
void beep(unsigned char pausa){
  analogWrite(9,20);
delay(pausa);
analogWrite(9,0);
delay(pausa);
}
void loop() {
  // put your main code here, to run repeatedly:
beep(200);
}
