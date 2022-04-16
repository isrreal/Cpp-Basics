#include <iostream>

class Carro {
private:
    std::string cor;
    unsigned int preco;
    std::string marca;
    unsigned int quantidade_de_pneus;
public:
    Carro(std::string c, unsigned int p, unsigned int pneus){
        cor = c;
        preco = p;
        this->quantidade_de_pneus = pneus;
    }    
    std::string get_marca(){        return marca;      }
    friend class Pneus;         
    /* 
        declarado aqui uma classe friend, portanto, 
        ela conseguirá acessar todos os membros implícitamente, inclusive os
        privados da classe, ou seja, só é possível os acessar 
        utilizando funções que recebem o objeto de suas classes como parâmentro
    */
};

class Pneus {
private:
    unsigned int quantidade_de_pneus;   
    std::string marca;
public:
    Pneus(std::string marca){    this->marca = marca;    }
    // criamos aqui uma função que utiliza um objeto referencia da classe "Carro"
    // já que esta classe foi feita como friend à classe "Carro", ela poderá alterar inclusive seus atributos privados
    void setPneus(Carro& carro){    this->quantidade_de_pneus = carro.quantidade_de_pneus;      }  
    void getPneus(){    std::cout << quantidade_de_pneus;       }
};

int main(){
    Carro fusca("preto", 7000, 4);
    Pneus aramizados("Pirelli");       
     // aqui passando o objeto já criado como argumento para o método
    aramizados.setPneus(fusca);   
    // como já foi o atributos foram igualados, logo o atributo 
    // "quantidade_de_pneus" da classe friend terá o mesmo resultado da Classe "Carro"
    aramizados.getPneus();         
}