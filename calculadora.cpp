#include <iostream>

void print_menu(){
    std::cout << "O que deseja fazer?" << std::endl;
    std::cout << "1 - Soma" << std::endl;
    std::cout << "2 - Subtracao" << std::endl;
    std::cout << "3 - Multiplicacao" << std::endl;
    std::cout << "4 - Divisao" << std::endl;
    std::cout << "0 - Sair" << std::endl;
}

float soma_pp(float a, float b){
    float soma_temp = 0;
    soma_temp = a + b;
    return soma_temp;
}

float subtracao_pp(float a, float b){
    float sub_temp = 0;
    sub_temp = a - b;
    return sub_temp;
}

float multiplicacao_pp(float a, float b){
    float mult_temp = 0;
    mult_temp = a * b;
    return mult_temp;
}

float divisao_pp(float a, float b){
    float div_temp = 0;
    div_temp = a/b;
    return div_temp;
}

void vamos_calcular(){
    int opcao_temp;
    float num1, num2;

    std::cout << "Digite o 1 numero" << std::endl;
    std::cin >> num1;

    std::cout << "Digite o 2 numero" << std::endl;
    std::cin >> num2;

    print_menu();
    std::cin >> opcao_temp;

            
        switch (opcao_temp) {

                case 1: {
                    int soma = soma_pp(num1, num2);
                    std::cout << "A soma eh " << soma << std::endl;
                    break;
                }
                case 2: {
                    int subtra = subtracao_pp(num1, num2);
                    std::cout << "A subtracao eh " << subtra << std::endl;
                    break;
                }
                case 3: {
                    int multipli = multiplicacao_pp(num1, num2);
                    std::cout << "A multiplicacao eh " << multipli << std::endl;
                    break;
                } 
                case 4: {
                    int divisao = divisao_pp(num1, num2);
                    std::cout << "A divisao eh " << divisao << std::endl;
                    break;
                } 
                case 0: {
                    std::cout << "Saindo" << std::endl;
                    break;
                }
                default: {
                    std::cout << "Erro." << std::endl;
                    break;
                }
                                    
        } 
}

void menu_principal(){
    std::cout << "O que vc deseja fazer?" << std::endl;
    std::cout << "1 - Calcular" << std::endl;
    std::cout << "0 - Sair" << std::endl;
}

int main(){

    int opcao;


    std::cout << "Seja bem vindo a calculadora" << std::endl;

       

    do {
        
        menu_principal();
        std::cin >> opcao;

        switch (opcao)
        {
        case 1:
            vamos_calcular();
            break;
        case 0:
            std::cout << "Saindo" << std::endl;   
        
        default:
            break;
        }
       
    } while (opcao != 0);


    return 0;
}

