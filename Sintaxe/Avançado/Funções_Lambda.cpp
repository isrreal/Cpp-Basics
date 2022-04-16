#include <iostream>
int main(){
   int a = 2;
   int b = 3;
    /*Sintaxe:   [](parametros){      expressão;   }*/
   auto jooj = [](int numero1, int numero2){      return numero1 + numero2;      };
   std::cout << jooj(a, b); //aqui foi chamado a variavel "jooj" e foram passados  parametros, como se fosse uma função padrão
}