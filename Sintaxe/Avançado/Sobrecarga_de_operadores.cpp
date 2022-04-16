#include <iostream>
class Pessoa{
private:
    std::string nome = "";
    unsigned int idade = 0;
public:    
    Pessoa(std::string n, unsigned int i){nome = n; idade = i;}
    friend std::ostream& operator<<(std::ostream& os, const Pessoa& pessoa);    
    /* 
        Foi criado o friend dessa classe para termos a capacidade de utilizar 
        todas as suas informações (inclusive se fossem privados)
    */
};
    std::ostream& operator<<(std::ostream& os, const Pessoa& pessoa){   
        /*
            Sintaxe: 

            tipoderetorno operator operadorrequerido(parametros){expressões}
            
            É MISTER SALIENTAR QUE OS PARÂMTROS NÃO DEVEM, EM HIPÓTESE ALGUMA, SEREM CÓPIAS.

            para isso, nos parâmetros se utiliza a palavra chave "const" e o operador referência "&"
            
            para garantirem que não exista possibilidade dos parâmetros serem cópias
        */
        os << pessoa.nome << " - " << pessoa.idade << "\n";     // informando pro compilador o que ele deve fazer 
        return os;    
    }
int main(){
    Pessoa qualquer("Irineu", 35);
    std::cout << qualquer;              //  note que caso não fosse feito a sobrecarga, não seria 
                                        //  possível printar um objeto bruto
}