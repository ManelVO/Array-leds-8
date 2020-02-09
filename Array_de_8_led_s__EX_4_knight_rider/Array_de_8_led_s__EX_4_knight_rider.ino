/***************************************************************************************************
**                                                                                                **
**                      TITOL: ARRAY DE 8 LED'S EX: 4 knight rider.                               **                          
**                                                                                                **
**                                                                                                **
** MANEL VALIENTE ORRIT                                                                DATA:10/02/19                                                                                                                                                                                 
***************************************************************************************************/
//*****************************INCLUIR**************************************************************


//*****************************VARIABLES************************************************************
  int pin2 = 2;
  int pin3 = 3;
  int pin4 = 4;
  int pin5 = 5;
  int pin6 = 6;
  int pin7 = 7;
  int pin8 = 8;
  int pin9 = 9;
  int espera = 60; // El tiemps que esperara.
//*****************************SETUP****************************************************************
void setup()            
{

  pinMode(pin2, OUTPUT); // Configuració dels PIN com a sortida.
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);


}
//*****************************LOOP*****************************************************************
  void loop() 
  { 
  digitalWrite(pin2, HIGH); // Enciende y apaga secuencialmente los LEDs
  delay(espera);
  digitalWrite(pin2, LOW);
  delay(espera);
  digitalWrite(pin3, HIGH);
  delay(espera);
  digitalWrite(pin3, LOW);
  delay(espera);
  digitalWrite(pin4, HIGH);
  delay(espera);
  digitalWrite(pin4, LOW);
  delay(espera);
  digitalWrite(pin5, HIGH);
  delay(espera);
  digitalWrite(pin5, LOW);
  delay(espera);
  digitalWrite(pin6, HIGH);
  delay(espera);
  digitalWrite(pin6, LOW);
  delay(espera);
  digitalWrite(pin7, HIGH);
  delay(espera);
  digitalWrite(pin7, LOW);
  delay(espera);
  digitalWrite(pin8, HIGH);
  delay(espera);
  digitalWrite(pin8, LOW);
  delay(espera);
  digitalWrite(pin9, HIGH);
  delay(espera);
  digitalWrite(pin9, LOW);
  delay(espera);
  digitalWrite(pin8, HIGH);
  delay(espera);
  digitalWrite(pin8, LOW);
  delay(espera);
  digitalWrite(pin7, HIGH);
  delay(espera);
  digitalWrite(pin7, LOW);
  delay(espera);
  digitalWrite(pin6, HIGH);
  delay(espera);
  digitalWrite(pin6, LOW);
  delay(espera);
  digitalWrite(pin5, HIGH);
  delay(espera);
  digitalWrite(pin5, LOW);
  delay(espera);
  digitalWrite(pin4, HIGH);
  delay(espera);
  digitalWrite(pin4, LOW);
  delay(espera);
  digitalWrite(pin3, HIGH);
  delay(espera);
  digitalWrite(pin3, LOW);
  delay(espera);
  
}

  
//****************************FUNCIONS*************************************************************
