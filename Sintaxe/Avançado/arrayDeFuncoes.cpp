#include <iostream>
int soma(int num1, int num2) {
    std::cout << "soma" << std::endl;
    return num1 + num2;
} 
int multiplicacao(int num1, int num2) {
    std::cout << "multiplicacao" << std::endl;
    return num1 * num2;
}
int main() {
    // retorno (*nomeDoPonteiro[])(parametros) = {funcao1, funcao2... }  OBS: funcoes necessitam ter os mesmos parâmetros
    int (*ponteiro_func[])(int, int) = {&soma, &multiplicacao};
    // não é necessário utilizar o operador "&"
    std::cout << (*ponteiro_func[1])(2, 4);

}