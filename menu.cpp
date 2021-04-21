#include <iostream>
#include "mostraInsumosporTipo.cpp"

void Menu(void){
    int select, sel1, sel2, sel3, sel4, sel5, sel6;
   
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
                    menuCadastroVacina();
                    continue;
                }
                case 2:{
                    menuCadastroMedicamento();
                    continue;
                }
                case 3:{
                    menuCadastroEPI();
                    continue;
                }
                case 4:{
                    continue;
                }
                break;
             
                }
            }
            case 2:{
                std::cout <<"vc deseja consultar"<<std::endl;
                std::cout <<"1)no estoque"<<std::endl;
                std::cout <<"2)enviados"<<std::endl;

                std::cin >> sel2;
                switch (sel2){
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
                        continue;
                    }
                    
                
                    break;
                
                default:
                    break;
                
                break;
            }
            case 2:
            {
                std::cout << "1) por estado"<<std::endl;
                std::cout << "2) por tipo"<<std::endl;
                std::cin >> sel5;
                switch(sel5)
                {
                case 1:
                //funçã que printa por estado
                    break;
                case 2:
                    std::cout<< "1) Mostrar vacinas enviadas a cada estado" <<endl;
                    std::cout<< "2) Mostrar medicamentos enviados a cada estado" <<endl;
                    std::cout<< "3) Mostrar EPIs enviados a cada estado" <<endl;
                    std::cin>> sel6;
                    ConsultaInsumoPorTipo(sel6);
                    default:
                    break;
                }
            }
            }
            case 3:{
                menuEnviarInsumo();
            
                    break;
                }
            default:
            break;
        }
    }
    return;
    }
}
