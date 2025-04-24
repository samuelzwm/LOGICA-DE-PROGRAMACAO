//Faça um programa que receba a idade de uma pessoa em anos e 
//imprima essa idade em: messes, dias, hora, minutos 

//variáveis
int idade = 0;//iniciar a idade
int idademeses = 0;
int idadedias = 0;
int idadehoras = 0;
int idademinutos = 0;

void setup()
{
  Serial.begin(9600);
}



void loop()
{
 //entrada
 Serial.println("Digite a sua idade");//perguntar a idade do usuário
 while(Serial.available() ){}//Aguardar o usuário digitar (para o loop) 
 idade = Serial.parseInt();
  
 //processamento
 idademeses = idade * 12;
 idadedias = idade * 365;
 idadehoras = idade * 8766;
 idademinutos = idade * 525960;
   
 //saída
 Serial.println(idademeses); ("sua idade em meses: " + String(idademeses) );
 Serial.println(idadedias); ("sua idade em dias: " + String(idadedias) );
 Serial.println(idadehoras); ("sua idade em horas: " + String(idadehoras) );
 Serial.println(idademinutos); ("sua idade em minutos: " +String(idademinutos) );
 }