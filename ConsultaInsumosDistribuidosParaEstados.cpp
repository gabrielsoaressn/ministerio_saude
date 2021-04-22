#ifndef CONSULTAINSUMOSDISTRIBUIDOSPARAESTADOS_CPP
#define CONSULTAINSUMOSDISTRIBUIDOSPARAESTADOS_CPP

#include <iostream>
#include <string>

#include "ConsultaInsumosDistribuidosParaEstados.cpp"

using namespace std;

void ConsultaInsumosDistribuidosParaEstados(){

    int x, insumo, m = 1;

    cout << "----------------------------------------------------------\n" << endl;
    cout << "Essa funcao consulta os Insumos Distribuidos para Estados\n" << endl;
    cout << "----------------------------------------------------------\n" << endl;
    cout << "Desejas consultar um Insumo em especifico?" << endl;
    cout << "Digite 1 para Sim e 0 para Nao"<< endl;
    cin >> x;

    while(m == 1){
        if (x == 1){
            cout << "----------------------------------------------------------\n" << endl;
            cout << "Digite o Insumo que desejas consultar: " << endl;
            cout<<" 1) Vacina" << endl;
            cout<<" 2) EPI" << endl;
            cout<<" 3) Medicamento" << endl;
            cin >> insumo;

            switch (insumo){
                case 1:{
                    if (quantidadeTotalVacinasEstados != 0){
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "A quantidade de doses de Vacina distribuidas para os Estados eh: "
                             << quantidadeTotalVacinasEstados << "\n" << endl; //Colocar a variavel ou a soma das quantidades por Estado
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma quantidade?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> m;
                            break;
                    }else{
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Nenhuma Vacina foi distribuida.\n" << endl;
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma quantidade?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> m;
                        break;
                    }
                }
                case 2:{
                    if (quantidadeTotalEPIEstados != 0){
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "A quantidade de EPI distribuidas para os Estados eh: "
                             << quantidadeTotalEPIEstados << "\n" << endl; //Colocar a variavel ou a soma das quantidades por Estado
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma quantidade?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> m;
                            break;
                    }else{
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Nenhum EPI foi distribuido.\n" << endl;
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma quantidade?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> m;
                        break;
                    }
                }
                case 3:{
                    if (quantidadeTotalMedicamentosEstados != 0){
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "A quantidade de Medicamentos distribuidos para os Estados eh: "
                             << quantidadeTotalMedicamentosEstados << "\n" <<endl; //Colocar a variavel ou a soma das quantidades por Estado
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma quantidade?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> m;
                            break;
                    }else{
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Nenhum Medicamento foi distribuido.\n" << endl;
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Desejas consultar mais alguma quantidade?" << endl;
                        cout << "Digite 1 para Sim e 0 para Nao" << endl;
                        cin >> m;
                            break;
                    }
                }
                default: {
                    cout << "----------------------------------------------------------\n" << endl;
                    cout << "Input Invalido.\n" << endl;
                    cout << "----------------------------------------------------------\n" << endl;
                    break;
                }
            }
        }

        if(x == 0){

            cout << "----------------------------------------------------------\n" << endl;
            cout << "Lista Geral dos Insumos Distribuidos para Estados\n" << endl;
            cout << "----------------------------------------------------------\n" << endl;
                if(quantidadeTotalVacinasEstados != 0){
                    cout << "Quantidade de Vacinas: " << quantidadeTotalVacinasEstados << "\n" << endl; //Colocar a variavel ou a soma das quantidades por Estado
                }else{
                    cout << "Nenhuma Vacina foi Distribuida.\n" << endl;
                }
                if(quantidadeTotalEPIEstados != 0){
                    cout << "Quantidade de EPI: " << quantidadeTotalEPIEstados << "\n" << endl; //Colocar a variavel ou a soma das quantidades por Estado
                }else{
                    cout << "Nenhum EPI foi Distribuido.\n" << endl;
                }
                if(quantidadeTotalMedicamentosEstados != 0){
                    cout << "Quantidade de Medicamento: " << quantidadeTotalMedicamentosEstados << "\n" << endl; //Colocar a variavel ou a soma das quantidades por Estado
                }else{
                    cout << "Nenhum Medicamento foi Distribuido.\n" << endl;
                }
            break;
        }

        if(x != 1 && x != 0){
            cout << "Digite um numero valido!!!" << endl;
            cout << "----------------------------------------------------------\n" << endl;
            cout << "Digite 1 para Sim e 0 para Nao" << endl;
            cin >> x;
        }
    }
}
#endif
