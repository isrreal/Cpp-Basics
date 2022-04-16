#include <iostream>

class Exemplo {    
private:               
    int numero;         
    int numero2;
public:             
    Exemplo(int a, int b) {                             
        this->numero = a; 
        this->numero2 = b;                   
    }
    int Get_numero() {      return numero;      }   
    /*
        É possível sim fazer uso de algum atributo 
        "private" em uma classe "public"  desde que faça
        um método que retorne esse atributo
    */
    int Get_numero2() {     return numero2;     }        
    int multi() {     return numero * numero2 ;      } 
};

int main(){
    Exemplo maravilhoso(123, 666);
    std::cout << maravilhoso.multi();
}