/*
Escreva um programa que processo os dados de um estacionamento.
Exentrada    tempo
emplo de arquivo de dados:

0001       12:34
0010       12:41
0011       12:58

*/
#include <fstream>
#include "roleta.h"



int main()
{
	int tot_idoso=0;
	ifstream passageiros;
	roleta a;

	passageiros.open("passageiros.csv");

	/*if(0001){
	   tot_estudantes=estudante+1;
		cout<<"o numero total de estudante na viagem:"<<tot_estudantes<<endl;*/
		
	 
	//else{
	//    tot_pagante=pagante+1;
		//cout<<"o numero total de estudante na viagem:"<<tot_pagante<<endl;
	//}


	//cout << "\nnome ficticio-carro 0654\n" << endl;

  	while ( ! passageiros.eof() )
 
	{	
		passageiros >> a.tipo;

		if (passageiros.eof())
		{
			break;
		}
		
		
		passageiros >> a.horae;
		passageiros >> a.mine;

		cout << a.tipo << " " << a.horae << " " << a.mine << endl;
 
		//<< ":" << a.getTempoMinutos() 
		//<< endl;

                if(a.tipo == 1){
	   	tot_idoso=tot_idoso+1;
		
		}
	}
	
	cout<<"	o numero total de idoso na viagem:"<<tot_idoso<<endl;

	passageiros.close();

	return 0;
}
