#include <iostream>
int main() {
    int inteiro = 999;
    // um ponteiro aponta para o endereço da variável na memória
    // recebe o endereço de "inteiro"
    int* ponteiroPraInt = &inteiro;
    std::cout << "sem o operador \" *\" ele printa somente o endereço da variável: " <<
    ponteiroPraInt << std::endl;
    std::cout << "portanto, se quiser printar o resultado apontado, usa-se \"*\" antes do nome da variável: " <<
    *ponteiroPraInt << std::endl;
}