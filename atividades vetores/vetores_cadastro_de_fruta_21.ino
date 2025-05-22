// C++ code
//Variaveis globais
String frutas [6];//cria um vetor  tamanho 6 (preenchendo as posições)
float precosFrutas[6];



void setup()
{
  Serial.begin(9600);
  
  Serial.println("***PROGRAMA SACOLAO DO ZEH***");
  Serial.println();
  Serial.println("Oh Zeh, bora cadastrar as frutas!");
  
  Serial.println();
 
  for(int i = 1; i <= 6; i++){
  Serial.println("Informe a " + String(i) +" fruta: ");
  while(! Serial.available());
  String frutaDigitada = Serial.readString();
    
    //pegar os precos das frutas
   Serial.println("Qual o preco de " + frutaDigitada +" ? ");
  while(! Serial.available());
  float precoDigitado = Serial.parseFloat();
    
  frutas[i] = frutaDigitada;
  precosFrutas[i] = precoDigitado;
    
  }// fim do for
  
  Serial.println("Exibindo os valores cadastrados: ");
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
     Serial.println("1a frutas: " + frutas[0]);
  Serial.println("Preco da 1a Fruta: " + String(precosFrutas[0]));
    
  }
 
}// fim do setup

void loop()
{

}		
