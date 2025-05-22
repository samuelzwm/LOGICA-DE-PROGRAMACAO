// C++ code
//variaveis globais

/*
cria cada vetor tamanho 4,
fazendo parte do mesmo cadastro
*/

String convidados[4];//cria um vetor tamanho 4 
int idadeConvidados[4];//camel case
String emailConvidado[4];

//funções
void desenharCabesalho()
{

 Serial.println("seja bem vindo ao churras do tiao");
 Serial.println();
 Serial.println();
  delay(2000);
} 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  desenharCabesalho();
  for(int i = 0; i < 4; i++)
  {
    Serial.println("informar " +String(i + 1)+ " o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();
    
    Serial.println("informa o idade de");
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
    
    Serial.println("informe o email de");
    while(!Serial.available());
    emailConvidado[i] = Serial.readString();
    
    
    //solicitar a idade
    //solicitar o email
  }
  
  
  //exibir a lista de convidados
  //obs: so vai na festa quem for de maior de idade >=18
  
  for(int i = 0; i < 4; i++)
  {
    if(idadeConvidados[i] >= 18){
    Serial.println("nome: " + convidados[i]);
    Serial.println("idade: " + (idadeConvidados[i]));
    Serial.println("email: " + emailConvidado[i]);
    Serial.println("-------");
    Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de idade"));
      
   Serial.println("-------- " );
   Serial.println();  
    }
  }

  
  delay(2000);//pausa de 2 segundos
  
    
  }
  
  