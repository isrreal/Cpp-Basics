#include <iostream>



struct Estrutura{           /* 
                            Sintaxe:    
                                struct nomequalquer{ atributos e  metodos;  }
                            Uma struct é uma classe com tudo público, portanto, 
                            é possível fazer tudo que uma classe comum faz
                            */
    std::string nome;
    int id;
    void idade(int idade){          // idênticas à declaração de funções comuns
        id = idade;
        std::cout <<"\n" << id;
    }
};

int main(){
    struct Estrutura exemplo;                   
    /* 
        toda vez que criar uma struct, usa a palavra-chave "struct" seguido 
        do nome que você atribuiu quando criou ela. A struct funciona como 
        um tipo de dado criado pelo próprio usuário, portanto, personaliza-la 
        está em sua essência
    */
    getline(std::cin, exemplo.nome);            
    /* 
        acessa um elemento da struct usando um ponto, da seguinte forma:
        nome_da_struct.elemento;
    */
    // o acesso de funções na struct é similar ao de um elemento comum,
    std::cout << exemplo.nome;
    // só que adiciona parênteses ao final 
    exemplo.idade(27);                                          
}