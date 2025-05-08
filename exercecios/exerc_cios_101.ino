/*

Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.

*/

// C++ code
// variáveis
float preco;
float percentual; 
void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
//Entrada
Serial.println("qual o preco do produto");
while(!Serial.available());
 preco = Serial.parseFloat();//espera o usuario digitar

Serial.println("digite o percentual");
while(!Serial.available());
percentual =  Serial.parseFloat();

//processamento
 
if(preco < 10000){
  preco = preco * 1.50;
   Serial.println("preco reajustado" +  String(preco));
}else{
  Serial.println("o pencentual aumentou ");
}


}
 
