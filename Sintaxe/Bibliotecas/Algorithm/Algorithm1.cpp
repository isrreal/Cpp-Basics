#include <iostream>
#include <algorithm>
#include <vector>
int main(){
    std::vector<int> vetor = {0, 4, 5, 6, 7, 8, 33, 2, 3, 4, 1};
    std::vector<int> repetido = {1, 1, 1, 1, 1, 1};
    // ordena o vetor de ordem crescente
    // sintaxe:
    sort(vetor.begin(), vetor.end());         
    for (int i = 0; i < (int) vetor.size(); i++)
        std::cout << vetor[i] << " ";
    std::cout << "\n\n";
    // inverte as posições do vetor
    // sintaxe:
    reverse(vetor.begin(), vetor.end());
    for (auto i = 0; i < vetor.size(); i++)
        std::cout << vetor[i] << " ";
    std::cout << "\n\n";
    // contar as ocorrências de um elemento em específico
    // sintaxe:     count(posição inicial, posição final , elemento)
    std::cout << count(repetido.begin(), repetido.end(), 1) << " vezes"; // o número 1 repetiu 6 vezes
    // encontra um elemento específico e retorna sua posição
    // sintaxe:   find(posição inicial, posição final , elemento)  
    auto jooj = find(vetor.begin(), vetor.end(), 0);
    std::cout << "\n\n" << *jooj; 
}