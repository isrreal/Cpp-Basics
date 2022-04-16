#include <iostream>
#include <vector>
void printar(std::vector<int> vetor) {
    std::cout << " Esse eh o tamanho do vetor: " << vetor.size() << "\n" ;
    std::cin.get();
    std::cout << "esses sao os elementos: " << "\n" ;
    for (int i = 0; i < vetor.size(); i++)
        std::cout << vetor[i] << "\n";
     std::cin.get();
}

void gerar(std::vector<int> vetor) {   
    vetor.resize(5); 
    for ( int i = 0; i < vetor.size(); i++)       
        vetor[i] = rand() % 100;    
     printar(vetor);
}

int main(){
    srand(time(NULL));
    std::vector<int> vetor = {1,90,34,23 ,123};   
    std::cout << "Esse eh o tamanho do vetor: " << vetor.size() << "\n" ;
    std::cin.get(); 
    std::cout << "Esses sao os elementos: " << "\n";
    for (int i = 0; i < vetor.size(); i++ )
        std::cout << vetor[i] << "\n";
    vetor.clear();
    std::cin.get();
    std::cout << "Agora esse eh o tamanho do vetor: " <<  vetor.size() << "\n" ; 
    for (int i = 0; i < vetor.size(); i++)
        std::cout << vetor[i] << "\n";
    gerar(vetor);
}





