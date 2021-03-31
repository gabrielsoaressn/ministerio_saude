#include <iostream>
#include <string.h>
#define MAX_MEDICAMENTOS 50
typedef struct 
{
    int dosagem;
    char administracao[50];
    char disponibilizacao[50];
    int ativo;

}Medicamento;

Medicamento medicamentos[MAX_MEDICAMENTOS];

void menu();
void cadastrar();


int main()
{
    menu();


    return 0;
}


    void cadastrar()
    {
    int dosagem;
    char administracao[50];
    char disponibilizacao[50];
    int op;

do{
    std::cout<<"Forma de administracao: "<<std::endl;
    fgets(administracao,sizeof(administracao),stdin);
    std::cout<<"Forma de disponibilizacao: "<<std::endl;
    fgets(disponibilizacao,sizeof(disponibilizacao),stdin);
    std::cout<<"Dosagem do medicamento: "<<std::endl;
    std::cin>>dosagem;
  
    

    for(int i = 0; i < MAX_MEDICAMENTOS; ++i)
    {
        if(medicamentos[i].ativo ==0)
        {
            medicamentos[i].dosagem = dosagem;
            strcpy(medicamentos[i].administracao, administracao);
            strcpy(medicamentos[i].disponibilizacao, disponibilizacao);
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
    std::cout<<"\n 1- Cadastrar Medicamento\n 2- Remover Medicamento"<<std::endl;
    std::cout<<"\n 3- Pesquisar Medicamento\n 0 - Sair"<<std::endl;
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