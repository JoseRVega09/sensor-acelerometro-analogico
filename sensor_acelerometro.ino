int sensor=A0;
float sensorentrada=0;
float sensorGrados=0;

void setup() 
{
Serial.begin(9600);
pinMode(8,OUTPUT)//led1
pinMode(9,OUTPUT)//led2
}

void loop() 
{
  sensorentrada=analogRead(sensor);//gurda los datos toamdos por el sensor 
  sensorGrados=map(sensorentrada,-90, 90);//transformamos los datos de a operacion y el sensor donde le valor minimo que tenga sea -90grados y el valor maximo sea 90 grados
  if(sensorGrados<0)//if para encender los leds dependiendo del valor que tengan
  {
   digitalWrite(8,HIGH)//prende led verde este sig que el valor es menor a 0y que puede llegar a -90 como minimo
   digitalWrite(9,LOW)//
   delay(1000);
  }
  else
  {
   digitalWrite(8,LOW)//
   digitalWrite(9,HIGH)//prende led rojo significa que el valor es mayor a 0 y puede llegar a un maximo de 90
   delay(1000);
  }
  Serial.print("grados:");//imprimimos los grados que este tenga
  Serial.print(sensorGrados);
  delay(1000);
}
