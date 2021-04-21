#include <iostream>
#include "cadastroVacina.cpp"
#include "structEstado.cpp"
#include "cadastroEPI.cpp"
#include "cadastroMedicamento.cpp"

using namespace std;

void menu(void);
void enviarInsumo(int quantidade, string nomeDoEstado[2], string tipo[50], int select);

int main (){
       menu();
       return 0;
}

void menuEnviarInsumo(){
    int op1, i, quantidade, select;
    string tipoVacina[50], nomeDoEstado[2], tipoEPI[50], tipoMedicamento[50];

    do{   
        cout<<" 1- Enviar Insumo"<< endl;
        cout<<" 0- Sair"<< endl;
        cin >> op1;
     
        if(op1==1){
            cout<<" 1- Enviar Vacina"<<endl;
            cout<<" 2- Enviar EPI"<<endl;
            cout<<" 3- Enviar Medicamento"<<endl;
            cout<<" 0- Voltar"<<endl;
            cin >> select;
            switch (select){
            case 1:{
                cout<<"Que tipo de vacina?"<<endl;
                cin >> tipoVacina[50];
                cout << "Quantidade: ";
                cin >> quantidade;
                cout <<"\nEstado: ";
                cin >> nomeDoEstado[2];
                enviarInsumo(quantidade, nomeDoEstado, tipoVacina, 1);
                break;
            }
        
            case 2:{
                cout<<"Que tipo de EPI?"<<endl;
                cin >> tipoEPI[50];
                cout << "Quantidade: ";
                cin >> quantidade;
                cout <<"\nEstado: ";
                cin >> nomeDoEstado[2];
                enviarInsumo(quantidade, nomeDoEstado, tipoVacina, 2);
                break;

            }

            case 3:{
                cout<<"Qual o nome do medicamento?"<<endl;
                cin >> tipoMedicamento[50];
                cout << "Quantidade: ";
                cin >> quantidade;
                cout <<"\nEstado: ";
                cin >> nomeDoEstado[2];
                enviarInsumo(quantidade, nomeDoEstado, tipoVacina, 3);
                break;
                    
            default:
                break;
            }
         }


    }

    
    }while(op1=!0);
}

void enviarInsumo(int quantidade, string estado[2], string tipo[50], int select)
{
    int i, a, b=0;
    switch (select)
    {
    case 1:{
        for(i=0; vacinas[i].ativo==1;i++)//testando as vacinas existentes para saber se elas batem com a que o usuário deseja enviar
        {
            if(tipo[50] == vacinas[i].tipoVacina[50]){//o tipo digitado é o de alguma vacina existente?
                vacinas[i].quantidadeDvacina -= quantidade;//então pode enviar(diminui a quantidade no estoque)
                b=i;
                for(i=0;i<27;i++){
                    if(estados[i].nome==estado){
                        for(a=0;a<50;a++){
                            if(estados[i].vacinasDoEstado[a].ativo==0)
                                {//Esse espaço está vazio?
                                estados[i].vacinasDoEstado[a].quantidadeDvacina += quantidade; //envia(aumenta a quantidade no estado)
                                //para que o restante dos atributos do structs sejam preenchidos
                                estados[i].vacinasDoEstado[a].intervaloDias=vacinas[b].intervaloDias;
                                estados[i].vacinasDoEstado[a].quantidadeDoses=vacinas[b].quantidadeDoses;
                                estados[i].vacinasDoEstado[a].ativo=1;
                                break;
                            }else{
                            continue;
                        }
                    }
                    }else{
                    cout<<"estado não existente"<<endl;
                    return;
                    }

            }
        }

    case 2:{
        for(i=0; epis[i].ativo==1;i++)
        {
            if(tipo[50] == epis[i].tipoEPI[50]){
                epis[i].quantidadeDepi -= quantidade;
                b=i;
                for(i=0;i<27;i++){
                    if(estados[i].nome==estado){
                        for(a=0;a<50;a++){
                            if(estados[i].episDoEstado[a].ativo==0)
                            estados[i].episDoEstado[a].quantidadeDepi += quantidade;
                            estados[i].episDoEstado[a].descricaoEPI[50] = epis[b].descricaoEPI[50];
                            estados[i].episDoEstado[a].ativo = 1;
                            break;   
                    }
                }

            }
            {
            cout<<"tipo de EPI nao encontrado no estoque do MS."<<endl;
            return;
            }
        }


    }
    case 3:{
        for(i=0; medicamentos[i].ativo==1;i++)
        {
            if(tipo[50] == medicamentos[i].nome[50]){
                medicamentos[i].quantidadeDmedicamento -= quantidade;
                b=1;
                for(i=0;i<27;i++){
                    if(estados[i].nome==estado){
                        for(a=0;a<50;a++){
                            if(estados[i].medicamentosDoEstado[a].ativo==0)
                            estados[i].medicamentosDoEstado[a].quantidadeDmedicamento += quantidade;
                            estados[i].medicamentosDoEstado[a].administracao[50] = medicamentos[b].administracao[50];
                            estados[i].medicamentosDoEstado[a].disponibilizacao[50]=medicamentos[b].disponibilizacao[50];
                            estados[i].medicamentosDoEstado[a].dosagem = medicamentos[b].dosagem;
                            estados[i].medicamentosDoEstado[a].ativo = 1;
                            break;
                        }    
                    }else{
                        cout << "estado nao encontrado."<<endl;
                        return;
                    

                        }
                    }
                }

            }
            }
        

    }
        
        break;
    
    default:
        break;
    }
    
    
    } 
}
}