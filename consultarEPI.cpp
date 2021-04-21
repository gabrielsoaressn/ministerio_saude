#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "cadastroEPI.cpp"

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
        std::cout<<"Tipo da EPI: \n"<< epis[i].tipoEPI;
        std::cout<<"Descricao da EPI: \n"<< epis[i].descricaoEPI;
        std::cout<<"Quantidade da EPI: \n"<< epis[i].quantidadeEPI;
        std::cout<<"\n---------------\n"<<std::endl;

        }
    
    }
}