/*
Na entrada da fortaleza, há um painel com uma entrada serial. Um guardião digital (o
Arduino) propõe um desafio: “Adivinhe corretamente o número sagrado do dado,
que varia de 1 a 6.”
Se você errar, o sistema piscará um LED vermelho, indicando que você foi testado e falhou.
Se acertar, um LED verde piscará como sinal de aprovação divina, e uma das joias azuis do
templo (representadas por LEDs azuis) se acenderá, marcando o seu progresso.
Ao conquistar 3 acertos, todas as joias estarão acesas — e a Porta da Sabedoria
(controlada por um servo motor) se abrirá magicamente, permitindo sua
passagem ao templo.
*/
// C++ code
//
int Microservo = 12;
int ledVerde = 10;
int ledVermelho = 7;
int ledAzul = 4;

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randômica para
  
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);    
}
void desenhaCabecalho()
{
Serial.println("----seja bem vindo a porta da sabedoria----");
Serial.println();
delay(500);
}
void loop()
{
 Serial.println("Digite um numero de 1 a 6, bravo guerreiro");
 while(!Serial.available());
 Serial.print("----JOGANDO DADOS----");
 Serial.println("");
 delay(10000);
}