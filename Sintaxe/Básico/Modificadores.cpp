#include <iostream>

int soma(int n1, int n2){     
    /*
        a classe de armazenamento auto, diz ao compilador 
        que o tipo dessa variável será definida automaticamente
    */
    return n1 + n2;    
}
void calculo(){
    static float numero = 23.4; 
    /* 
        a classe de armazenamento "static", 
        diz ao compilador que a variável
        será armazenada em algum lugar 
        específico da memória, portanto, quando 
        queremos modificar ele, a variavel é modificada
        diretamente da sua posição na memória,
        assim retornando ao local onde estava alocada e 
        a alterando
    */
    numero++;    
    std::cout << "esse eh o seu numero: "<< numero << std::endl;
}
int main(){
    int numero1 = 500;
    int numero2 = 200;
    int variavel = soma(numero1, numero2);
    std::cout << "O resultado da soma é: "<< variavel << std:: endl;                      
    for (int i = 0; i < 6; i++)
    //observe que o valor do número se modifica a cada chamada da função
        calculo();  
}