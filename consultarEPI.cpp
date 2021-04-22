#ifndef CONSULTAREPI_CPP
#define CONSULTAREPI_CPP

#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "funcaocadastroEPI.cpp"

using namespace std;
#define MAX_EPI 50



void consultarEPI()
{
    system("cls");

    printf("Lista de EPIs\n");
    
    for(int i = 0; i < MAX_EPI; ++i )
    {
        if(epis[i].ativo==1)
        {
        std::cout<<"---------------\n"<<std::endl;
        std::cout<<"Tipo da EPI: "<< epis[i].tipoEPI<<endl;
        std::cout<<"Descricao da EPI: "<< epis[i].descricaoEPI<<endl;
        std::cout<<"Quantidade da EPI: "<< epis[i].quantidadeDepi<<endl;
        std::cout<<"\n---------------\n"<<std::endl;

        }
    
    }
}
#endif // DEBUG