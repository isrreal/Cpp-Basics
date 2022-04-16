#include <iostream>
int main(){
    std::string exemplo;    
    // o método getline serve pra excluir o caractere delimitador da string, 
    // assim podendo colocar como entrada, strings com espaços.
    std::cout << "Escreva algo\n\n";
    // parâmetros de entrada:   (local de leitura, local de gravação) 
    getline(std::cin, exemplo);    
    std::cout << exemplo;
}
