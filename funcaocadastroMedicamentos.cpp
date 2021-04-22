#ifndef FUNCAOCADASTROMEDICAMENTOS_CPP
#define FUNCAOCADASTROMEDICAMENTOS_CPP

#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "cadastroMedicamento.cpp"

using namespace std;

void cadastrarMedicamentos()
    {
    int dosagem;
    string administracao;
    string disponibilizacao;
    int op;

    do{
        std::cout<<"Forma de administracao: "<<std::endl;
        getline(cin, administracao);
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout<<"Forma de disponibilizacao: "<<std::endl;
        getline(cin,disponibilizacao);
        std::cout<<"Dosagem do medicamento: "<<std::endl;
        std::cin>>dosagem;
    /* pegar os dados do usuario, o cin.ignore é para debugar um erro no printf */
  
    

    for(int i = 0; i < MAX_MEDICAMENTOS; ++i)
    {
        if(medicamentos[i].ativo ==0)
        {
            medicamentos[i].dosagem = dosagem;
            medicamentos[i].administracao =  administracao;
            medicamentos[i].disponibilizacao = disponibilizacao;
            medicamentos[i].ativo=1;
            break;
             /*esses laços são para gravar os dados que o usuario entrou*/
        }   
    }


    std::cout<<"1-Continuar\n 0-Sair"<<std::endl;
    std::cin>>op;
    
} while(op!=0);
} 
#endif // !1