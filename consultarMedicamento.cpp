#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
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
        std::cout<<"Disponibilizacao do medicamento: \n"<< medicamentos[i].disponibilizacao;
        std::cout<<"Administracao do medicamento: \n"<< medicamentos[i].administracao;
        std::cout<<"Dosagem do medicamento: \n"<< medicamentos[i].dosagem;
        std::cout<<"\n---------------\n"<<std::endl;

        }
    
    }



}