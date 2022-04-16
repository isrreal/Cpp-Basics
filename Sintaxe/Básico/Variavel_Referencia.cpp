#include <iostream>
int main(){
    int numero = 2;
    int& seila = numero;       
    /* 
        Criando aqui a uma variavel "seila" que 
        faz referencia a outra, "numero", 
        ou seja, ocupa o mesmo local na memória, logo, se 
        alterarmos a variavel "seila",
        "numero" será instantaneamente modificada 
    */    
    std::cout << numero << "\n" ; // 2
    seila = 90 ;                
    /*
        Nota-se aqui que foi alterado o valor da variável 
        referência, portanto, os valores da variável referenciada 
        "numero" foi devidamente alterada 
    */    
    std::cout << numero << "\n" ; // 90
}