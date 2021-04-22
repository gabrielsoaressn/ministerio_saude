#ifndef STRUCTMEDICAMENTO_CPP
#define STRUCTMEDICAMENTO_CPP
#include <iostream>

typedef struct 
{
    int dosagem;
    
    //Saori alterando aqui
    std::string fabricante;
    std::string dataVenc;
    
    std::string administracao;
    std::string disponibilizacao;
    std::string nome;
    int quantidadeDmedicamento;
    int ativo;

}Medicamento;

#endif
