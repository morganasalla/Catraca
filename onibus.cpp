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
	int tot_idoso=0, tot_estudante=0, tot_PA=0,opcao;
	ifstream passageiros;
	roleta a;

	passageiros.open("passageiros.csv");
	//cout << "\nnome ficticio-carro 0654\n" << endl;

	cout<<"Viação POA, carro:0000\n\n"<<endl;

	cout<<"qual opção deseja: \n1 mostrar quantidade de passageiros,\n2 mostrar toda a transiçaõ"<<endl;
	cin>>opcao;

  	while ( ! passageiros.eof() )
 
	{	
		passageiros >> a.tipo;

		if (passageiros.eof())
		{
			break;
		}
		
		
		passageiros >> a.horae;
		passageiros >> a.mine;

		
 
		//<< ":" << a.getTempoMinutos() 
		//<< endl;
		

		switch (opcao){

		case 1:
                if (a.tipo == 1){
	   	   tot_idoso=tot_idoso+1;
		   cout<<"o numero total de idoso na viagem:"<<tot_idoso<<endl;
		}
		else if (a.tipo == 2){
		   tot_estudante=tot_estudante+1;
		   cout<<"o numero total de estudantes na viagem:"<<tot_estudante<<endl;
		}
		else if (a.tipo == 3){
		   tot_PA=tot_PA+1;
		   cout<<"o numero total de pagantes na viagem:"<<tot_PA<<endl;{
		
		break;
		
		case 2:
		    cout << a.tipo << " " << a.horae << " " << a.mine << endl;
		break;
		}
  	      }

           }
         }	


	passageiros.close();

	return 0;
}
