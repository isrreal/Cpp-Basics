#include <iostream>
#include <fstream>  
/* 
    pra usar tem que colocar a 
    biblioteca de manipulação de strings 
    "#include <fstream>" 
*/
int main() {
    std::cout<< "Abertura do arquivo \"arq1\""<< std::endl;   
    std::ofstream arquivo1;   
    // criação de um objeto pra escrita, 
    // fluxo do computador para a saída de vídeo ( monitor) 
    try {
        arquivo1.open("arquivo.txt", std::fstream::app);
        std::cout << "algo foi escrito.";
        arquivo1 << "Israel esteve aqui"; 
        // Aqui altera o fluxo do arquivo da entrada(teclado)
        // para o arquivo "arq1", por isso a troca ocorreu           
        arquivo1.close();
    }
    catch(std::exception& e) {
        std::cout << e.what();
    }
}