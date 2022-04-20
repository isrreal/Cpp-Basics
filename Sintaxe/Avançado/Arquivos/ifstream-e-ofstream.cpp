#include <iostream>
#include <fstream> 
/* 
    pra usar tem que colocar a 
    biblioteca de manipulação de arquivos 
    "#include <fstream>" 
*/
int main() {
    std::cout <<"Abertura do arquivo \"arq1\""<< std::endl; 
     /* 
        criação de um objeto pra escrita, 
        fluxo do computador para a saída de vídeo (monitor) 
    */
    std::ofstream arq1; 
    arq1.open("Texxto.txt");
    std::cout <<"vai dar certo.....";
    arq1 << "Alguem esteve aqui"; /* Aqui altera o fluxo do arquivo 
    da entrada( teclado) para o arquivo "arq1", por isso a troca ocorreu */
    arq1.close();
    /* 
        criação de um objeto pra leitura, 
        fluxo do arquivo que se quer realizar a leitura
        para a saída de vídeo (monitor) 
    */
    std::ifstream ler;   
    std::string auxiliar;
    ler.open("Texxto.txt");
    // O métodoo is_open é utilizado para 
    // verificar se o arquivo foi corretamente aberto 
    if(ler.is_open())
    // getline serve pra excluir o caractere delimitador da string, 
    // assim podendo colocar como entrada , strings com espaçoes.      
        while(getline(ler, auxiliar))
            std::cout<< auxiliar;
    else 
        std::cout << "Erro ao abrir o arquivo";
}