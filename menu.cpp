#include <iostream>

void Menu(void){
    int select;
   
    while(1){
        std::cout<<"\n\n------------MENU------------\n"<<std::endl;
        std::cout<<"1) Cadastrar insumo"<<std::endl;
        std::cout<<"2) Consultar insumos disponiveis "<<std::endl;
        std::cout<<"3) Consultar descricao de insumo"<<std::endl;
        std::cout<<"4) Lista de insumo por tipo"<<std::endl;
        std::cout<<"5) Quantidade de insumos destribuidos por estado"<<std::endl;
        std::cout<<"6) Quantidade de insumos destribuidos por estado por tipo"<<std::endl;
        std::cout<<"7) Quantidade de insumos destribuidos por estado"<<std::endl;
        std::cout<<"8) Consultar Estado"<<std::endl;
        std::cout<<"9) Enviar Insumo"<<std::endl;
        std::cout<<"0) Sair"<<std::endl;
        std::cin>>select;
        if(select==0){
            break;
        }
    }
    return;
}