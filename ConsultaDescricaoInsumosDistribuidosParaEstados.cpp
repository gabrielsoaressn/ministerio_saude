#ifndef CONSULTADESCRICAOINSUMOSDISTRIBUIDOSPARAESTADO_CPP
#define CONSULTADESCRICAOINSUMOSDISTRIBUIDOSPARAESTADO_CPP

#include <iostream>
#include <string>
#include "transferirInsumo.cpp"

using namespace std;


void ConsultaDescricaoInsumosDistribuidosParaEstados(){

    int y, descricao, n = 1, i, j;

    cout << "----------------------------------------------------------\n" << endl;
    cout << "Essa funcao consulta as descricoes dos Insumos Distribuidos para os Estados\n" << endl;
    cout << "----------------------------------------------------------\n" << endl;
    cout << "Desejas consultar alguma descricao em especifico?" << endl;
    cout << "Digite 1 para Sim e 0 para Nao"<< endl;
    cin >> y;

    while(n == 1){
        if (y == 1){
            cout << "----------------------------------------------------------\n" << endl;
            cout << "Digite o Insumo que desejas consultar a descricao: " << endl;;
            cout << " 1) Vacina" << endl;
            cout << " 2) EPI" << endl;
            cout << " 3) Medicamento" << endl;
            cin >> descricao;

            switch (descricao){
                case 1:{
                    if(quantidadeTotalVacinasEstados != 0){
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Descricao das Vacinas: " << "\n" << endl;

                        for(j = 0; j < 27; ++j){
                            for(i = 0; i < MAX_VACINAS; ++i ){
                                if(vacinas[i].ativo == 1){
                                    cout << "Estado: " << estados[j].nome << endl;
                                    cout << "Atributos: " << endl;
                                    cout << "Tipo de vacina: " << estados[j].vacinasDoEstado[i].tipoVacina << endl;
                                    cout << "Dose da vacina: " << estados[j].vacinasDoEstado[i].quantidadeDoses << endl;
                                    cout << "Intervalo entre as doses: " << estados[j].vacinasDoEstado[i].intervaloDias << endl;
                                    cout << "Fabricante: " << estados[j].vacinasDoEstado[i].fabricante << endl;
                                    cout << "Data de Vencimento: " <<estados[j].vacinasDoEstado[i].dataVenc << endl;
                                    cout << "----------------------------------------------------------\n" << endl;
                                }
                            }
                        }
                        cout << "Desejas consultar mais alguma descricao?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> n;
                            break;
                    }else{
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Indisponivel por falta no estoque\n" << endl;
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma descricao?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> n;
                            break;
                    }
                }
                case 2:{
                    if(quantidadeTotalEPIEstados != 0){
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Descricao das EPIs: " << "\n" << endl;
                        for(j = 0; j < 27; ++j){
                            for(i = 0; i < MAX_EPI; ++i ){
                                if(estados[j].episDoEstado[i].ativo == 1){
                                    cout << "Estado: " << estados[j].nome << endl;
                                    cout << "Atributos: " << endl;
                                    cout << "Tipo da EPI: " << estados[j].episDoEstado[i].tipoEPI << endl;
                                    cout << "Descricao da EPI: " << estados[j].episDoEstado[i].descricaoEPI << endl;
                                    cout << "Fabricante: " << estados[j].episDoEstado[i].fabricante << endl;
                                    cout << "Data de Vencimento: " <<estados[j].episDoEstado[i].dataVenc << endl;
                                    cout << "----------------------------------------------------------\n" << endl;
                                }
                            }
                        }
                        cout << "Desejas consultar mais alguma descricao?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> n;
                            break;
                    }else{
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Indisponivel por falta no estoque.\n" << endl;
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma descricao?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> n;
                            break;
                    }
                }
                case 3:{
                    if(quantidadeTotalMedicamentosEstados != 0){
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Descricao dos Medicamentos: " << "\n" << endl;
                        for(j = 0; j < 27; ++j){
                            for(i = 0; i < MAX_MEDICAMENTOS; ++i){
                                if(medicamentos[i].ativo == 1){
                                    cout << "Estado: " << estados[j].nome << endl;
                                    cout << "Atributos: " << endl;
                                    cout << "Nome do medicamento: "<< estados[j].medicamentosDoEstado[i].nome << endl;
                                    cout << "Disponibilizacao do medicamento: "<< estados[j].medicamentosDoEstado[i].disponibilizacao << endl;
                                    cout << "Administracao do medicamento: "<< estados[j].medicamentosDoEstado[i].administracao << endl;
                                    cout << "Dosagem do medicamento: "<< estados[j].medicamentosDoEstado[i].dosagem << endl;
                                    cout << "Fabricante: " << estados[j].medicamentosDoEstado[i].fabricante << endl;
                                    cout << "Data de Vencimento: " <<estados[j].medicamentosDoEstado[i].dataVenc << endl;
                                    cout << "----------------------------------------------------------\n" << endl;
                                }
                            }
                        }
                        cout << "Desejas consultar mais alguma descricao?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> n;
                            break;
                    }else{
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Indisponivel por falta no estoque\n" << endl;
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma descricao?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> n;
                            break;
                    }
                }
                default:{
                    cout << "----------------------------------------------------------\n" << endl;
                    cout << "Input Invalido.\n" << endl;
                    cout << "----------------------------------------------------------\n" << endl;
                        break;
                }
            }
        }

        if(y == 0){

            cout << "----------------------------------------------------------\n" << endl;
            cout << "Lista de Todas as Descricoes dos Insumos Distribuidos para Estados\n" << endl;
            cout << "----------------------------------------------------------\n" << endl;
                if(QuantidadeTotalVacinasEstados != 0){
                    cout << "Descricao das Vacinas: " << endl;
                        for(j = 0; j < 27; ++j){
                            for(i = 0; i < MAX_VACINAS; ++i ){
                                if(vacinas[i].ativo == 1){
                                    cout << "Estado: "<< estados[j].nome << endl;
                                    cout << "Atributos: " << endl;
                                    cout << "Tipo de vacina: " << estados[j].vacinasDoEstado[i].tipoVacina << endl;
                                    cout << "Dose da vacina: " << estados[j].vacinasDoEstado[i].quantidadeDoses << endl;
                                    cout << "Intervalo entre as doses: " << estados[j].vacinasDoEstado[i].intervaloDias << endl;
                                    cout << "Fabricante: " << estados[j].vacinasDoEstado[i].fabricante << endl;
                                    cout << "Data de Vencimento: " <<estados[j].vacinasDoEstado[i].dataVenc << endl;
                                    cout << "----------------------------------------------------------\n" << endl;
                                }
                            }
                        }
                }else{
                    cout << "Indisponivel por falta no estoque.\n" << endl;
                    cout << "----------------------------------------------------------\n" << endl;
                }
                if(QuantidadeTotalEPIEstados != 0){
                    cout << "Descricao das EPIs: " << endl;
                        for(j = 0; j < 27; ++j){
                            for(i = 0; i < MAX_EPI; ++i ){
                                if(estados[j].episDoEstado[i].ativo == 1){
                                    cout << "Estado: " << estados[j].nome << endl;
                                    cout << "Atributos: " << endl;
                                    cout << "Tipo da EPI: " << estados[j].episDoEstado[i].tipoEPI << endl;
                                    cout << "Descricao da EPI: " << estados[j].episDoEstado[i].descricaoEPI << endl;
                                    cout << "Fabricante: " << estados[j].episDoEstado[i].fabricante << endl;
                                    cout << "Data de Vencimento: " <<estados[j].episDoEstado[i].dataVenc << endl;
                                    cout << "----------------------------------------------------------\n" << endl;
                                }
                            }
                        }
                }else{
                    cout << "Indisponivel por falta no estoque.\n" << endl;
                    cout << "----------------------------------------------------------\n" << endl;
                    }
                if(QuantidadeTotalMedicamentosEstados != 0){
                    cout << "Descricao dos Medicamentos: " << endl;
                        for(j = 0; j < 27; ++j){
                            for(i = 0; i < MAX_MEDICAMENTOS; ++i){
                                if(medicamentos[i].ativo == 1){
                                    cout << "Estado: " << estados[j].nome << endl;
                                    cout << "Atributos: " << endl;
                                    cout << "Nome do medicamento: "<< estados[j].medicamentosDoEstado[i].nome << endl;
                                    cout << "Disponibilizacao do medicamento: "<< estados[j].medicamentosDoEstado[i].disponibilizacao << endl;
                                    cout << "Administracao do medicamento: "<< estados[j].medicamentosDoEstado[i].administracao << endl;
                                    cout << "Dosagem do medicamento: "<< estados[j].medicamentosDoEstado[i].dosagem << endl;
                                    cout << "Fabricante: " << estados[j].episDoEstado[i].fabricante << endl;
                                    cout << "Data de Vencimento: " <<estados[j].episDoEstado[i].dataVenc << endl;
                                    cout << "----------------------------------------------------------\n" << endl;
                                }
                            }
                        }
                }else{
                    cout << "Indisponivel por falta no estoque.\n" << endl;
                    cout << "----------------------------------------------------------\n" << endl;
                }
            n = 0;
            break;
        }

        if(y != 1 && y != 0){
            cout << "Digite um numero valido!!!" << endl;
            cout << "----------------------------------------------------------\n" << endl;
            cout << "Digite 1 para Sim e 0 para Nao" << endl;
            cin >> y;
        }
    }
}
#endif
