#include <iostream>
#include <string>

class Carro {    
public:
    std::string  marca;
    int velocidade;
    float presso;
     // primeiramente cria-se o construtor como public
    Carro(std::string marca, int velocidade, float presso);   
};  

    Carro::Carro(std::string marca, int velocidade, float presso) {     
    /* 
        Usando o construtor apartir do namespace "carro"  
        tem como formato: 
        <namespace>::< nomedaclassse>{}   
    */
      
        this->marca = marca;
        this->presso = presso;
        this->velocidade = velocidade;      
}

int main(){
    Carro fusca("wolkswagen", 60, 4020);
    std::cout << fusca.marca;
}