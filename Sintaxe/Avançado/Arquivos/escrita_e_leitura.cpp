#include <iostream>
#include <fstream>

int main() {
    std::ofstream arquivo;
    std::ifstream leituraDeArquivo;
    std::string armazena;
    try {
        // abrindo e incrementando conteúdo pelo fim
        arquivo.open("arquivo2.txt", std::ofstream::app);
        // enviando o contéudo para o arquivo
        arquivo << "Arquivo 2 criado";
        arquivo.close();
    }
    catch (std::exception& e) {
        std::cout << e.what();
    }
    try {
        leituraDeArquivo.open("arquivo2.txt");
        while(getline(leituraDeArquivo,  armazena)) 
            std::cout << armazena;
    }
    catch (std::exception& e) {
        std::cout << e.what();
    }
}