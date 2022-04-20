#include <iostream>

#include <fstream>  
/*  
    pra usar tem que colocar a 
    biblioteca de manipulação de arquivos 
    "#include <fstream>" 
*/

int main(){
    std::ifstream ler;             
    /* 
        criação de um objeto pra leitura, 
        fluxo do arquivo que se quer realizar a leitura
        para a saída de vídeo ( monitor) 
    */
    std::string auxiliar;                
    //c riando uma variável para armazenar os 
    // elementos do arquivo pra depois printar
    ler.open("ifstream.txt");                       
    // O métodoo is_open é utilizado para 
    // verificar se o arquivo foi corretamente aberto                               
    if(ler.is_open()) {
    /*
        a função getline serve pra excluir o caractere delimitador da string, 
        assim podendo colocar como entrada , strings com espaços.       
        também pode receber outro parâmetro, 
        o sinalizador de saída : como por exemplo um getline(ler.auxiliar , " , ")
     */
        while(getline(ler,auxiliar)) 
            std::cout << auxiliar << std::endl;       
    }
    else 
       std::cout <<"Erro ao abrir o arquivo";    
}