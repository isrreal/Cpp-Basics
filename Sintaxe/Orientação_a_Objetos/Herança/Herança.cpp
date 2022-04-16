#include <iostream>
class Pai {    
protected:
    int meuAtributo;
public:
    Pai(){   this-> meuAtributo = 5;   }
    void metodoPai() {
        std::cout << "Sou um metodo da classe pai!" << std::endl;
    }
};

class Filha: public Pai {              
/* 
    Classe <exemplo2> herdando a classe <exemplo>
    Agora é possível usar todos os atributos que foram criados na 
    "classe exemplo" como se fossem da "classe exemplo2"
*/
public:
    Filha() {                 
        this-> meuAtributo += 100 ;                   
        std::cout << meuAtributo << std::endl;    
    }
};

int main() {
    Filha filha; 
    filha.metodoPai();
}