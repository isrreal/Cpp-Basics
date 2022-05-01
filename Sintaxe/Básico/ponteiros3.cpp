#include <iostream>

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6};
    // nao se atribui o operador "&" para apontar para arrays
    int* ponteiro = vetor;
    std::cout << "um ponteiro SEMPRE aponta para o primeiro elemento do array: " << std::endl;
    std::cout << *ponteiro << std::endl;


}