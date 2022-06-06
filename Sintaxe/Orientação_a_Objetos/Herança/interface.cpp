#include <iostream>
// em c++, uma interface é composta por várias "pure virtual function"
// já que é uma interface, então é obrigatório a classe que a herda
// implementar TODOS os seu métodos, caso contrário, retorna um erro 
class Interface {
public:
    virtual void metodo1() = 0;
    virtual void metodo2() = 0;
    virtual void metodo3() = 0;
};

class Exemplo: public Interface {
public:
    Exemplo() {}
    void metodo1() { std::cout << "metodo1 da classe filha" << std::endl; }
    void metodo2() { std::cout << "metodo2 da classe filha" << std::endl; }
    void metodo3() { std::cout << "metodo3 da classe filha" << std::endl; }
};

int main() {
    Exemplo exemplo;
    exemplo.metodo1();
}