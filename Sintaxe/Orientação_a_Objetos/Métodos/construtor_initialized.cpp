#include <iostream>
class Pessoa {
private:
    std::string nome;
    unsigned short int idade;
public:
    //  nomeDaClasse(int parametro1, int parametro2): atributo1(parametro1), atributo2(parametro2) {}   
    Pessoa(std::string nome, unsigned short int idade): nome(nome), idade(idade){
        std::cout << "Pessoa criada!" << std::endl;
    }
    std::string getNome() { return nome; }
    unsigned short int getIdade() { return idade; }
};

int main() {
    Pessoa* pessoa = new Pessoa("Israel", 19);
    std::cout << pessoa->getNome() << std::endl;
    std::cout << pessoa->getIdade() << std::endl;
}