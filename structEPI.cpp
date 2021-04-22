#ifndef STRUCTEPI_CPP
#define STRUCTEPI_CPP

#include <iostream>

typedef struct 
{
    std::string tipoEPI;
    std::string descricaoEPI;
    
    //Saori alterando aqui
    std::string fabricante;
    std::string dataVenc;
    
    int quantidadeDepi;
    int ativo;

}EPI;
#endif 
