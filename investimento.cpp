#include <iostream>
using namespace std;
struct tInvestimento{
  string nome;
  float capital;
  float juros;
  float taxa_percentual;
  float tempo;
  float montante;

  

  void insere(string stnome, float stcapital, float stjuros, float sttaxa_percentual, float sttempo, float stmontante){
  nome=stnome;
  capital=stcapital;
  juros=stjuros;
  taxa_percentual=sttaxa_percentual;
  tempo=sttempo;
  montante=stmontante;
  }

  void mostra(){
  cout<<"nome................: "<<nome<<"\n\n";
  cout<<"capital.............: "<<capital<<" reais"<<"\n";
  cout<<"taxa_percentual.....: "<<taxa_percentual<<"%"<<"\n";
  cout<<"tempo...............: "<<tempo<<" meses"<<"\n";
  cout<<"juros...............: "<<juros<<" reais"<<"\n";
  cout<<"montante............: "<<montante<<" reais"<<"\n\n";

  } 



};
