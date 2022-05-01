#include <iostream>
void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int* array, size_t tamanho) {
    size_t i, j;
    for (i = 0; i < tamanho - 1; i++)
        for(j = 0; j < (tamanho - i - 1); j++)
            if(array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}
void printar(int* array, size_t tamanho) {
    for (size_t i = 0; i < tamanho; i++) 
        std::cout << array[i] << " ";
}
int main() {
    int vetor[] = { 1, 2, 66, 99, 12, 23, 5};
    size_t tamanho = sizeof(vetor)/ sizeof(vetor[0]);
    bubbleSort(vetor, tamanho);
    printar(vetor, tamanho);
}