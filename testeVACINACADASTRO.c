#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_VACINAS 50
typedef struct 
{
    char tipoVacina[50];
    int quantidadeDoses[4];
    int intervaloDias[50];
    int ativo;

}Vacina;

Vacina vacinas[MAX_VACINAS];

void menu();
void cadastrar();


int main()
{
    menu();


    return 0;
}


    void cadastrar()
    {
    char tipoVacina[50];
    int quantidadeDoses[4];
    int intervaloDias[50];
    int op;

do{
    printf("Tipo da vacina: ");
    fgets(tipoVacina,sizeof(tipoVacina),stdin);
    printf("\n Quantidade de Doses: ");
    scanf("%i", &quantidadeDoses[0]);
    printf("\n Intervalo de dias: ");
    scanf("%i", &intervaloDias[0]);
    

    for(int i = 0; i < MAX_VACINAS; ++i)
    {
        if(vacinas[i].ativo ==0)
        {
            vacinas[i].quantidadeDoses[0] = quantidadeDoses[0];
            vacinas[i].intervaloDias[0] = intervaloDias[0];
            strcpy(vacinas[i].tipoVacina, tipoVacina);
            break;
        }   
    }


    printf("\n1-Continuar\n0-Sair");
    scanf("%i", &op);
} while(op!=0);
} 

void menu()
{
    int op;
    
    do
    {
    system("cls");
    printf("\n 1- Cadastrar Vacina\n 2- Remover Vacina");
    printf("\n 3- Pesquisar Vacina\n 0 - Sair");
    scanf("%i", &op);
    getchar();

     switch(op)
    {
            case 1:
            cadastrar();
            break;
    } 
    } while(op != 0); 

}