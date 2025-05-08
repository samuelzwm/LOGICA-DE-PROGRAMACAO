// C++ code
float n1, n2, n3, n4, media = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite a primeira nota");
  while(!Serial.available());
  n1 = Serial.parseFloat();
  
  Serial.println("Digite a segunda nota");
  while(!Serial.available());
  n2 = Serial.parseFloat();
  
  Serial.println("Digite a terceira nota");
  while(!Serial.available());
  n3 = Serial.parseFloat();
  
  Serial.println("Digite a quarta nota");
  while(!Serial.available());
  n4 = Serial.parseFloat();
  
  //processamento
  media = (n1 + n2 + n3 + n4) / 4;
  //saida
  Serial.println("media: " + String(media));
  //6.50
  if(media >= 7 ) {
    Serial.println("aprovado");
  }else if(media >= 5 && media < 7){
    Serial.println("Recuperacao");
  }else {
  }
}