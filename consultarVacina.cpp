#ifndef CONSULTARVACIVA_CPP
#define CONSULTARVACINA_CPP

#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#define MAX_VACINAS 50
#include "funcaocadastroVacinas.cpp"

using namespace std;


void consultarVacina()
{
    system("cls");

    printf("Lista de Vacinas\n");
    
    for(int i = 0; i < MAX_VACINAS; ++i )
    {
        if(vacinas[i].ativo==1)
        {
        std::cout<<"---------------\n"<<std::endl;
        std::cout<<"Tipo de vacina: "<< vacinas[i].tipoVacina<<endl;
        std::cout<<"Dose da vacina: "<< vacinas[i].quantidadeDoses<<endl;
        std::cout<<"Intervalo entre as doses: "<< vacinas[i].intervaloDias<<endl;
        std::cout<<"Quantidade de vacinas: "<< vacinas[i].quantidadeDvacina<<endl;
           
        //Saori Alterando aqui
        std::cout << "Fabricante: " << vacinas[i].fabricante << endl;
        std::cout << "Data de Vencimento: " << vacinas[i].dataVenc << endl;    
            
            
        std::cout<<"\n---------------\n"<<std::endl;

        }
    
    }



}
#endif
