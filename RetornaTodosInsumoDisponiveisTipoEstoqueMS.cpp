#ifndef RETORNATODOSINSUMOSDISPONIVEISTIPOESTOQUEMS_CPP
#define RETORNATODOSINSUMOSDISPONIVEISTIPOESTOQUEMS_CPP

#include <iostream>
#include <string>

//#include "ConsultaInsumosDistribuidosParaEstados.cpp"

#include "mostraInsumosPorTipo.cpp"

using namespace std;

void RetornaTodosInsumoDisponiveisTipoEstoqueMS(){

     if (quantidadeTotalVacinasMS != 0){ //Para Vacina
        cout << "----------------------------------------------------------\n" << endl;
        cout << "Vacinas Disponiveis no Estoque do MS" << endl;
        cout << "Quantidade: " << quantidadeTotalVacinasMS << "\n" << endl;
        cout << "----------------------------------------------------------\n" << endl;

    }else{
        cout << "----------------------------------------------------------\n" << endl;
        cout << "Vacinas estao Indisponiveis no Estoque do MS.\n" << endl;
        cout << "----------------------------------------------------------\n" << endl;

    }

    if (quantidadeTotalEPIMS != 0){ //Para EPI

        cout << "EPI Disponivel no Estoque do MS" << endl;
        cout << "Quantidade: " << quantidadeTotalEPIMS << "\n" << endl;
        cout << "----------------------------------------------------------\n" << endl;

    }else{

        cout << "EPI Indisponivel no Estoque do MS.\n" << endl;
        cout << "----------------------------------------------------------\n" << endl;

    }

    if (quantidadeTotalMedicamentosMS != 0){ //Para Medicamento

        cout << "Medicamentos Disponivel no Estoque do MS" << endl;
        cout << "Quantidade: " << quantidadeTotalMedicamentosMS << "\n" << endl;
        cout << "----------------------------------------------------------\n" << endl;

    }else{

        cout << "Medicamentos Indisponiveis no Estoque do MS.\n" << endl;
        cout << "----------------------------------------------------------\n" << endl;

    }

}
#endif // RETORNATODOSINSUMOSDISPONIVEISTIPOESTOQUEMS_CPP
