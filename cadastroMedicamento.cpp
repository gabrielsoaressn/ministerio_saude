#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "structMedicamento.cpp"

#define MAX_MEDICAMENTOS 50 // Variavel global para facilitar o controle dos laços de repetição que executam o cadastro

using namespace std;

Medicamento medicamentos[MAX_MEDICAMENTOS]; 

void menuCadastroMedicamento();
void cadastrarMedicamento();


int funcCadastroMedicamento()
{
    menuCadastroMedicamento();


    return 0;
}


    void cadastrarMedicamento()
    {
    int dosagem;
    int quantidadeDmedicamento;
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
        std::cout<<"Quantidade de medicamentos: "<<std::endl;
        std::cin>>quantidadeDmedicamento; 
    
        

        for(int i = 0; i < MAX_MEDICAMENTOS; ++i)
        {
            if(medicamentos[i].ativo ==0)
            {
                medicamentos[i].dosagem = dosagem;
                strcpy(medicamentos[i].administracao, administracao);
                strcpy(medicamentos[i].disponibilizacao, disponibilizacao);
                medicamentos[i].quantidadeDmedicamento = quantidadeDmedicamento;
                medicamentos[i].ativo=1; // Atualiza o valor de ativo para 1, fazendo com que o cadastro seja efetivado e permitindo a consulta.
                break;
            }   
        }


    std::cout<<"1-Continuar\n 0-Sair"<<std::endl;
    std::cin>>op;
    
} while(op!=0);
} 

void menuCadastroMedicamento()
{
    int op;
    
    do
    {
        system("cls");
        std::cout<<"\n 1- Cadastrar Medicamento\n 2- Remover Medicamento"<<std::endl;
        std::cout<<" 3- Pesquisar Medicamento\n 0 - Sair"<<std::endl;
        std::cin>>op;
        getchar();

     switch(op)
    {
            case 1:
            cadastrarMedicamento();
            break;
    } 
    } while(op != 0); 

}