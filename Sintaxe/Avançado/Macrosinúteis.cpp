#include <iostream>

int main(){
    std::cout <<"Printa literalmente o nome do arquivo: "<<  __FILE__;
    std::cout << std::endl;
    std::cout <<"Printa a data: " << __DATE__;
    std::cout << std::endl;
    std::cout <<"Printa o horário: " << __TIME__;
    std::cout << std::endl;
    std::cout <<"Printa literalmente a linha que o comando está: " <<  __LINE__;
    std::cout << std::endl;
}