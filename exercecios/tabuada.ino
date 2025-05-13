int tabuadaescolhida;
int resultado;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(" seja bem vindo senhor");
  Serial.println("digite qual tabuada voce deseja senhor?");
  while(Serial.available()){} //esperar o usuario 
  tabuadaescolhida = Serial.parseInt();
        
        
   for(int contador = 1; contador <= 10; contador++){ 
    resultado = tabuadaescolhida * contador;    
        
    // exibir assim 2 X 1 = 2
      Serial.println(tabuadaescolhida + " X " + String(contador) + " = " + String(resultado));
    }
}