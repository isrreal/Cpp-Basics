#include <iostream>
#include <vector>

int main() {
    std::vector<int> vetor = {1, 2, 3, 4, 5, 6};
    std::vector<int>::iterator it = vetor.begin();
    std::cout << "esse eh o primeiro elemento: " << *it << std::endl;
    // avança o iterator:     advance(nomeDoContainer, posição)
    advance(it, 4);
    std::cout << "esse eh o quarto elemento: " << *it << std::endl;
    // retorna o iterator do elemento anterior
    std::cout << *prev(it) << std::endl;
    // retorna iterator para o próximo elemento do vetor
    std::cout << *next(it) << std::endl;

}