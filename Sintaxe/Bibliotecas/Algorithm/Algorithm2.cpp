#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::vector<int> vet = {1, 2, 3, 4, 5, 11};
    // retorna true se todos os elementos da coleção atenderem ao requisito
    if(all_of(vet.begin(), vet.end(), [](int x) { return x < 10; }))
        std::cout << "Sao menores que 10" << std::endl;
    else    
        std::cout << "Ha numeros maiores que 10" << std::endl;
    // retorna true se a condição for verdade para pelo menos um elemento da coleção
    if(any_of(vet.begin(), vet.end(), [](int numero){ return numero == 3; }))
        std::cout << "pelo menos um elemento eh igual a 3!" << std::endl;
    else 
        std::cout << "condicao nao cumprida" << std::endl;
    // retorna false caso pelo menos um elemento nao atenda ao requisito
    if(none_of(vet.begin(), vet.end(), [](int numeros) { return numeros > 10; }))
        std::cout << "nenhum dos numeros sao maiores que 10" << std::endl;
    else    
        std::cout << "ha algum numero maior que 10" << std::endl;
    // iteração para cada elemento da coleção
    for_each(vet.begin(), vet.end(), [](int numeros) { std::cout << numeros * 3 << " "; });            
    // find_if() procura um elemento que atenda a condição e retorna um iterator
    auto it = find_if(vet.begin(), vet.end(), [](int x){ return x % 2 != 0;  });    std::cout << *it;
    // find_if_not() procura um elemento que nao atenda a condição e retorna um iterator
    auto it2 = find_if_not(vet.begin(), vet.end(), [](int x){ return x % 2 != 0;  });    
}