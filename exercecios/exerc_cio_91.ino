/*

Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.

*/

// C++ code
//variáveis
float salario;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  //entrada
  Serial.println("Digite seu salario");
  while(!Serial.available() );
  salario = Serial.parseFloat();//guardar a resposta do usuário
  
  
  //processamento
  
  if(salario < 500){
    salario = salario * 1.3;
   Serial.println("Salario reajustado para: R$" +  String(salario));
  }else {
      Serial.println(" o fucionario nao tenha direito ao aumento");
    }
    
    delay(10000);
}