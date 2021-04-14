#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#define MAX_VACINAS 50

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
        std::cout<<"Tipo de vacina: \n"<< vacinas[i].tipoVacina;
        std::cout<<"Dose da vacina: \n"<< vacinas[i].quantidadeDoses;
        std::cout<<"Intervalo entre as doses: \n"<< vacinas[i].intervaloDias;
        std::cout<<"\n---------------\n"<<std::endl;

        }
    
    }



}