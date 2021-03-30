#include <iostream>
#include <string.h>
#define MAX_VACINAS 50
typedef struct 
{
    char tipoVacina[50];
    int quantidadeDoses[4];
    int intervaloDias[50];
    int ativo;

}Vacina;

Vacina vacinas[MAX_VACINAS];

void menu();
void cadastrar();


int main()
{
    menu();


    return 0;
}


    void cadastrar()
    {
    char tipoVacina[50];
    int quantidadeDoses[4];
    int intervaloDias[50];
    int op;

do{
    std::cout<<"Tipo da vacina: "<<std::endl;
    fgets(tipoVacina,sizeof(tipoVacina),stdin);
    std::cout<<"Quantidade de Doses: "<<std::endl;
    std::cin>>quantidadeDoses[0];
    std::cout<<"Intervalo de dias: "<<std::endl;
    std::cin>>intervaloDias[0];
    

    for(int i = 0; i < MAX_VACINAS; ++i)
    {
        if(vacinas[i].ativo ==0)
        {
            vacinas[i].quantidadeDoses[0] = quantidadeDoses[0];
            vacinas[i].intervaloDias[0] = intervaloDias[0];
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
            cadastrar();
            break;
    } 
    } while(op != 0); 

}