#ifndef CADASTROMEDICAMENTO_CPP
#define CADASTROMEDICAMENTO_CPP

#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "structMedicamento.cpp"
#include <string>
#include <cstdlib>
#include <stdio.h>

#define MAX_MEDICAMENTOS 50 // Variavel global para facilitar o controle dos laços de repetição que executam o cadastro

using namespace std;

Medicamento medicamentos[MAX_MEDICAMENTOS];

//Variavel da Saori
int quantidadeTotalMedicamentosMS;

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
    string administracao;
    string disponibilizacao;
    int op;
    string nome;
        
    //Saori aqui colocando as ultimas coisas
    string fabricante;
    string dataVenc;

    do{
        std::cout<<"Forma de administracao: "<<std::endl;
        cin >> administracao;
        std::cout<<"Forma de disponibilizacao: "<<std::endl;
        cin >> disponibilizacao;
        std::cout<<"Dosagem do medicamento: "<<std::endl;
        std::cin>>dosagem;
        std::cout<<"Quantidade de medicamentos: "<<std::endl;
        std::cin>>quantidadeDmedicamento;
        std::cout<<"nome: "<<endl;
        cin >> nome;
        
        //Saori Aqui colocando variaveis
        std::cout << "Fabricante: " << endl;
        cin >> fabricante;
        std::cout << "Data de Vencimento: " << endl;
        cin >> dataVenc;
        
        
        
        //Variavel da Saori
        quantidadeTotalMedicamentosMS += quantidadeDmedicamento;


        for(int i = 0; i < MAX_MEDICAMENTOS; ++i)
        {
            if(medicamentos[i].ativo ==0)
            {
                medicamentos[i].dosagem = dosagem;
                medicamentos[i].administracao = administracao;
                medicamentos[i].disponibilizacao = disponibilizacao;
                medicamentos[i].quantidadeDmedicamento = quantidadeDmedicamento;
                medicamentos[i].nome = nome;
                medicamentos[i].ativo=1; // Atualiza o valor de ativo para 1, fazendo com que o cadastro seja efetivado e permitindo a consulta.
                
                //Saori alterando aqui
                medicamentos[i].fabricante = fabricante;
                medicamento[i].dataVenc = dataVenc;
                break;
            }
        }


    std::cout<<" 1) Continuar\n 0) Sair"<<std::endl;
    std::cin>>op;

} while(op!=0);
}

void menuCadastroMedicamento()
{
    int op;

    do
    {
        system("cls");
        std::cout<<"\n 1) Cadastrar Medicamento\n 2) Remover Medicamento"<<std::endl;
        std::cout<<" 3) Pesquisar Medicamento\n 0) Sair"<<std::endl;
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
#endif
