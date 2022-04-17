#include <iostream>
#define jooj "\n\n\n"
// uma interface se define como uma classe que não pode 
// ser instanciada, mas somente utilizada como um molde para outras classes
// porém é obrigatório o uso de todos os seus métodos
class Animal {
protected:
    std::string especie;
    unsigned short int patas;
    // para criar uma interface, basta criar uma função virtual pura:
    // virtual void nomedoMetodo() = 0;
    virtual void comer() = 0;     
};
class Leao: public Animal {
public:
    Leao(std::string especie, int patas ) {
        this->especie = especie;
        this->patas = patas;
    }
    /*
        a palavra chave override sobrescreve a função da classe pai, mas não pode ter alteração de argumentos
        exemplo:
            void comer(std::string alimento) override{}       
            estaria errado, pois o método virtual na classe pai não possui argumentos 
    */
    void comer() override {    
        std::cout << "NHAM NHAM carne NHAM NHAM\n\n\n";        
    }                
};
class Zebra: public Animal {
public:
    Zebra(std::string especie, int patas ) {
        this->especie = especie;
        this->patas = patas;
    }
    void comer() override {     
        std::cout <<"NHAM NHAM grama NHAM NHAM\n\n\n";         
    }   
};

int main() {
    Leao leao("Leao", 4);
    Zebra zebra("Zebra", 4);
    leao.comer();       
    zebra.comer();      
}



