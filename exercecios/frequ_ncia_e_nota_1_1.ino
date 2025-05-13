/*
Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/

// 
//

float n1 , n2 , 75% , 100%,  media =0; // não me lenbro de como fazer
void setup()
{
  Serial.beguin(9600);
}

void loop()
{
 //Entrada
  Serial.println("digite a primeira nota"); // peguei uma ajudinha na atividade 15
  while (! serial.available() );
  n1 = Serial.parseFloat();
  
  Serial.println("digite a segunda nota"); // peguei uma ajudinha na atividade 15
  while (! serial.available() );
  n2 = Serial.parseFloat();
  
  //processamento
 media = (n1 + n2 + 75% + 100%) / 4;
  //saida
  Serial.println ("media :" + String(media)); 
  //6
  if( media >= 7 ) }  // peguei uma ajudinha na atividade 15
}


// tive dificuldade para fazer por não se lidar bem fazendo sem consulta