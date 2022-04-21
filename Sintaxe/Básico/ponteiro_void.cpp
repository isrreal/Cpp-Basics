#include <iostream>
int main() {
    int i = 90;
    void* ponteiro = &i;
    std::cout << *(int*) ponteiro;
    /* std::cout << *ponteiro;
    -----------------
    testesupremo.cpp: In function ‘int main()’:
    testesupremo.cpp:5:18: error: ‘void*’ is not a pointer-to-object type
            std::cout << * ponteiro;
                        ^~~~~~~~~~
    */
}