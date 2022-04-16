#include <iostream>
int main(){
    /*
        Método de tratamento de erros, caso ocorra um erro, ele retorna uma excessão.   

    Sintaxe:
                
        try {            
            bloco de comandos           
        }         
        catch(excessão) {          
            bloco de comando
        }
    */
    try {
       int* vetor = new char[100000000];
    }
    catch(std::exception& jooj){                 
        // como se fosse uma função, coloca os parâmetros normalmente
        // agora é só colocar as expressões requeridas
        std::cout << "excessão capturada" << std::endl;
        std::cout << jooj.what();        
    }
}