#ifndef FUNCAOCADASTROEPI_CPP
#define FUNCAOCADASTROEPI_CPP

#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include <string>
#include "cadastroEPI.cpp"

using namespace std;

void cadastrarEPIs()
    {
    string tipoEPI;
    int quantidadeEPI;
    string descricaoEPI;
    int op;

do{
    std::cout<<"Tipo de EPI: "<<std::endl;
    cin >> tipoEPI;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::cout<<"Descricao da EPI: "<<std::endl;
    getline(cin, descricaoEPI);
    std::cout<<"Quantidade de EPI: "<<std::endl;
    std::cin>>quantidadeEPI;
   /* pegar os dados do usuario, o cin.ignore é para debugar um erro no printf */

    for(int i = 0; i < MAX_EPI; ++i)
    {
        if(epis[i].ativo ==0)
        {
           // epis[i].quantidadeEPI = quantidadeEPI;
            epis[i].tipoEPI = tipoEPI;
            epis[i].descricaoEPI =  descricaoEPI;
            epis[i].ativo=1;
            break;
            /*esses laços são para gravar os dados que o usuario entrou*/
        }   
    }


    std::cout<<"1-Continuar\n 0-Sair"<<std::endl;
    std::cin>>op;
    
} while(op!=0);
} 
#endif // !1
