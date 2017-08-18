const int sensorpin=A5;//Se declara una constante donde arrojara los resultados el sensor, en la salida analogica del arduino.
const int ledpin=13;//En este dara resultados el led y es el la salida 13 del arduino.


void setup() {
Serial.begin(9600); //Ajuste de baudios entre consola y Arduino
pinMode(sensorpin, OUTPUT);//El pin del sensor se establece en salida de datos
pinMode(ledpin, OUTPUT);//El Pin del Led de Comparación se establece en salida de corriente o datos

}
 
void loop() {

int SensorStatus=analogRead(sensorpin);
Serial.print(SensorStatus);//Se imprimen los valores retornados por la función SensorStatus
Serial.print("\n");
digitalWrite(ledpin,SensorStatus); //El Led de Pulso se enciende 
 
delay(100);//Se espera 100 miliegundos para volver a repetir la operación
}
