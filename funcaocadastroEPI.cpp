#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "structEPI.cpp"

using namespace std;
#define MAX_EPI 50

EPI epis[MAX_EPI];

void cadastrar()
    {
    char tipoEPI[50];
    int quantidadeEPI;
    char descricaoEPI[50];
    int op;

do{
    std::cout<<"Tipo de EPI: "<<std::endl;
    fgets(tipoEPI,sizeof(tipoEPI),stdin);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::cout<<"Descricao da EPI: "<<std::endl;
    fgets(descricaoEPI,sizeof(descricaoEPI),stdin);
    std::cout<<"Quantidade de EPI: "<<std::endl;
    std::cin>>quantidadeEPI;
   /* pegar os dados do usuario, o cin.ignore é para debugar um erro no printf */

    for(int i = 0; i < MAX_EPI; ++i)
    {
        if(epis[i].ativo ==0)
        {
            epis[i].quantidadeEPI = quantidadeEPI;
            epis[i].tipoEPI[50] = tipoEPI[50];
            epis[i].descricaoEPI[50] =  descricaoEPI[50];
            epis[i].ativo=1;
            break;
            /*esses laços são para gravar os dados que o usuario entrou*/
        }   
    }


    std::cout<<"1-Continuar\n 0-Sair"<<std::endl;
    std::cin>>op;
    
} while(op!=0);
} 
