#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "structEPI.cpp"

using namespace std;
#define MAX_EPI 50


EPI epis[MAX_EPI];

void menu();
void cadastrarEPI();


int main()
{
    menu();


    return 0;
}


    void cadastrarEPI()
    {
    char tipoEPI[50];
    int quantidadeDepi;
    char descricaoEPI[50];
    int op;

do{
    std::cout<<"Tipo de EPI: "<<std::endl;
    fgets(tipoEPI,sizeof(tipoEPI),stdin);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    std::cout<<"Descricao da EPI: "<<std::endl;
    fgets(descricaoEPI,sizeof(descricaoEPI),stdin);
    std::cout<<"Quantidade de EPI: "<<std::endl;
    std::cin>>quantidadeDepi;
   

    for(int i = 0; i < MAX_EPI; ++i)
    {
        if(epis[i].ativo ==0)
        {
            epis[i].quantidadeDepi = quantidadeDepi;
            strcpy(epis[i].tipoEPI, tipoEPI);
            strcpy(epis[i].descricaoEPI, descricaoEPI);
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
    std::cout<<"\n 1- Cadastrar EPI\n 2- Remover Vacina"<<std::endl;
    std::cout<<"\n 3- Pesquisar EPI\n 0 - Sair"<<std::endl;
    std::cin>>op;
    getchar();

     switch(op)
    {
            case 1:
            cadastrarEPI();
            break;
    } 
    } while(op != 0); 

}