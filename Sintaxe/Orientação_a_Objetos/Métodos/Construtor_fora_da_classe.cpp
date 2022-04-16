#include <iostream>
class Atomo {
public:
    int numero_atomico = 0;
    std::string nome = "padrao";
    Atomo(int numero_atomico, std::string nome); /*
                                                    Assim como dá pra colocar métodos fora da classe, 
                                                    dá pra colocar o construtor propriamente dito lá também
                                                */
};

Atomo::Atomo(int numero_atomico, std::string nome) {
    this->numero_atomico = numero_atomico;
    this->nome = nome;
}

int main() {
    Atomo hidrogenio(1, "H");
    std::cout << hidrogenio.numero_atomico;
}
