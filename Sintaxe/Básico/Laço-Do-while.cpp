#include <iostream>
int main(){
    int i = 0;
    std::string nome;    
    std::cout << "digite o nome da vítima" << std::endl << std::endl;
    getline(std::cin, nome);
    //loop infinito
    do {
          std::cout << "O " << nome << " foi hackeado!"<< std::endl;
    }
    while(true);
}