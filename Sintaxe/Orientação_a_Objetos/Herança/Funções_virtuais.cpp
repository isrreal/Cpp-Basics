#include <iostream>
#include <algorithm>
#define jooj "\n\n\n"
class Animal {
public:
    std::string especie;
    unsigned short int patas;
    // para declarar como virtual, apenas coloque a palavra-chave "virtual" no início da função
    virtual void comer() {   std::cout << "Aqui ta padraozinho";     };     /*  
                                                                                Declarado virtual porque o método assumirá comportamentos discrepantes
                                                                                dependendo da classe que herdadará a "classe pai" 
                                                                                provavelmente terá características distintas
                                                                           */
};
class Leao: Animal{
public:
    Leao(std::string especie, int patas ) {
        this->especie = especie;
        this->patas = patas;
    }
    /*a palavra chave override sobrescreve a função da classe pai, mas não pode ter alteração de argumentos
        exemplo:
            void comer(std::strin alimento) override{}       
            estaria errado, pois o método virtual na classe pai não possui argumentos 
                */
    void comer() override {    std::cout <<"NHAM NHAM " << "carne"  << " NHAM NHAM\n\n\n";        }                
};
class Zebra:Animal {
public:
    Zebra(std::string especie, int patas ) {
        this->especie = especie;
        this->patas = patas;
    }
    // aqui não se pode usar o método override pois há argumentos não definidos 
    // no método virtual da classe pai
    void comer(std::string alimento) {     std::cout <<"NHAM NHAM " << alimento <<" NHAM NHAM\n\n\n";         }   
};
int main() {
    Leao leao("Leao", 4);
    Zebra zebra("Zebra", 4);
    leao.comer();       // veja que ele come carne
    zebra.comer("grama");      // veja que ele come grama
}



