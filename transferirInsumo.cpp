#ifndef TRANSFERIRINSUMO_CPP
#define TRANSFERIRINSUMO_CPP

#include <iostream>
#include "structEstado.cpp"
#include "consultarMedicamento.cpp"
#include "consultarEPI.cpp"
#include "consultarVacina.cpp"

//Variaveis da Saori
int quantidadeTotalVacinasEstados;
int quantidadeTotalEPIEstados;
int quantidadeTotalMedicamentosEstados;

void menuTransferirInsumo(){
    int i, quantidade, select, a, b;
    string tipoVacina, nomeDoEstado, tipoEPI, nome;
    PreencheEstados();

    do{
        cout<<" 1) Enviar Vacina"<<endl;
        cout<<" 2) Enviar EPI"<<endl;
        cout<<" 3) Enviar Medicamento"<<endl;
        cout<<" 0) Voltar"<<endl;
        cin >> select;

        if(select==0)
            return;
        switch (select){
        case 1:{
            cout<<"Que tipo de vacina?"<<endl;
            cin >> tipoVacina;
            cout << "Quantidade: ";
            cin >> quantidade;
            cout <<"\nEstado: ";
            cin >> nomeDoEstado;
            
            //Linha De Codigo da Saori
            quantidadeTotalVacinasEstados += quantidade;                      
            
            for(i=0; i<MAX_EPI; ++i)//testando as vacinas existentes para saber se elas batem com a que o usuário deseja enviar
            {
                if(tipoVacina == vacinas[i].tipoVacina){//o tipo digitado é o de alguma vacina existente?
                    vacinas[i].quantidadeDvacina -= quantidade;//então pode enviar(diminui a quantidade no estoque)
                    
                    //Linha de código que talvez eu(saori) precise
                    quantidadeTotalVacinasMS -= quantidade;
                    
                    b=i;
                    for(i=0;i<27;i++){
                        if(estados[i].nome==nomeDoEstado){
                            cout<<"estado identificado\n";
                            for(a=0;a<50;a++){
                                if(estados[i].vacinasDoEstado[a].ativo==0)
                                    {//Esse espaço está vazio?
                                    estados[i].vacinasDoEstado[a].quantidadeDvacina += quantidade; //envia(aumenta a quantidade no estado)
                                    cout<<"enviado"<<endl;
                                    //para que o restante dos atributos do structs sejam preenchidos
                                    estados[i].vacinasDoEstado[a].intervaloDias=vacinas[b].intervaloDias;
                                    estados[i].vacinasDoEstado[a].quantidadeDoses=vacinas[b].quantidadeDoses;
                                    estados[i].vacinasDoEstado[a].ativo=1;
                                    estados[i].vacinasDoEstado[a].tipoVacina=tipoVacina;
                                    
                                    //Saori alterando aqui
                                    estados[i].vacinasDoEstado[a].fabricante = vacinas[b].fabricante;
                                    estados[i].vacinasDoEstado[a].dataVenc = vacinas[b].dataVenc;
                                    break;
                                }else{
                                continue;
                            }
                        }
                        }else continue;
                        }

                }
            }break;
          }
        case 2:{
            cout<<"Que tipo de EPI?"<<endl;
            cin >> tipoEPI;
            cout << "Quantidade: ";
            cin >> quantidade;
            cout <<"\nEstado: ";
            cin >> nomeDoEstado;
            
            //Linha de Codigo da Saori
            quantidadeTotalEPIEstados += quantidade;
            
            for(i=0; i<MAX_EPI; ++i)//testando as vacinas existentes para saber se elas batem com a que o usuário deseja enviar
            {
                if(tipoEPI == epis[i].tipoEPI){//o tipo digitado é o de alguma vacina existente?
                    epis[i].quantidadeDepi -= quantidade;//então pode enviar(diminui a quantidade no estoque)
                    
                    //Linha de código que talvez eu(saori) precise
                    quantidadeTotalEPIMS -= quantidade;
                    
                    b=i;
                    for(i=0;i<27;i++){
                        if(estados[i].nome==nomeDoEstado){
                            cout<<"estado identificado\n";
                            for(a=0;a<50;a++){
                                if(estados[i].episDoEstado[a].ativo==0)
                                    {//Esse espaço está vazio?
                                    estados[i].episDoEstado[a].quantidadeDepi += quantidade; //envia(aumenta a quantidade no estado)
                                    cout<<"enviado"<<endl;
                                    //para que o restante dos atributos do structs sejam preenchidos
                                    estados[i].episDoEstado[a].descricaoEPI=epis[b].descricaoEPI;
                                    estados[i].episDoEstado[a].ativo=1;
                                    estados[i].episDoEstado[a].tipoEPI = tipoEPI;
                                    
                                    //Saori alterando aqui
                                    estados[i].episDoEstado[a].fabricante = epis[b].fabricante;
                                    estados[i].episDoEstado[a].dataVenc = epis[b].dataVenc;
                                    
                                    break;
                                }else{
                                continue;
                            }
                        }
                        }else continue;
                        }

                }
            }break;
          }
        case 3:{
            cout<<"Qual o nome desse medicamento?"<<endl;
            cin >> nome;
            cout << "Quantidade: ";
            cin >> quantidade;
            cout <<"\nEstado: ";
            cin >> nomeDoEstado;
            
            //Linha de Codigo da Saori
            quantidadeTotalMedicamentosEstados += quantidade;
            
            for(i=0; i<MAX_EPI; ++i)//testando as vacinas existentes para saber se elas batem com a que o usuário deseja enviar
            {
                if(nome == medicamentos[i].nome){//o tipo digitado é o de alguma vacina existente?
                    medicamentos[i].quantidadeDmedicamento -= quantidade;//então pode enviar(diminui a quantidade no estoque)
                    
                    //Linha de código que talvez eu(saori) precise
                    quantidadeTotalMedicamentosMS -= quantidade;
                    
                    b=i;
                    for(i=0;i<27;i++){
                        if(estados[i].nome==nomeDoEstado){
                            cout<<"estado identificado\n";
                            for(a=0;a<50;a++){
                                if(estados[i].medicamentosDoEstado[a].ativo==0)
                                    {//Esse espaço está vazio?
                                    estados[i].medicamentosDoEstado[a].quantidadeDmedicamento += quantidade; //envia(aumenta a quantidade no estado)
                                    cout<<"enviado"<<endl;
                                    //para que o restante dos atributos do structs sejam preenchidos
                                    estados[i].medicamentosDoEstado[a].administracao=medicamentos[b].administracao;
                                    estados[i].medicamentosDoEstado[a].disponibilizacao=medicamentos[b].disponibilizacao;
                                    estados[i].medicamentosDoEstado[a].dosagem=medicamentos[b].dosagem;
                                    estados[i].medicamentosDoEstado[a].nome=nome;
                                    estados[i].episDoEstado[a].ativo=1;
                                    
                                    //Saori alterando aqui
                                    estados[i].medicamentosDoEstado[a].fabricante = medicamentos[b].fabricante;
                                    estados[i].medicamentosDoEstado[a].dataVenc = medicamentos[b].dataVenc;
                                    
                                    break;
                                }else{
                                continue;
                            }
                        }
                        }else continue;
                        }

                }
            }break;
          }

        }
    }while(select!=0);
}






#endif
