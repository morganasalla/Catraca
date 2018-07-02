#include<iostream>
#include "roleta.h"
#include <fstream>


using namespace std;

int main(){

   int opcao;//opção que está no roleta.cpp
   roleta a;//obejto
   pessoa p;//obejto
   fstream passageiros; //lê os arquivos tanto de entrada quanto de saída
   
   cout<<"\n\n\n\n\n***************************************************"<<endl;
   cout<<"\t\tviação POA, CARR0:00000\t"<<endl;
   cout<<"***************************************************"<<endl;


   passageiros.open("passageiros.csv"); 
   
   while(! passageiros.eof())
   {
      
      passageiros >> p.tipo;

      if(passageiros.eof())
      {
        break;
      }
     
     
     passageiros >> p.horae;
     passageiros >> p.mine;
     a.processar(p);
   
   }

   passageiros.close();


   a.totais();

   return 0;

}
