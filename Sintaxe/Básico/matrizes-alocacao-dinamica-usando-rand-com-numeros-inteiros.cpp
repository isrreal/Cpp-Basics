#include <iostream>
void printar(int** matriz, int linhas, int colunas) {
    std::cout << "aqui está o resultado:"<< std::endl; 
    for (int i = 0; i < linhas; i++){      
        for (int j = 0; j < colunas; j++)           
            std::cout << matriz[i][j] << " ";            
        std::cout << std::endl;
    }
    for (int i = 0; i < linhas; ++i)
        delete [] matriz[i];
    delete [] matriz;    
}
void povoar(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++)     
        for (int j = 0; j < colunas; ++j)
            matriz[i][j] = (rand() % 198 ) -  99;
    printar(matriz, linhas, colunas);
}

void alocar(int linhas, int colunas) {
     int** matriz = new int* [linhas];       
    /* 
        pra alocar dinamicamente usa 
        essa função:        
        new  <tipodedado>   <a quantidade de ponteiros> [tamanho do vetor] 
    */
    for (int i = 0; i < linhas; ++i)       
    /*  
        como é um array de duas dimensões ( matriz) 
        é necessário fazer um loop pra alocar as colunas,
        funciona assim:   
        "nome da variável que está sendo 
        alocada"[o iterador do loop] = 
        new "tipo da variável" [a quantidade de colunas];   
    */
        matriz[i] = new int[colunas];               
        // por padrão,  a quantidade de ponteiros nos tipos 
        // das vaiáveis diminui em 1 para cada alocação feita
    povoar(matriz, linhas, colunas);
}


int main(){    
    srand(time(NULL));    
    int linhas;    
    int colunas;
    std::cout << "Digite a quantidade de linhas:"<< std::endl ;
    std::cin >> linhas;
    std::cout << "Digite a quantidade de colunas: "<< std::endl ;
    std::cin >> colunas;   
    alocar(linhas, colunas);
    std::cout << "O codigo chegou ao fim!";     
}