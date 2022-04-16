#include <iostream>
class Matriz {
private:
    int linhas;
    int colunas;
    int** matrix;
public:
    Matriz(int linhas, int colunas){
        this->linhas = linhas;
        this->colunas = colunas;
    }

    void criarMatriz();
    void povoar();
    void printar();
};

void Matriz::criarMatriz(){       
        matrix = new int* [linhas];
        for (int i = 0; i < linhas; i++)
            matrix[i] = new int [colunas];        
}
 void Matriz::printar(){
        for (int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                std::cout << matrix[i][j] << " "; 
            }
            std::cout << std::endl;
        }
}

void Matriz::povoar(){
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            matrix[i][j] = rand() % 100;     
}

int main(){
    srand(time(0));
    Matriz matriz(5,9);
    matriz.criarMatriz();
    matriz.povoar();
    matriz.printar();
}