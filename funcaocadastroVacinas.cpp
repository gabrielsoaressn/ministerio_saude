#ifndef FUNCAOCADASTROVACINAS_CPP 
#define FUNCAOCADASTROVACINAS_CPP


#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "cadastroVacina.cpp"
#include <string>


using namespace std;

void cadastrarVacinas()
    {
    string tipoVacina;
    int quantidadeDoses;
    int intervaloDias;
    int op;

    do{
        std::cout<<"Tipo da vacina: "<<std::endl;
        getline(cin, tipoVacina);
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout<<"Quantidade de Doses: "<<std::endl;
        std::cin>>quantidadeDoses;
        std::cout<<"Intervalo de dias: "<<std::endl;
        std::cin>>intervaloDias;
    /* pegar os dados do usuario, o cin.ignore é para debugar um erro no printf */
    

    for(int i = 0; i < MAX_VACINAS; ++i)
    {
        if(vacinas[i].ativo == 0)
        {
            vacinas[i].quantidadeDoses = quantidadeDoses;
            vacinas[i].intervaloDias = intervaloDias;
            vacinas[i].tipoVacina, tipoVacina;
            vacinas[i].ativo=1;
            break;
            /*esses laços são para gravar os dados que o usuario entrou*/
        }   
    }


    std::cout<<"1-Continuar\n 0-Sair"<<std::endl;
    std::cin>>op;
    
} while(op!=0);
}
#endif // !1
