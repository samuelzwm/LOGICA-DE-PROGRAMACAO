
// while - E uma estrutura de repeticao que só executa/ laço enquanto
// a condição for verdadeira 
/*
Do while - é uma estrutura de repetição que executa pelo menos uma vez indepedente da condição.
Em seguida, continuara executando a condição for verdadeiro
*/
/* for - E uma estrutura de repetição que tem dentro da condinção a 
inicialização, a propria condição do for e imcremento.
ponto de atenção sao separada por ;
*/

int numero1 = 0; //variavel global

void setup()
{
 Serial.begin(9600); 
}

void loop()
{
  //while
  int contadorWhile = ; //variavel local
  
  while(contadorWhile >= 0){
    Serial.println(String(contadorWhile));
    //contadorWhile = contadorWhile 1;
    contadorWhile--;
  }
  
  delay(1000);
  

  //do while 
  int contadorDoWhile = 1;
   
do{
  Serial.println("contador While" + String(contadorDoWhile));
  contadorDoWhile++;
}
  
  while(contadorDoWhile <= 5); 
  delay(1000);
  
  
  
  
  
  //for
  //       variavel
  for(int contador = 1; contador <=5; contador++){
   Serial.println("contador do for : " + String(contador));
  }
  delay(1000);
}
  