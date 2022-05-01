#include <iostream>

int main() {
    int inteiro = 999;
    int* ponteiroPraInt = &inteiro;
    *ponteiroPraInt += 1;
    // valor de inteiro modificado pelo ponteiro 
    std::cout << inteiro;
}