#include <iostream>

class Carro {
/*
    Public:   Pode ser utilizado ou alterado por todo o código
    Private:  Só pode ser acessado dentro da classe ordenada, e somente ela, 
    portanto, não se utiliza para instanciação de objetos                
    Protected: Pode ser acessado somente na classe principal e classes herdadas              
*/
    public:           
        // definindo atributos                  
        std::string nome ;  
        // definindo atributos        
        int velocidade = 0 ;   
        // definindo atributos     
        int potencia = 0;          
        Carro(std::string nome , int velocidade, int potencia){     
        /* 
            método construtor tem como molde:
            nomedaclasse(parâmetros) {   expressão;  }
        */
        // instanciando para modificar os atributos   
            this->nome = nome;               
            this->velocidade = velocidade;        // instanciando para modificar os atributos
            this->potencia = potencia;          // instanciando para modificar os atributos
        }
};
class Exemplo {
public:
    int a = 0;
    void construtorDiferenciado(int a){        this-> a = a;       }       
    // Criado como se fosse um método comum                                                                      
};

int main(){
    Carro fusca("Fusca", 60, 6);        
    // Aqui se cria um objeto da classe carro e , concomitantemente, 
    // já se utiliza o construtor   
    // mostrando na tela um atributo do objeto                               
    std::cout << fusca.potencia;    
    Exemplo jooj;
    std::cout << "\n\n";    
    jooj.construtorDiferenciado(123456789);    // construindo o objeto como se fosse um método comum
    std::cout << jooj.a;                        
}