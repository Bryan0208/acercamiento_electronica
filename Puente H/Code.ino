void setup()
{
  pinMode(8, OUTPUT); // |
  pinMode(9, OUTPUT); // |
  pinMode(13,OUTPUT); //Se definen terminales, todos como salida
}

void CambiaLed(){                      //se crea función cambia led
  digitalWrite(13,!digitalRead(13));  //se lee el estado del pin 13 el cual es led de control
}                                     //y luego invierte el estado con "!", el led se apaga

void loop()
{
  digitalWrite(9, HIGH);  //se lee pin 9 en alta
  digitalWrite(8, LOW);   
  delay(1000);            //motor gira a la derecha durante 1 segundo
  digitalWrite(9, HIGH);  //se lee pin 9 en alta
  digitalWrite(8, HIGH);  
  delay(500);             //se detiene el motor durante 1 segundo
  digitalWrite(8, HIGH);  //se lee el pin 8 e alta
  digitalWrite(9, LOW);   //se lee el pin 9 en baja
  delay(1000);            //Espera 1 segundo
  CambiaLed();            //se llama la funcion cambia led
}
