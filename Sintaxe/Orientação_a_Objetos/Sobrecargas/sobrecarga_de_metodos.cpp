#include <iostream>
#define jooj "\n\n\n"
class Veiculo {
public:
    std::string nome = "vazio";
    int rodas = 0;
    int presso = 0;
    Veiculo(std::string nome){      
        this->nome = nome;
    }
    /* 
        É possível ter varios métodos com o mesmo nome, contanto 
        que a quantidade de parametros não seja igual
    */
    // veja que não há nenhum parâmetro
    void acelerar() {
        std::cout << "Carro acelerando!\n";
    }
    // e agora há um
    void acelerar(unsigned int velocidade) {
        std::cout << "Carro acelerando a " << velocidade << " por hora!\n";
    }
};
int main(){
    Veiculo carro("carro");
    carro.acelerar();
    carro.acelerar(200);
}