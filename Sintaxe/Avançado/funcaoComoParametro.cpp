#include <iostream>
void recebeFunc(void (*ptr)()) {
    std::cout << "Antes da funcao" << std::endl;
    (*ptr)();
    std::cout << "Depois da funcao" << std::endl;
}
void func1() { std::cout << "funcao 1" << std::endl; }
int main() {
    void (*ptr)() = func1; 
    recebeFunc(*ptr);
}