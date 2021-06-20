#include <iostream>

#include "investimento.cpp"

using namespace std;

tInvestimento In(){
  tInvestimento EDados;

  cout<< "Digite o capital para investimento"<<endl;
  cin>>EDados.capital;
  cout<< "Digite a taxa percentual"<<endl;
  cin>>EDados.taxa_percentual;
  cout<< "Digite o tempo de investimento em mes"<<endl;
  cin>>EDados.tempo;

  return EDados;

}

tInvestimento Out(){
  tInvestimento SDados;

  cout<< "Montante ao final do período aplicado considerando juros simples"<< Simples;

  return 0;

}

int main() {
  string nome;
  float capital;
  float juros;
  float taxa_percentual;
  float tempo;
  float montante;

  


  /*tInvestimento simples1;
  simples1.capital=capital;
  simples1.taxa_percentual=taxa_percentual;
  simples1.tempo=tempo;

  simples1.juros= ((simples1.capital*simples1.taxa_percentual*simples1.tempo)/100);
  juros=simples1.juros;

  simples1.montante=(simples1.capital+simples1.juros);
  montante=simples1.montante;*/



  
  

  tInvestimento *investimentos=new tInvestimento[3];
  tInvestimento inv1, inv2, inv3;

  investimentos[0]=inv1; investimentos[1]=inv2; investimentos[2]=inv3;

  investimentos[0].insere("Juros Simples", 1200, 2, 14, 336, 1536);
  investimentos[1].insere("Juros Composto", 1200, 2, 14, 336, 1536);
  investimentos[0].insere("Taxa anual para mensal", 1200, 2, 14, 336, 1536);

  
  

  


  return 0;
}