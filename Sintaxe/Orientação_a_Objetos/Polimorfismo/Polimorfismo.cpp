#include <iostream>
#define jooj "\n\n\n"
class Veiculo {
public:
    std::string nome = "vazio";
    int rodas = 0;
    int presso = 0;
    /* 
        É possível ter varios métodos com o mesmo nome, contanto 
        que a quantidade de parametros não seja igual
    */
    //  veja que só há um parâmetro
    Veiculo(std::string nome){      
        this->nome = nome;
    }
    // agora dois
    Veiculo(std::string nome, int rodas) {       
        this->nome = nome;
        this->rodas = rodas;
    }
    //  agora são três
    Veiculo(std::string nome, int rodas, int presso) {     
        this->nome = nome;
        this->presso = presso;
        this->rodas = rodas;
    }
};
int main(){
    Veiculo carro("carro");
    Veiculo moto("Moto", 2);
    Veiculo  bike("Bicicleta", 2, 400);
    std::cout << carro.nome << " - " << carro.presso;   
    std::cout << jooj;
    std::cout << moto.nome << " - " << moto.rodas;
    std::cout << jooj;
    std::cout <<bike.nome << " - " << bike.rodas << " - " << bike.presso;
}