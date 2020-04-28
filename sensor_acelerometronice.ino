#include <Servo.h>//biblioteca de servomotor
//
Servo servomotor;
int sensor=A0;//pin del sensor que va conectado al arduino
float sensorentrada=0;//aqui se guardara la lectura del acelerometro sin grados
float sensorGrados=0;//aqui se guardara la lectura del acelerometro con grados 

void setup() 
{
Serial.begin(9600);
servomotor.attach(8);
//pin del servomotor
}

void loop() 
{
  sensorentrada=analogRead(sensor);
  //lee y guarda los datos toamdos por el sensoracelerometro
  sensorGrados=map(sensorentrada,0, 1023, -90, 90);
  //transformamos los datos de la operacion y el sensor donde le valor minimo que tenga sea -90grados y el valor maximo sea 90 grados
    
  Serial.print("grados:");//imprimimos los grados que este tenga
  Serial.print(sensorGrados);
  delay(1000);
}
