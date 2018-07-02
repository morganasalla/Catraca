
#include <iostream>
#include "roleta.h"


using namespace std;

void roleta::processar(pessoa p){

    if (p.tipo == 1){
        tot_idoso=tot_idoso+1;
    }
		   
    else if (p.tipo == 2){
         tot_estudante=tot_estudante+1;
         tot_estu_valor=  tot_estudante*2.15;
    }
		
    else if (p.tipo == 3){
	  tot_PA=tot_PA+1;
	  tot_PA_valor=  tot_PA*4.30;
    }
   
    tot_viagem=tot_PA_valor+tot_estu_valor;
    tot_caixa=tot_viagem+100;
		
  		 

}
    void roleta::totais() {

    cout<<"\no numero total de idoso na viagem:.............."<<tot_idoso<<endl;
    cout<<"o valor arrecadado foi de:..................ISENTO"<<endl;	
    cout<<"\no numero total de estudantes na viagem:........."<<tot_estudante<<endl;
    cout<<"o valor arrecadado foi de:...................."<<tot_estu_valor<<endl;
    cout<<"\no numero total de pagantes na viagem:..........."<<tot_PA<<endl; 
    cout<<"o valor arrecadado foi de:..................."<< tot_PA_valor<<endl;
    cout<<"\n\n\nTotal da viagem:"<<tot_viagem<<endl;
    cout<<"Total em caixa:"<<tot_caixa<<endl;
    cout<<"Fundo:100\n\n\n"<<endl;
   

  
	

}
