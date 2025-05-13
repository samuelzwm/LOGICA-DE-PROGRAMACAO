float resultado;
int escolhaDaOperacao;
int contador;

float somar (float numero1, float numero2, int numero3 = 0){
  return (numero1 + numero2 + numero3);
}

float subtrair(float numero1, float numero2){
  return  (numero1 - numero2);
} 

float multiplicar(float numero1, float numero2){
  return (numero1 * numero2);
}

float dividir (float numero1, float numero2){
  return (numero1 / numero2);
} 

void setup()
{
  Serial.begin(9600);
  
  float numero1 = 0.0; // variavel local
  float numero2 = 0.0;
  
  do{
    Serial.println("Bem-vindo a calculadora mega inteligente meu nome E jarvis : ");
    Serial.println("Escolha uma das operacoes por favor:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - multiplicar");
    Serial.println("4 - Dividir");

    while(!Serial.available());{} //Espera o usuário digitar

    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuário digitou na variavel

    Serial.println("muito bem meu senhor, Agora para realizar a operacao, digite o primeiro numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero1 = Serial.parseFloat();

    Serial.println("por favor digite o segundo numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero2 = Serial.parseFloat();


    switch(escolhaDaOperacao){
      case 1:
      resultado = somar(numero1, numero2);
      Serial.println("WOW! O resultado foi:" + String(resultado));
      break;

      case 2:
      resultado = subtrair(numero1, numero2);
      Serial.println("WOW!!! O resultado foi:" + String(resultado));              
      break;

      case 3:
     resultado = multiplicar(numero1, numero2);
      Serial.println("WOW!!! O resultado foi:" + String(resultado));
      break;

      case 4:
      resultado  = dividir(numero1, numero2);
      Serial.println("WOW!!! O resultado foi:" + String( resultado));
      break;

      default:
      	Serial.println("Opcao invalida");
    }
    
    Serial.println("SH.samuel voce deseja continuar? Se sim, digite (s), se nao digite (n)");
    while(!Serial.available()){} //Esperar o usuario digitar

    if (Serial.readString() == "s"){
      contador++;
    }
    else{
      contador = 0;
      Serial.println("muito obrigado por me usar senhor, volte sempre e nois");
      Serial.println("SH.samuel, se vc quiser voltar ao inicio por favor reinicia o sistema.");
    }

  }
  while(contador != 0);
}

void loop()
{}
