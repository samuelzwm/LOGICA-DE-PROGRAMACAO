// Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

//Variáveis
float polegada =  0;
float cm = 0; 
  
void setup()
{
Serial.begin(9600);
}

void loop()
{
Serial.println("|------------------------------|");
Serial.println("|                              |");
Serial.println("|                              |");
Serial.println("|         LOPAL-EX02           |");
Serial.println("|                              |");
Serial.println("|                              |");
Serial.println("|------------------------------|");


Serial.println();//pula um linha
Serial.println();//pula um linha

Serial.println("Digite a medida em polegada");
while (! Serial.available());
polegada = Serial.parseInt();
    
//processamento
cm = float (polegada) / (2.54);
  
//Saída
Serial.println("Sua medida em cm eh:" + String (cm));
  
}