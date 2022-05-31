#include <iostream>
#include <vector>
// Selection sort seleciona uma posição específica do vetor e compara se os elementos 
// seguintes sao menores, caso forem, ambos trocam de posição.
void selectionSort(std::vector<int>& array, size_t tamanhoDoVetor) {
    int menor;
    int posicao;
    bool troca;
    // percorrendo o vetor
    for (size_t i = 0; i < tamanhoDoVetor - 1; i++) {
        // fazendo com que o menor valor seja o elemento da posição i do vetor
        menor = array[i];
        posicao = i;
        troca = false;
        // analisando se o próximo valor em relação a i seja menor
        for (size_t j = i + 1; j < tamanhoDoVetor + 1; j++)
        // se for, o próximo elemento for menor, troca
            if(array[j] < menor) {
                menor = array[j];
                posicao = j;
                troca = true;
            }
        if (troca) {
            int aux = array[i];
            array[i] = menor;
            array[posicao] = aux; 
        }
    }
}
void printar(std::vector<int>& array, int size)  {
    for(int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}
int main() {
    std::vector<int> vetor = {9999, 2, 20, 9, 33, 6};
    size_t tamanhoDoVetor = vetor.size();
    selectionSort(vetor, tamanhoDoVetor);
    printar(vetor, tamanhoDoVetor); 
}