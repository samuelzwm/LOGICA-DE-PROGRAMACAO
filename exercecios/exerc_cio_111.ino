/*Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.
*/
int numeroInteiro = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
Serial.println("Digite um numero:");
  while(! Serial.available());
  numeroInteiro = Serial.parseInt();
  
  if (numeroInteiro > 0) {
    Serial.println("O numero eh positivo");
  } else {
    Serial.println("O numero eh negativo");
  }

}

