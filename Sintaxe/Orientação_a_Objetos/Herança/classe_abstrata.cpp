#include <iostream>
class Abstrata {
public:
    virtual void pureVirtualFunction() = 0;
    virtual void metodoDaClassePai() { std::cout << "metodo da classe pai" << std::endl; }
};

class Exemplo: public Abstrata {
public:
    Exemplo() {}
    void pureVirtualFunction() {
        std::cout << "pure virtual pure function" << std::endl;
    }
};
int main() {
    Exemplo exemplo;
    exemplo.metodoDaClassePai();   
}