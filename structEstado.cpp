#ifndef STRUCTESTADO_CPP
#define STRUCTESTADO_CPP

#include <iostream>
#include "structMedicamento.cpp"
#include "structEPI.cpp"
#include "structVacina.cpp"


typedef struct
{
    std::string nome;
    Medicamento medicamentosDoEstado[50];
    EPI episDoEstado[50];
    Vacina vacinasDoEstado[50];
    int ativo;

}Estado;

Estado estados[27];

void PreencheEstados(){
    Vacina vac1;
    EPI epi1;
    Medicamento med1;
    
    estados[0].nome = "AC";
    estados[1].nome = "AL";
    estados[2].nome = "AP";
    estados[3].nome = "AM";
    estados[4].nome = "BA";
    estados[5].nome = "CE";
    estados[6].nome = "DF";
    estados[7].nome = "ES";
    estados[8].nome = "GO";
    estados[9].nome = "MA";
    estados[10].nome = "MT";
    estados[11].nome = "MS";
    estados[12].nome = "MG";
    estados[13].nome = "PA";
    estados[14].nome = "PB";
    estados[15].nome = "PR";
    estados[16].nome = "PE";
    estados[17].nome = "PI";
    estados[18].nome = "RJ";
    estados[19].nome = "RN";
    estados[20].nome = "RS";
    estados[21].nome = "RO";
    estados[22].nome = "RR";
    estados[23].nome = "SC";
    estados[24].nome = "SP";
    estados[25].nome = "SE";
    estados[26].nome = "TC";

    int i;
    for (i=0; i<27;i++){
 
    estados[i].ativo = 0;

    }
}
#endif