#include <iostream>
void gerar(int** matriz, int linhas, int colunas) {    
    for (int i = 0; i < linhas; i++)     
        for (int j = 0; j < colunas; j++){ 
            std::cout << "Digite um número: " << std::endl;           
            std::cin >> matriz[i][j]; 
        }
}

void printar(int** matriz, int linhas, int colunas) {
    std::cout << "Aqui está o resultado:" << std::endl;
    for (int i = 0; i < linhas; i++){        
        for (int j = 0; j < colunas; j++){            
            std::cout << matriz[i][j] << " ";            
        }
        std::cout << "\n";
    }
}

int main(){
    int linhas = 0;
    int colunas = 0;
    std::cout << "Digite a quantidade de linhas:"<< std::endl ;
    std::cin >> linhas;
    std::cout << "Digite a quantidade de colunas: "<< std::endl ;
    std::cin >> colunas;    
    int** matriz = new int* [linhas];         /*  pra alocar dinamicamente usa 
                                                essa função:        
                                                new  "tipo da variável" 
                                                "a quantidade de ponteiros" [tamanho do vetor]      */
    for (int i = 0; i < linhas; ++i)          /*  como é um array de duas dimensões ( matriz) 
                                                é necessário fazer um loop pra alocar as colunas,
                                                funciona assim:   
                                                "nome da variável que está sendo 
                                                alocada"[o iterador do loop] = 
                                                new "tipo da variável" [a quantidade de linhas];   */
        matriz[i] = new int[colunas];         
                                            /*  por padrão,  a quantidade de ponteiros nos tipos 
                                                das vaiáveis diminui em 1 para cada alocação feita  */
    gerar(matriz, linhas, colunas);    
    printar(matriz, linhas, colunas);   
    std::cout << "O codigo chegou ao fim!";    
}