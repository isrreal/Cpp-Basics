#include <iostream>
class Pai {
public:
    Pai() {}
    void metodo() { std::cout << "metodo da classe pai." << std::endl; }
};
class Filha: public Pai {
public:
    Filha() {}
    // usando metodo da classe pai.
    // classePai::nomeDoMetodo;
    void metodo() { Pai::metodo(); }
};
int main() {
    Filha filha;
    filha.metodo();
}