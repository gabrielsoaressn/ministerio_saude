#ifndef CADASTROVACINA_CPP
#define CONTA_CADASTROVACINA_CPP

#include <iostream>
#include <ios>
#include <limits>
#include "structVacina.cpp"
#include <string>

#define MAX_VACINAS 50 // Variavel global para facilitar o controle dos laços de repetição que executam o cadastro

using namespace std;

Vacina vacinas[MAX_VACINAS];

//Saori Aqui, coloquei essa variavel, Aqui ela consegue ser puxada para qualquer funcao?
int quantidadeTotalVacinasMS;

void menuCadastroVacina();
void cadastrarVacina();


int funcCadastroVacina()
{
    menuCadastroVacina();


    return 0;
}


void cadastrarVacina()
{   
    std::string tipoVacina;
    int quantidadeDoses;
    int intervaloDias;
    int quantidadeDvacina;
    int op;
    
    //Saori alterando aqui
    std::string fabricante;
    std::string dataVenc;

    do{
        std::cout<<"Tipo da vacina: "<<std::endl;
        cin >> tipoVacina;
        std::cout<<"Quantidade de Doses: "<<std::endl;
        std::cin>>quantidadeDoses;
        std::cout<<"Intervalo de dias: "<<std::endl;
        std::cin>>intervaloDias;
        std::cout<<"Quantidade de Vacinas: "<<std::endl;
        std::cin>>quantidadeDvacina;
        
        //Saori Alterando aqui
        std::cout << "Fabricante: " << std::endl;
        cin >> fabricante;
        std::cout << "Data de Vencimento: " <<std::endl;
        cin >> dataVenc;
        
        //Saori aqui de Novo, novamente fazer uma variavel para a minha funcao
        quantidadeTotalVacinasMS += quantidadeDvacina;
    

        for(int i = 0; i < MAX_VACINAS; ++i)
        {
            if(vacinas[i].ativo == 0)
            {
                vacinas[i].quantidadeDoses = quantidadeDoses;
                vacinas[i].quantidadeDvacina = quantidadeDvacina;
                vacinas[i].intervaloDias = intervaloDias;
                vacinas[i].tipoVacina = tipoVacina;
                vacinas[i].ativo=1; // Atualiza o valor de ativo para 1, fazendo com que o cadastro seja efetivado e permitindo a consulta.
                
                //Saori alterando aqui
                vacinas[i].fabricante = fabricante;
                vacinas[i].dataVenc = dataVenc;
                
                if(vacinas[i].ativo==1)
                break;
            }   
        }


    std::cout<<" 1)Continuar\n 0)Sair"<<std::endl;
    std::cin>>op;
    
    }while(op!=0);
} 

void menuCadastroVacina()
{
    int op;
    
    do
    {
        system("cls");
        std::cout<<"\n 1) Cadastrar Vacina\n 2) Remover Vacina";
        std::cout<<"\n 3) Pesquisar Vacina\n 0) Sair"<<std::endl;
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
#endif
