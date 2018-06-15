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
	ifstream passageiros;
	roleta a;,

	passageiros.open("passageiros.csv");

	cout << "Roleta Onibus" << endl;

  	while ( ! passageiros.eof() ) 
	{
		passageiros >> a.tipo;
		if (passageiros.eof())
		{
			break;
		}
		passageiros >> a.horae;
		passageiros >> a.mine;

		//cout << a.getTempoHoras() 
			//<< ":" << a.getTempoMinutos() 
			//<< endl;
	}
	passageiros.close();

	return 0;
}