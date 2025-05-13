/*Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.
*/
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digte um numero: ");
  while(! Serial.available());
  numero = Serial.parseInt();
  
  if (numero % 2 == 0){
   Serial.println("O numero eh PAR!");
  } else {
    Serial.println("O numero eh IMPAR!");
  }
}
