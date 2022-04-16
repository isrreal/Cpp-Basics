#include <iostream>
#include <vector>
// Nos argumentos você coloca o "&" para fazer com que o 
// vetor original seja alterado, nao sua copia 
void normal(std::vector<int>& numeros){              
    numeros.push_back(5);
}
int main(){
    std::vector<int> teste = {1, 2, 3, 4, 5} ;     
    // tipo&   significa uma variável referência                     
    std::vector<int>& referencia = teste;                
    std::cout << "esse daqui e o tamanho : " << teste.size() << "\n" ;   
    // Não precisa passar o endereço caso seja uma variável referência 
    normal(referencia);             
    std::cout << "esse daqui e o tamanho agora: " << teste.size() << "\n" ;   






}