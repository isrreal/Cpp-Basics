#include<iostream>
void passagemPorReferencia(int* variavel) {   
    /*
        Depois que passar por referência, tem que referenciar 
        a variável em todo canto com um ponteiro atrás.
    */
    // aqui o ponteiro
    *variavel *= 2;   
    // agora a variável vai ficar diferente de 9
}

int main(){
    int numero = 9;
    std::cout << numero << std::endl;
    passagemPorReferencia(&numero);                // Passa só o endereço da variável
    std::cout << numero;                 // Observe que a variável "teste" foi modificada fora do escopo principal
}
