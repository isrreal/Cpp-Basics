#include <iostream>
#include <memory>
class Objeto {
public:
    Objeto() { std::cout << "Objeto criado" << std::endl; }
    void metodo() { std::cout << "Metodo" << std::endl; }
};

int main() {
// criando 10 objetos da classe "Objeto"
    std::unique_ptr<Objeto> objeto(new Objeto[5]);
    for(int i = 0; i < 5; i++)
        objeto.get()[i].metodo();
}