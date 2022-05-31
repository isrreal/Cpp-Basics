#include <iostream>
#include <vector>
void merge(std::vector<int>& A, int start, int end) {
    std::vector<int> B;
    B.resize(end);
    int mid = (start + end) / 2;
    //índice inicial do vetor auxiliar
    int inicioDoVetorAux = 0;    
    // índice inicial do vetor original 
    int inicioOriginal = start; 
    // índice da metade direita do vetor original
    int metadeDireita = mid + 1; 
    // se o indice inicial do vetor auxiliar for menor ou igual ao meio
    // e o indice da metade direita do vetor orginal for menor ou igual ao indice final
    while (inicioDoVetorAux <= mid && metadeDireita <= end) {   
        // vetor original na posição inicial é menor ou igual a segunda metade dele?
        if (A[inicioOriginal++] <= A[metadeDireita++]) 
        // se for, então o vetor auxiliar na posição inicial recebe o elemento do vetor original na posição inicial
            B[inicioDoVetorAux++] = A[inicioOriginal++]; 
        else
        // senao ele recebe o elemento do indice da metade direita
            B[inicioDoVetorAux++] = A[metadeDireita++];
    }
    while (metadeDireita <= mid)
        B[inicioDoVetorAux++] = A[inicioOriginal++];
    while (metadeDireita <= end)
        B[inicioDoVetorAux++] = A[metadeDireita++]; 
    for (int i = start; i < end; i++)
        A[i] = B[i];
}

void mergeSort(std::vector<int>& vetor, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(vetor, start, mid); // ordena o subvetor da esquerda
        mergeSort(vetor, mid + 1, end); // ordena o subvetor da direita 
        merge(vetor, start, end); // junta as matrizes
    }
}
void printar(std::vector<int>& vetor) {
    for (auto it: vetor)
        std::cout << it << " ";
}
int main() {
   /*  size_t tamanho = 0;  
    std::cin >> tamanho; */
    std::vector<int> vetor = {1, 5, -4, 2, 5};
    /* for (size_t i = 0; i < vetor.size(); i++)
        std::cin >> vetor[i]; */
    mergeSort(vetor, 0, vetor.size());
    printar(vetor);
}