#include <iostream>
#include "cadastroMedicamento.cpp"

void Menu(void){
    int select, sel1, sel2, sel3, sel4, sel5;
   
    while(1){
        std::cout<<"\n\n------------MENU------------\n"<<std::endl;
        std::cout<<"1) Cadastrar"<<std::endl;
        std::cout<<"2) Consultar"<<std::endl;
        std::cout<<"3) Enviar"<<std::endl;
        std::cout<<"0) Sair"<<std::endl;
        std::cin>>select;
        switch(select){
            case 0:
            return;
            
            case 1:{
                std::cout <<"vc deseja cadastar"<<std::endl;
                std::cout <<"1)vacinas"<<std::endl;
                std::cout <<"2)medicamentos"<<std::endl;
                std::cout <<"3)EPI"<<std::endl;
                std::cout <<"4)Voltar"<<std::endl;

                std::cin >> sel1;
                switch (sel1){
                case 1:{
                    std::cout<<"quantidade : ";
                    //std::cin>> aqui coloca a função que cadastra
                    break;
                }
                case 2:{
                    std::cout<<"quantidade : ";
                    //std::cin>> aqui coloca a função que cadastra
                    break;
                }
                case 3:{
                    std::cout<<"quantidade : ";
                    //std::cin>> aqui coloca a função que cadastra
                    break;
                }
                case 4:{
                    continue;
                }
                break;
             
            }
            case 2:{
                std::cout <<"vc deseja consultar"<<std::endl;
                std::cout <<"1)no estoque"<<std::endl;
                std::cout <<"2)enviados"<<std::endl;

                std::cin >> sel2;
                switch (sel2)                {
                case 1:{
                    std::cout <<"--------estoque--------"<<std::endl;
                    std::cout <<"1)todos os insumos"<<std::endl;
                    std::cout <<"2)vacinas"<<std::endl;
                    std::cout <<"3)medicamentos"<<std::endl;
                    std::cout <<"4)EPIs"<<std::endl;
                    std::cout <<"5)voltar"<<std::endl;
                    std::cin>>sel3;

                    switch (sel3)
                    {
                    case 1:
                        //função que printa
                    case 2:
                        //função que printa
                        break;
                    case 3:
                        //função que printa
                        break;
                    case 4:
                        //função que printa
                        break;
                    
                    default:
                        break;
                    }
                    
                }
                    break;
                
                default:
                    break;
                }
            case 3:{
                std::cout <<"que tipo de insumo?"<<std::endl;
                std::cout <<"1)vacinas"<<std::endl;
                std::cout <<"2)medicamentos"<<std::endl;
                std::cout <<"3)EPI"<<std::endl;
                std::cout <<"4)Voltar"<<std::endl;                
                
                std::cin>>sel4;
                switch (sel4)
                {
                case 1:{
                    std::cout <<"enviar vacinas"<<std::endl;
                    std::cout <<"quantidade: "<<std::endl;
                    //std::cin << (variável que serve de parâmetro para a função que envia)
                    std::cout <<"estado: "<<std::endl;
                    //std::cin << (variável que serve de parâmetro para a função que envia)
                    //função que envia vacinas
                    break;
                }
                case 2:{
                    std::cout <<"enviar medicamentos"<<std::endl;
                    std::cout <<"quantidade: "<<std::endl;
                    //std::cin << (variável que serve de parâmetro para a função que envia)
                    std::cout <<"estado: "<<std::endl;
                    //std::cin << (variável que serve de parâmetro para a função que envia)
                    //função que envia medicamentos
                    break;
                }
                case 3:{
                    std::cout <<"enviar EPIs"<<std::endl;
                    std::cout <<"quantidade: "<<std::endl;
                    //std::cin << (variável que serve de parâmetro para a função que envia)
                    std::cout <<"estado: "<<std::endl;
                    //std::cin << (variável que serve de parâmetro para a função que envia)
                    //função que envia EPIs
                    break;
                }
                   default:
                    break;
                }
            }
            default:
            break;
        }
    }
    return;
    }
}