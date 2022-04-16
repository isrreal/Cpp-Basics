#include <iostream>
#include <memory>
int main() {
    std::unique_ptr<int> inteiros(new int[10]);    
    for(int i = 0; i < 10; i++)
        // .get() retorna o array em si 
        inteiros.get()[i] = 9;
    for(int i = 0; i < 10; i++)
        std::cout << inteiros.get()[i] << " ";
}