#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#define MAX_MEDICAMENTOS 50
#include "structMedicamento.cpp"

using namespace std;
Medicamento medicamentos[MAX_MEDICAMENTOS];

void cadastrar()
    {
    int dosagem;
    char administracao[50];
    char disponibilizacao[50];
    int op;

do{
    std::cout<<"Forma de administracao: "<<std::endl;
    fgets(administracao,sizeof(administracao),stdin);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::cout<<"Forma de disponibilizacao: "<<std::endl;
    fgets(disponibilizacao,sizeof(disponibilizacao),stdin);
    std::cout<<"Dosagem do medicamento: "<<std::endl;
    std::cin>>dosagem;
    /* pegar os dados do usuario, o cin.ignore é para debugar um erro no printf */
  
    

    for(int i = 0; i < MAX_MEDICAMENTOS; ++i)
    {
        if(medicamentos[i].ativo ==0)
        {
            medicamentos[i].dosagem = dosagem;
            strcpy(medicamentos[i].administracao, administracao);
            strcpy(medicamentos[i].disponibilizacao, disponibilizacao);
            medicamentos[i].ativo=1;
            break;
             /*esses laços são para gravar os dados que o usuario entrou*/
        }   
    }


    std::cout<<"1-Continuar\n 0-Sair"<<std::endl;
    std::cin>>op;
    
} while(op!=0);
} 