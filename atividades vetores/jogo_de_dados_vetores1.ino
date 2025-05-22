//variaveis globais ,
int palpite;

  void setup()
{
  Serial.begin(9600);
  random(analogRead(0));//inicia e normalize a porta
}

  void desenhaCabecalho()
{
  Serial.println("seja bem vindo ao melhor programa de 'Jogo de dados'");
  Serial.println("");
  delay(500);
}

  void desenhaPontinho(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
{
  Serial.print(".");
  delay(tempo);
}
}

  void loop()
{
  desenhaCabecalho();
    
    //perguntar ao usuario quantas veses ele quer jogar
    //criar os vetores baseados na quantidade de rodadas 
    //jogar apenas essa quantidade (laço de repetção)
    
    Serial.println("quantas veses voce quer jogar?");
    while(!Serial.available());
    int qtdRodadas = Serial.parseInt();
    
    int vetpalpites[qtdRodadas];
    int vetresultado[qtdRodadas];
    
    for(int r = 0; r < qtdRodadas; r++)
    {//aqui dentro, o jogo todo
    //solicitar palpite do usuario
  Serial.println("Digite um palpite de 1 a 6");
  while(!Serial.available());  
  palpite = Serial.parseInt();

  //jogar dado
  int numeroSorteado = random(1, 7); //Sorteia um numero de 1 até 7 - 1, ou seja 6

      vetpalpites[r] = palpite;
      vetresultado[r] = numeroSorteado;
      
  Serial.print("JOGANDO DADOS");
  desenhaPontinho();

  //exibir o palpite do usuario
  Serial.println();

  Serial.print("palpite do usuario: " + String(palpite));
  Serial.println();

  //exibif numero sorteado
  Serial.println("Numero do Dado: " + String(numeroSorteado));
  Serial.println("");

  if(palpite == numeroSorteado)
  {
  Serial.println(" boaaa macho, Numeros iguais mandou bem!!");
} else{
  Serial.println("Que pena em! nao foi dessa vez");
}
    
    }//fim do for da rodada
    
    Serial.println("estatisticas do jogo");
    Serial.println();
    for(int i = 0; i < qtdRodadas; i++){
        
    Serial.println("Rodada " + String(i) + ":");
    Serial.println("Palpite: " + String(vetpalpites[i]));
    Serial.println("Resultado: " + String(vetresultado[i] == vetpalpites[i] ? "acertou!" : "errou"));
    Serial.println("------------------------------");
    Serial.println();
    }
    Serial.println("FIm do jogo meu patrao, reiniciando o sistema!!");
    desenhaPontinho(3, 500);  
    delay(3000);  

}
