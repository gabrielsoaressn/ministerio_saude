void ConsultaDescricaoInsumosDistribuidosParaEstados(){

    int y, descricao, n = 1, i;

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
            cout<<" 1) Vacina" << endl;
            cout<<" 2) EPI" << endl;
            cout<<" 3) Medicamento" << endl;
            cin >> descricao;

            switch (descricao){
                case 1:{
                    if(quantidadeTotalVacinasEstados != 0){
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Descricao das Vacinas: " << "\n" << endl;
                        for (i = 0; i < 50; i++){
                                if(vacinas[i].ativo == 1){
                                    cout << "Tipo de vacina: "<< vacinas[i].tipoVacina << endl;
                                    cout << "Dose da vacina: "<< vacinas[i].quantidadeDoses << endl;
                                    cout << "Intervalo entre as doses: "<< vacinas[i].intervaloDias << endl;
                                    cout << "----------------------------------------------------------\n" << endl;
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
                    if(quantidadeTotalEPIEstados != 0){ //verEssaVariavel
                        cout << "----------------------------------------------------------\n" << endl;
                        cout << "Descricao de EPI: " << "\n" << endl;
                        for(i = 0; i < 50; i++){
                            if(epis[i].ativo == 1){
                                cout << "Tipo da EPI: " << epis[i].tipoEPI << endl;
                                cout << "Descricao da EPI: " << epis[i].descricaoEPI << endl;
                                cout << "----------------------------------------------------------\n" << endl;
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
                        for (i = 0; i < 50; i++){
                            if(medicamentos[i].ativo == 1){
                                cout << "Disponibilizacao do medicamento: \n"<< medicamentos[i].disponibilizacao << endl;
                                cout << "Administracao do medicamento: \n"<< medicamentos[i].administracao << endl;
                                cout << "Dosagem do medicamento: \n"<< medicamentos[i].dosagem << endl;
                                cout << "----------------------------------------------------------\n" << endl;
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
                    for (i = 0; i < 50; i++){
                        if(vacinas[i].ativo == 1){
                            cout << "Tipo de vacina: "<< vacinas[i].tipoVacina << endl;
                            cout << "Dose da vacina: "<< vacinas[i].quantidadeDoses << endl;
                            cout << "Intervalo entre as doses: "<< vacinas[i].intervaloDias << endl;
                            cout << "----------------------------------------------------------\n" << endl;
                        }
                    }
                }else{
                    cout << "Indisponivel por falta no estoque.\n" << endl;
                    cout << "----------------------------------------------------------\n" << endl;
                }
                if(QuantidadeTotalEPIEstados != 0){
                    cout << "Descricao das Vacinas: " << endl;
                        for(i = 0; i < 50; i++){
                            if(epis[i].ativo == 1){
                                cout << "Tipo da EPI: " << epis[i].tipoEPI << endl;
                                cout << "Descricao da EPI: " << epis[i].descricaoEPI << endl;
                                cout << "----------------------------------------------------------\n" << endl;
                            }
                        }
                }else{
                    cout << "Indisponivel por falta no estoque.\n" << endl;
                    cout << "----------------------------------------------------------\n" << endl;
                    }
                if(QuantidadeTotalMedicamentosEstados != 0){
                    cout << "Descricao dos Medicamentos: " << endl;
                        for (i = 0; i < 50; i++){
                            if(medicamentos[i].ativo == 1){
                                cout << "Disponibilizacao do medicamento: \n"<< medicamentos[i].disponibilizacao << endl;
                                cout << "Administracao do medicamento: \n"<< medicamentos[i].administracao << endl;
                                cout << "Dosagem do medicamento: \n"<< medicamentos[i].dosagem << endl;
                                cout << "----------------------------------------------------------\n" << endl;
                            }
                        }
                }else{
                    cout << "Indisponivel por falta no estoque.\n" << endl;
                    cout << "----------------------------------------------------------\n" << endl;
                    }

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
