#ifndef MENU_CPP
#define MENU_CPP

#include <iostream>
#include "mostraInsumosPorTipo.cpp"

void Menu(void){
    int select, sel1, sel2, sel3, sel4, sel5, sel6;
    string nomeDoEstado;

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
                    cadastrarVacina();
                    continue;
                }
                case 2:{
                    cadastrarMedicamento();
                    continue;
                }
                case 3:{
                    cadastrarEPI();
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
                        //func q printa todos os insumos
                    case 2:
                        consultarVacina();
                        system("pause");
                        continue;
                    case 3:
                        consultarMedicamento();
                        system("pause");
                        continue;
                    case 4:
                        consultarEPI();
                        system("pause");
                        continue;

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
                case 1:{
                    std::cout <<"Estado(2 letras): "<<std::endl;
                    std::cin>>nomeDoEstado;
                    consultaInsumosEnviadosPorEstado(nomeDoEstado);
                    continue;
                }
                case 2:
                    consultaInsumosEnviadosPorTipo();
                    continue;
                    default:
                    break;
                }
            }
            }
            case 3:{
                menuTransferirInsumo();
                continue;
                }
            default:
            break;
        }
    }
    return;
    }
}

#endif
