#include <iostream>
class Carro {
private:
    std::string cor;
    std::string marca;
    unsigned int preco;    
public:
    Carro(std::string cor, unsigned int preco) {
        this->cor = cor;
        this->preco = preco;
    }    
    std::string get_marca() {    return marca;     }
    friend std::string jooj(Carro& carro, std::string m);   
    /*
        Como se fosse uma prévia declaração de função, mas 
        podendo utilizar de todos o atributos e métodos, 
        incluindo os privados da classe "amiga".

        Sintaxe:

            friend tipoderetorno nomedafunção(parametros);

        só adiciona a palavra-chave "friend" antes e em seguida crie a                                                                 
        função normalmente, porém, uma função ou classe sem corpo.
                    
    */
    // aqui vale a mesma regra.
    friend void printar_marca(Carro& carro);               
};
   std::string jooj(Carro& carro, std::string m) {           
    /*  
        Corpo de uma função normal.
        Já que já fizemos a declaração prévia dessa função como 
        friend, agora pode-se usar métodos e atributos, incluido 
        os privados.
    */
        carro.marca = m;
        return carro.marca;     
    }
    void printar_marca(Carro& carro) {                   
        std::cout << carro.get_marca();
    }
int main() {
    Carro fusca("preto", 7000);
    jooj(fusca, "Wolkswagen");                                 
    // Aqui foi setado posteriormente o atributo "marca" do carro, 
    // mesmo sendo privado                             
    printar_marca(fusca);                   
}