#include <iostream>
template <typename soma> soma SOMA (soma a, soma b) {   /*  criando um template e uma função

                                                            Sintaxe: 

                                                                template<typename qualquernome>

                                                                qualquernome nomedafunção(qualquernome parâmetros){

                                                                    expressões;

                                                                }
                                                         */      
      return a + b;
}

int main(){    
    std::cout << SOMA(12,567); 
}