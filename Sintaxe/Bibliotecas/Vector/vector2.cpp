#include <iostream>
#include <vector>
int main(){ 
    // fazendo um vector de vectores
    std::vector<std::vector<int>> matriz = {{1,2,3}, {4,5,6,7}};    
    for (int i = 0; i < 3; i++ ){
        for (int j = 0; j < 4 ; j++ )
            std::cout << matriz[i][j] << " ";                   
        std::cout << "\n" ;
    }    
}




