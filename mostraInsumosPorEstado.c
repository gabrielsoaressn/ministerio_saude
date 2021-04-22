#ifndef MOSTRAINSUMOSPORTIPO_CPP
#define MOSTRAINSUMOSPORTIPO_CPP

#include<string>

#include "mostraInsumosporTipo.cpp"

void consultaInsumosEnviadosPorEstado(string nome);

void consultaInsumosEnviadosPorEstado(string nome)
{
    int i, j;
    for(i=0;i<27;++i)
    {
    if(estados[i].nome==nome){
        cout<<"----------------"<<endl
        cout<<"--------"<<estados[i].nome<<"---------"<<endl;
    }
        for(j=0;j<MAX_EPI;++j)
        {
            if(estados[i].vacinasDoEstado.ativo==1){
                cout<<" Vacina: "<<estados[i].vacinasDoEstado[j].tipoVacina<<endl;
                cout<<" quantidade: "<<estados[i].vacinasDoEstado[j].quantidadeDvacina<<endl;
            }

            if(estados[i].episDoEstado.ativo==1)
            {
                cout<<" EPI: "<<estados[i].episDoEstado.tipoEPI<<endl;
                cout<<" quantidade: "<<estados[i].episDoEstado[j].quantidadeDepi<<endl;
            }

            if(estados[i].episDoEstado.ativo==1)
            {
                cout<<" Medicamento: "<<estados[i].medicamentosDoEstado.nome<<endl;
                cout<<" quantidade: "<<estados[i].medicamentosDoEstado.quantidadeDmedicamento<<endl;

            }

        }
    }


}

#endif // MOSTRAINSUMOSPORTIPO_CPP
