#include <iostream>
class Carro {    
public:
    std::string  marca;
    int velocidade;
    float presso;
    void coisartudo(std::string marca, int velocidade , float presso);
};  

void Carro:: coisartudo(std::string m, int vel, float pr){     
    /* 
        usando o método "coisartudo" do namespace "carro"  
        tem como formato:                                       
            tipoderetorno <namespace> :: < nomedometodo>{}    
    */      
    this->marca = marca;
    this->presso = presso;
    this->velocidade = velocidade;      
}

int main() {
    Carro fusca;
    fusca.coisartudo("wolkswagen",60 , 4020);
    std::cout << fusca.marca ;
}