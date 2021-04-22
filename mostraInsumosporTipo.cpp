#ifndef MOSTRAINSUMOSPORTIPO_CPP
#define MOSTRAINSUMOSPORTIPO_CPP

#include <iostream>
#include "transferirInsumo.cpp"

void consultaInsumosEnviadosPorTipo();

void consultaInsumosEnviadosPorTipo(){
    int select,i ,j;

    cout<<"----Consultar Enviados---"<<endl;
    cout<<" 1) Vacinas"<< endl;
    cout<<" 2) Medicamentos"<< endl;
    cout<<" 3) Epis"<< endl;
    cin >> select;

    switch(select)
    {
    case 1:{
        system("cls");

    printf("Lista de Vacinas\n");
    for(int j = 0; j<27; j++){
        for(int i = 0; i < MAX_VACINAS; ++i )
        {
            if(vacinas[i].ativo==1)
            {
                std::cout<<"---------------\n"<<std::endl;
                std::cout<<"Estado: "<< estados[j].nome<<endl;
                std::cout<<"Tipo de vacina: "<< estados[j].vacinasDoEstado[i].tipoVacina<<endl;
                std::cout<<"Dose da vacina: "<< estados[j].vacinasDoEstado[i].quantidadeDoses<<endl;
                std::cout<<"Intervalo entre as doses: "<< estados[j].vacinasDoEstado[i].intervaloDias<<endl;
                std::cout<<"Quantidade de vacinas: "<< estados[j].vacinasDoEstado[i].quantidadeDvacina<<endl;
                
                //Saori alterando aqui
                std::cout << "Fabricante: " << estados[j].vacinasDoEstado[i].fabricante << endl;
                std::cout << "Data de Vencimento: " << estados[j].vacinasDoEstado[i].dataVenc << endl;
                
                std::cout<<"\n---------------\n"<<std::endl;
            }
        }
    }

    break;
    }
    case 2:{
        system("cls");
        printf("Lista de Medicamentos\n");
        for(int j = 0; j<27; j++){

            for(int i = 0; i < MAX_MEDICAMENTOS; ++i )
            {
                if(medicamentos[i].ativo==1)
                {
                    std::cout<<"---------------\n"<<std::endl;
                    std::cout<<"Estado: "<<estados[j].nome<<endl;
                    std::cout<<"Nome do medicamento: "<< estados[j].medicamentosDoEstado[i].nome<<endl;
                    std::cout<<"Disponibilizacao do medicamento: "<< estados[j].medicamentosDoEstado[i].disponibilizacao<<endl;
                    std::cout<<"Administracao do medicamento: "<< estados[j].medicamentosDoEstado[i].administracao<<endl;
                    std::cout<<"Dosagem do medicamento: "<< estados[j].medicamentosDoEstado[i].dosagem<<endl;
                    std::cout<<"Quantidade do medicamento: "<< estados[j].medicamentosDoEstado[i].quantidadeDmedicamento<<endl;
                    
                    //Saori alterando aqui
                    std::cout << "Fabricante: " << estados[j].medicamentosDoEstado[i].fabricante << endl;
                    std::cout << "Data de Vencimento: " << estados[j].medicamentosDoEstado[i].dataVenc << endl;
                    
                    std::cout<<"\n---------------\n"<<std::endl;

                }

            }
        }
    break;
    }
    case 3:{
        system("cls");

        printf("Lista de EPIs\n");
        for(j=0;j<27;j++)
        {
            for(int i = 0; i < MAX_EPI; ++i )
            {
                if(estados[j].episDoEstado[i].ativo==1)
                {
                    std::cout<<"---------------\n"<<std::endl;
                    cout<< "Estado: "<<estados[j].nome<<endl;
                    std::cout<<"Tipo da EPI: "<< estados[j].episDoEstado[i].tipoEPI<<endl;
                    std::cout<<"Descricao da EPI: "<< estados[j].episDoEstado[i].descricaoEPI<<endl;
                    std::cout<<"Quantidade da EPI: "<< estados[j].episDoEstado[i].quantidadeDepi<<endl;
                    
                    //Saori alterando aqui
                    std::cout << "Fabricante: " << estados[j].episDoEstado[i].fabricante << endl;
                    std::cout << "Data de Vencimento: " << estados[j].episDoEstado[i].dataVenc << endl;
                    
                    std::cout<<"\n---------------\n"<<std::endl;

                }

            }
        }
    break;
    }
    }
}
void consultaInsumosEnviadosPorEstado(string nome);

void consultaInsumosEnviadosPorEstado(string nome)
{
    int i, j;
    for(i=0;i<27;++i)
    {
    if(estados[i].nome==nome){
        cout<<"------------------"<<endl;
        cout<<"--------"<<estados[i].nome<<"---------"<<endl;
    }
        for(j=0;j<MAX_EPI;++j)
        {
            if(estados[i].vacinasDoEstado[j].ativo==1){
                cout<<" Vacina: "<<estados[i].vacinasDoEstado[j].tipoVacina<<endl;
                cout<<" quantidade: "<<estados[i].vacinasDoEstado[j].quantidadeDvacina<<endl;
            }

            if(estados[i].episDoEstado[j].ativo==1)
            {
                cout<<" EPI: "<<estados[i].episDoEstado[j].tipoEPI<<endl;
                cout<<" quantidade: "<<estados[i].episDoEstado[j].quantidadeDepi<<endl;
            }

            if(estados[i].episDoEstado[j].ativo==1)
            {
                cout<<" Medicamento: "<<estados[i].medicamentosDoEstado[j].nome<<endl;
                cout<<" quantidade: "<<estados[i].medicamentosDoEstado[j].quantidadeDmedicamento<<endl;

            }

        }
            cout<<"------------------"<<endl;
    }


}
#endif
