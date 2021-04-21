#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "structVacina.cpp"

#define MAX_VACINAS 50 // Variavel global para facilitar o controle dos laços de repetição que executam o cadastro

using namespace std;

Vacina vacinas[MAX_VACINAS];

void menuCadastroVacina();
void cadastrarVacina();


int funcCadastroVacina()
{
    menuCadastroVacina();


    return 0;
}


void cadastrarVacina()
{
    char tipoVacina[50];
    int quantidadeDoses;
    int intervaloDias;
    int quantidadeDvacina;
    int op;

    do{
        std::cout<<"Tipo da vacina: "<<std::endl;
        fgets(tipoVacina,sizeof(tipoVacina),stdin);
        std::cout<<"Quantidade de Doses: "<<std::endl;
        std::cin>>quantidadeDoses;
        std::cout<<"Intervalo de dias: "<<std::endl;
        std::cin>>intervaloDias;
        std::cout<<"Quantidade de Vacinas: "<<std::endl;
        std::cin>>quantidadeDvacina;
    
    

        for(int i = 0; i < MAX_VACINAS; ++i)
        {
            if(vacinas[i].ativo ==0)
            {
                vacinas[i].quantidadeDoses = quantidadeDoses;
                vacinas[i].quantidadeDvacina = quantidadeDvacina;
                vacinas[i].intervaloDias = intervaloDias;
                vacinas[i].tipoVacina[50] = tipoVacina[50];
                vacinas[i].ativo=1; // Atualiza o valor de ativo para 1, fazendo com que o cadastro seja efetivado e permitindo a consulta.
                break;
            }   
        }


    std::cout<<"1-Continuar\n 0-Sair"<<std::endl;
    std::cin>>op;
    
    }while(op!=0);
} 

void menuCadastroVacina()
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