#include <iostream>
int soma(int num1, int num2) {
    return num1 + num2;
}

int main() {
    // retorno (*nomeDoPonteiro)(parametros) = funcaoReferenciada    OBS: somente a assinatura das variaveis
    int (*ponteiro_func)(int, int) = &soma;
    // não é necessário utilizar o operador "&"
    std::cout << (*ponteiro_func)(2, 4);

}