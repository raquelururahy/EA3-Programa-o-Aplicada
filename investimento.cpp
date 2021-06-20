#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

struct tInvestimento{
  float capital;
  float juros;
  float taxa_percentual;
  float tempo;
  float montante;
  float Simples;

  

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
  // teste

  } 



};

int taxaAno_taxaMensal = tInvestimento.taxa_percentual / 12;

tInvestimento Juros_simples(){
  tInvestimento Simples;

  float taxa = tInvestimento.capital*taxaAno_taxaMensal*tInvestimento.tempo*0.01;

  Simples = taxa;
}


