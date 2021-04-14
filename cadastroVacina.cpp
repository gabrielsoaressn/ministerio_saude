#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "structVacina.cpp"

#define MAX_VACINAS 50

Vacina vacinas[MAX_VACINAS];

void menu();
void cadastrarVacina();


int main()
{
    menu();


    return 0;
}


    void cadastrarVacina()
    {
    char tipoVacina[50];
    int quantidadeDoses;
    int intervaloDias;
    int op;

do{
    std::cout<<"Tipo da vacina: "<<std::endl;
    fgets(tipoVacina,sizeof(tipoVacina),stdin);
    std::cout<<"Quantidade de Doses: "<<std::endl;
    std::cin>>quantidadeDoses;
    std::cout<<"Intervalo de dias: "<<std::endl;
    std::cin>>intervaloDias;
    

    for(int i = 0; i < MAX_VACINAS; ++i)
    {
        if(vacinas[i].ativo ==0)
        {
            vacinas[i].quantidadeDoses = quantidadeDoses;
            vacinas[i].intervaloDias = intervaloDias;
            strcpy(vacinas[i].tipoVacina, tipoVacina);
            break;
        }   
    }


    std::cout<<"1-Continuar\n 0-Sair"<<std::endl;
    std::cin>>op;
    
} while(op!=0);
} 

void menu()
{
    int op;
    
    do
    {
    system("cls");
    std::cout<<"\n 1- Cadastrar Vacina\n 2- Remover Vacina"<<std::endl;
    std::cout<<"\n 3- Pesquisar Vacina\n 0 - Sair"<<std::endl;
    std::cin>>op;
    getchar();

     switch(op)
    {
            case 1:
            cadastrarVacina();
            break;
    } 
    } while(op != 0); 

}