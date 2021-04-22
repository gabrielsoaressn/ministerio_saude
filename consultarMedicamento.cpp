#ifndef CONSULTARMEDICAMENTO_CPP
#define CONSULTARMEDICAMENTO_CPP

#include <string.h>
#include <iostream>
#include <ios>
#include <limits>
#include "cadastroMedicamento.cpp"
#define MAX_MEDICAMENTOS 50

using namespace std;


void consultarMedicamento()
{
    system("cls");

    printf("Lista de Medicamentos\n");

    for(int i = 0; i < MAX_MEDICAMENTOS; ++i )
    {
        if(medicamentos[i].ativo==1)
        {
            std::cout<<"---------------\n"<<std::endl;
            std::cout<<"Nome do medicamento: "<< medicamentos[i].nome<<endl;
            std::cout<<"Disponibilizacao do medicamento: "<< medicamentos[i].disponibilizacao<<endl;
            std::cout<<"Administracao do medicamento: "<< medicamentos[i].administracao<<endl;
            std::cout<<"Dosagem do medicamento: "<< medicamentos[i].dosagem<<endl;
            std::cout<<"Quantidade do medicamento: "<< medicamentos[i].quantidadeDmedicamento<<endl;
            std::cout<<"\n---------------\n"<<std::endl;

        }

    }



}
#endif // !CONSULTARMEDICAMENTO_CPP
