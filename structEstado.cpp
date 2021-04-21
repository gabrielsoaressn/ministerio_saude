#include <iostream>
#include "cadastroMedicamento.cpp"
#include "cadastroEPI.cpp"
#include "cadastroVacina.cpp"


typedef struct
{
    std::string nome[2];
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
    
    estados[0].nome[2] = "AC";
    estados[1].nome[2] = "AL";
    estados[2].nome[2] = "AP";
    estados[3].nome[2] = "AM";
    estados[4].nome[2] = "BA";
    estados[5].nome[2] = "CE";
    estados[6].nome[2] = "DF";
    estados[7].nome[2] = "ES";
    estados[8].nome[2] = "GO";
    estados[9].nome[2] = "MA";
    estados[10].nome[2] = "MT";
    estados[11].nome[2] = "MS";
    estados[12].nome[2] = "MG";
    estados[13].nome[2] = "PA";
    estados[14].nome[2] = "PB";
    estados[15].nome[2] = "PR";
    estados[16].nome[2] = "PE";
    estados[17].nome[2] = "PI";
    estados[18].nome[2] = "RJ";
    estados[19].nome[2] = "RN";
    estados[20].nome[2] = "RS";
    estados[21].nome[2] = "RO";
    estados[22].nome[2] = "RR";
    estados[23].nome[2] = "SC";
    estados[24].nome[2] = "SP";
    estados[25].nome[2] = "SE";
    estados[26].nome[2] = "TC";

    int i;
    for (i=0; i<27;i++){
    estados[i].vacinasDoEstado[50] = vac1;
 
    estados[i].ativo = 0;

    }
}
