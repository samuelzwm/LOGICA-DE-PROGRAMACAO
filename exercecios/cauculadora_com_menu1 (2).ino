   
 float numero1 = 0.0;
float numero2 = 0.0;
float soma = 0.0;
float subtrair = 0.0;
float multiplicar = 0.0;
float dividir = 0.0;
int escolhaDaOperacao;
int contador;
void setup()
{
  Serial.begin(9600);
  do{
    Serial.println("Oba,Bem-vindo (a) a calculadora mega inteligente : Valeu por usar.");
    Serial.println("Mano Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - multiplicar");
    Serial.println("4 - Dividir");

    while(!Serial.available());{} //Espera o usuário digitar

    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuário digitou na variavel

    Serial.println("Certo, Agora, para realizar a operacao, digite o primeiro numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o segundo numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero2 = Serial.parseFloat();
    
    if (escolhaDaOperacao == 1){
    soma = numero1 + numero2;
      Serial.println("WOW! O resultado foi:" + String(soma));}
    
    switch(escolhaDaOperacao){
      case 1:
      soma = numero1 + numero2;
      Serial.println("WOW!!! o resultado foi:" + String(soma));
      break;
      
      case 2:
      subtrair = numero1 - numero2;
      Serial.println("WOW!!! O resultado foi:" + String(subtrair));              
      break;
      
      case 3:
      multiplicar = numero1 * numero2;
      Serial.println("WOW!!! O resultado foi:" + String(multiplicar));
      break;
      
      case 4:
      dividir = numero1 / numero2;
      Serial.println("WOW!!! O resultado foi:" + String( dividir));
      break;
      
      default:
      Serial.println("Opcao invalida");
        
     if (escolhaDaOperacao == 2){
    subtrair = numero1 - numero2;
    Serial.println("WOW! O resultado foi:" + String(subtrair));}
    
     if (escolhaDaOperacao == 3){
    multiplicar = numero1 * numero2;
  Serial.println("WOW! O resultado foi:" + String(multiplicar));}
    
     if (escolhaDaOperacao == 4){
    dividir = numero1 / numero2;
Serial.println("WOW! O resultado foi:" + String(dividir));
     }
    }
   Serial.println("Mano voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available()){} //Esperar o usuario digitar
    
    if (Serial.readString() == "s"){
    contador++;
    }
    else{
     contador = 0;
     Serial.println("Valeu meu mano, volte sempre e nois");
     Serial.println("Mano se tu quiser voltar, reinicia o sistema.");
    }
    
  }
  while(contador != 0);
  

  }
  void loop()
 {


}
