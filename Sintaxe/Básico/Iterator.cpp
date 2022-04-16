#include <iostream>
#include <vector>
void push(std::vector<int>& numeros) {
    numeros.push_back(4);
    numeros.push_back(2);
    numeros.push_back(4);
    numeros.push_back(1);
}
int main(){
    std::vector<int> numeros;
    push(numeros);
    // criando um objeto iterador
    std::vector<int>::iterator it = numeros.begin();       
    // sintaxe:   
    //  <tipo da variavel que vai ser iterada> :: iterator <nome do iterador> */      
    for(it; it != numeros.end(); it++)
        // para referenciar um iterator, usa-se o um
        // ponteiro antes do nome da variável   
        std::cout << *it << "\n";     
}