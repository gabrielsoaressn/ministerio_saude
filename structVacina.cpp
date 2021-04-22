#ifndef STRUCTVACINA_CPP
#define STRUCTVACINA_CPP

typedef struct 
{
    std::string nome;
    std::string tipoVacina;
    
    //Saori Alterando aqui
    std::string fabricante;
    std::string dataVenc;
    
    int quantidadeDoses;
    int intervaloDias;
    int quantidadeDvacina;
    int ativo;

}Vacina;
 #endif
