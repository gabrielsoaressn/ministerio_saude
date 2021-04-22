#ifndef CADASTROEPI_CPP
#define CADASTROEPI_CPP

#include <iostream>
#include <string.h>
#include <ios>
#include <limits>
#include "structEPI.cpp"

#define MAX_EPI 50 // Variavel global para facilitar o controle dos laços de repetição que executam o cadastro

using namespace std;



EPI epis[MAX_EPI]; 

//Variavel da Saori
int quantidadeTotalEPIMS;


//FILE *arqEPI;
void menuCadastroEPI();
void cadastrarEPI();
//void armazenarEPI(); função criada com o intuito de salvar os EPIS no arquivo e suspensa devido às dificuldades


int funcCadastroEPI()
{
    menuCadastroEPI();


    return 0;
}


void cadastrarEPI()
{
    //Saori aqui colocando as duas variaveis abaixo
    std::string fabricante;
    std::string dataVenc;
    
    std::string tipoEPI;
    int quantidadeDepi;
    std::string descricaoEPI;
    int op;

    do{
        std::cout<<"Tipo de EPI: "<<std::endl;
        cin >> tipoEPI;
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        std::cout<<"Descricao da EPI: "<<std::endl;
        cin >> descricaoEPI;
        std::cout<<"Quantidade de EPI: "<<std::endl;
        std::cin>>quantidadeDepi;
        
        //Saori aqui adicionando ultimas descricoes
        std::cout << "Fabricante: " << std::endl;
        cin >> fabricante;
        std::cout << "Data de vencimento: " <<std::endl;
        cin >> dataVenc;
        
        quantidadeTotalEPIMS += quantidadeDepi;
    

        for(int i = 0; i < MAX_EPI; ++i)
        {
            if(epis[i].ativo ==0)
            {
                epis[i].quantidadeDepi = quantidadeDepi;
                epis[i].tipoEPI = tipoEPI;
                epis[i].descricaoEPI = descricaoEPI;
                epis[i].ativo=1; // Atualiza o valor de ativo para 1, fazendo com que o cadastro seja efetivado e permitindo a consulta.
                epis[i].fabricante = fabricante;
                epis[i].dataVenc = dataVenc;
                break;
            }   
        }
        std::cout<<" 1) Continuar\n 0) Sair"<<std::endl;
        std::cin>>op;
    
    }while(op!=0);
} 

void menuCadastroEPI()
{
    int op;
    
    do
    {
    system("cls");
    std::cout<<"\n 1) Cadastrar EPI\n 2) Remover EPI"<<std::endl;
    std::cout<<" 3) Pesquisar EPI\n 0) Sair"<<std::endl;
    std::cin>>op;
    getchar();

     switch(op)
    {
            case 1:
            cadastrarEPI();
            //armazenarEPI();
            break;
    } 
    } while(op != 0); 

}

/*void armazenarEPI(void)
{
    arqEPI = fopen("arqVacina.txt", "w");
    
    if(arqEPI == NULL)
    {
        printf("Erro na abertura do arquivo!");
    }
    fprintf(arqEPI,"quantidade: %d\n", epis[0].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[0].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[0].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[1].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s\n", epis[1].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[1].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[2].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s\n", epis[2].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[2].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[3].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[3].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[3].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[4].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[4].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[4].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[5].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[5].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[5].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[6].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[6].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[6].descricaoEPI);
    
    fprintf(arqEPI,"quantidade: %d\n", epis[7].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[7].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[7].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[8].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[8].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[8].descricaoEPI);
    
    fprintf(arqEPI,"quantidade: %d\n", epis[9].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[9].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[9].descricaoEPI);
    
    fprintf(arqEPI,"quantidade: %d\n", epis[10].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[10].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[10].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[11].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[11].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[11].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[12].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[12].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[12].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[12].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[12].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[12].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[13].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[13].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[13].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[14].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[14].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[14].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[15].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[15].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[15].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[16].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[16].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[16].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[17].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[17].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[17].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[18].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[18].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[18].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[19].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[19].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[19].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[20].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s\n", epis[20].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[20].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[21].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s\n", epis[21].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[21].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[22].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[22].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[22].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[23].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[23].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[23].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[24].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[24].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[24].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[25].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[25].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[25].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[26].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[26].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[26].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[27].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[27].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[27].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[28].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[28].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[28].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[29].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[29].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[29].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[30].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[30].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[30].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[31].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[31].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[31].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[32].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[32].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[32].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[33].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[33].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[33].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[34].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[34].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[34].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[35].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[35].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[35].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[36].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[36].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[36].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[37].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[37].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[37].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[38].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[38].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[38].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[39].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[39].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[39].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[40].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[40].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[40].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[41].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[41].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[41].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[42].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[42].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[42].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[43].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[43].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[43].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[44].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[44].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[44].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[45].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[45].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[45].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[46].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[46].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[46].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[47].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[47].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[47].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[48].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[48].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[48].descricaoEPI);

    fprintf(arqEPI,"quantidade: %d\n", epis[49].quantidadeDepi);
    fprintf(arqEPI,"tipo: %s", epis[49].tipoEPI);
    fprintf(arqEPI,"descricao: %s\n\n", epis[49].descricaoEPI);

    fclose(arqEPI);
}*/

#endif
