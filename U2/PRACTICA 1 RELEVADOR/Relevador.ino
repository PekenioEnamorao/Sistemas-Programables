const int pinSensor = 3;    
const int pinTransistor = 4;

int estado;

void setup() {
  pinMode(pinSensor, INPUT);
  pinMode(pinTransistor, OUTPUT);
  digitalWrite(pinTransistor, LOW);
}

void loop() {
  estado = digitalRead(pinSensor);    //LEEMOS EL ESTADO DEL SENSOR PIR
  if(estado == HIGH){                 //SI HAY MOVIMIENTO 
    digitalWrite(pinTransistor, HIGH); //ENCENDEMOS EL TRANSITOR
    } else {                          //SI NO HAY MOVIMIENTO
    digitalWrite(pinTransistor, LOW);  //APAGAMOS EL TRANSISTOR
      }
}
