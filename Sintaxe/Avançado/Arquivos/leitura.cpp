#include <iostream>
#include <fstream>  
/*  
    pra usar tem que colocar a 
    biblioteca de manipulação de arquivos 
    "#include <fstream>" 
*/

int main(){
    /* 
        criação de um objeto pra leitura, 
        fluxo do arquivo que se quer realizar a leitura
        para a saída de vídeo ( monitor) 
    */
    std::ifstream ler;             
    // criando uma variável para armazenar os 
    // elementos do arquivo pra depois printar
    std::string auxiliar;                
    ler.open("arquivo.txt");                       
    // O métodoo is_open é utilizado para 
    // verificar se o arquivo foi corretamente aberto                               
    try {
    /*
        a função getline serve pra excluir o caractere delimitador da string, 
        assim podendo colocar como entrada , strings com espaços.       
        também pode receber outro parâmetro, 
        o sinalizador de saída : como por exemplo um getline(ler.auxiliar , " , ")
    */
        while(getline(ler, auxiliar)) 
            std::cout << auxiliar << std::endl;       
    }
    catch(std::exception& e) { 
        std::cout << e.what() << std::endl;
        std::cout <<"Erro ao abrir o arquivo";    
    }
}