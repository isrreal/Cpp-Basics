#include <iostream>
int divisao(int a, int b){
    if(b == 0) 
        throw "Nao eh possivel dividir por zero";
        
    return a / b;
}
int main(){
    /*
        Uma a analogia bacana que  podde ser feita é como se eu
        tentasse fazer algo e. se nao desse certo, eu "arremesso"(throw) 
        esse erro e, consequentemente, ele é pego pelo "catch" para 
        fazer o tratametno de erros
    

        Sintaxe:
                
            try {            
                bloco de comandos           
            }         
            catch(excessão) {          
                bloco de comando
            }
    */
    try {
       int numero1;
       int numero2;
       std::cin >> numero1 >> numero2;
       divisao(numero1, numero2);
    } // como se fosse uma função, coloca os parâmetros normalmente
    catch(const char* jooj){        
        // agora é só colocar as expressões requeridas                                    
        std::cout << jooj;        
    }
}