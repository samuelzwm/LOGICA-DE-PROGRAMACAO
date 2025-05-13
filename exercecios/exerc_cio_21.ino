// Faça um programa que receba o ano de nascimento de uma pessoa e
// caucule e imprima a idade dessa pessoa e Essa idade convertida em semana  

//variáveis 
int anonacimento = 0;
int anoatual = 0;
int idade = 0;
int idadesemana = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()  
{
  //cabeçalho - 2 pipes + 30 tracinhos
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|        LOPAL - EX_03         |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//quinta linha
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha 
    
 //entrada 
 Serial.println("digite seu ano de nacimento");//perguntar quantos anos tem o usuario
 while(Serial.available() ){}//Aguardar o usuario digitar (para o loop)
 anonacimento = Serial.parseInt();//converte o que o usuario digitar em inteiro
  
  Serial.println("digite o ano atual: ");
  while (! Serial.available () );
  anoatual = Serial.parseInt();
  
 //processamento
  idade = anoatual - anonacimento;
  idadesemana = idade * 52;
  
 //saída
  Serial.println ("idade: " + String(idade) );
  Serial.println ("idade em semanas: " + String(idadesemana));
  
  delay(1000); //Wait for 1000 millisecond(s)
}