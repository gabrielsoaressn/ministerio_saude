#include <iostream>
#include "enviarInsumo.cpp"
using namespace std;

void ConsultaInsumoPorTipo(int select);

void ConsultaInsumoPorTipo(int select){
    
    int op1, i, j;
    op1 = select;
    switch (op1)
    {
    case 1:
        
        for(i=0;i<27;i++){
            for (j=0; i <50;j++)
            {
                if(estados[i].vacinasDoEstado[j].ativo==1){ 
                    cout<<estados[i].nome[2]<<endl;
                    cout<<estados[i].vacinasDoEstado[j].tipoVacina[50]<<endl;
                    cout<<estados[i].vacinasDoEstado[j].quantidadeDoses<<"/n"<<endl;
                    break;
                }
                
            }    
        }
            
    case 2:

        for(i=0;i<27;i++){
            for (j=0; j <50;j++)
            {
            if(estados[i].medicamentosDoEstado[j].ativo==1)
                cout<<estados[i].nome[2]<<endl;
                cout<<estados[i].medicamentosDoEstado[j].administracao<<endl;
                cout<<estados[i].medicamentosDoEstado[j].disponibilizacao <<endl;
                cout<<estados[i].medicamentosDoEstado[j].dosagem <<endl;
                cout<<estados[i].medicamentosDoEstado[j].nome <<endl;
                cout<<estados[i].medicamentosDoEstado[j].quantidadeDmedicamento;

                break;
            }    
        }

    case 3:

        for(i=0;i<27;i++){
            for (j=0; i <50;j++)
            {
            if(estados[i].episDoEstado[j].ativo==1)
                cout<<estados[i].nome[2]<<endl;
                cout<<estados[i].episDoEstado[j].descricaoEPI<<endl;
                cout<<estados[i].episDoEstado[j].quantidadeDepi <<endl;
                cout<<estados[i].episDoEstado[j].tipoEPI <<endl;
                break;
            }    
        }
            
            
    
    default:
        break;
    } 
    
    return;
}