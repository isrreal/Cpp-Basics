#include <iostream>
template <class add>                       /*
                                            Sintaxe:

                                                template <class nomequalquer> 
                                                class outronome{

                                                    expressões da classe;

                                                }
                                            */

class  Adicionar{                        //   criando um template de uma classe

                    
private:
    add a;                              //   quanto for declarar variáveis, SEMPRE colocar o nome do template como tipo
    add b;                              //   aqui
public:
    Adicionar(add numero1, add numero2){                //   inclusive parâmetros
        this-> a = numero1;
        this-> b = numero2;
    }
    add adicionar(){    return a + b;     }       //   inclusive também tipos de retorno
};

int main(){
    Adicionar inteiro(1 , 3);                       //      criando um objeto da nossa classe "Adicionar" do nosso template criado
    Adicionar flutuante(1.23, 8.76);                    
    Adicionar duplo(12.3232, 1.76767);
    std::cout << inteiro.adicionar() << std::endl;               //      depois de criada, funciona como uma clase normal
    std::cout << flutuante.adicionar() << std::endl;    
    std::cout << duplo.adicionar() << std::endl;
}