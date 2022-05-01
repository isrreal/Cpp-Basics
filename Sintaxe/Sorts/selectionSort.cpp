#include <iostream>
#include <vector>
void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(std::vector<int>& array, size_t tamanhoDoVetor) {
    size_t i, j, min_idx;
    for (i = 0; i < tamanhoDoVetor - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < tamanhoDoVetor; j++)
            if(array[j] < array[min_idx])
                min_idx = j;
        swap(&array[min_idx], &array[i]);
    }
}
void printar(std::vector<int>& array, int size)  {
    for(int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}
int main() {
    std::vector<int> vetor = {1, 2, 20, 9, 33, 6};
    size_t tamanhoDoVetor = vetor.size();
    selectionSort(vetor, tamanhoDoVetor);
    printar(vetor, tamanhoDoVetor); 
}