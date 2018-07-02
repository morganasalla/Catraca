#include <iostream>
#include "pessoa.h"

using namespace std;

class roleta{

public:
  
  void totais(); 
  void processar(pessoa p);//construtor
 


private:

  float  tot_estu_valor=0;
  float tot_PA_valor=0;
  float tot_caixa=0;
  float tot_viagem=0;
  int tot_PA=0;
  int tot_idoso=0; 
  int tot_estudante=0;
  
  
};
