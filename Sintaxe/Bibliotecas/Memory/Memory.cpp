#include <iostream>
/* 
    #include <memory> 
    para poder manipular ponteiros inteligentes
    ponteiros inteligentes são úteis de modo que 
    sua desalocação é automática após o término 
    de uso do ponteiro portanto,  mais otimização 
    de memória
*/
#include <memory>
int main(){
/* 
    o construtor da classe exige uma alocação, como
    um ponteiro comum
    exemplo: std::shared_ptr<tipo> nome(new tipo[quantidade])
    quer dizer que só pode ter um ponteiro nesse bloco de memória
*/
    std::unique_ptr<int> int_ptr(new int[1]);   
// int_ptr = int_ptr2;                
// é errado pois um ponteiro já foi alocado como único dono do bloco de memória      
    std::unique_ptr<int> int_ptr2;
// utilizado quando é necessário fazer uma atribução com outro smart pointer
    std::shared_ptr<int> int_ptr_shrd(new int[1024]);    
    std::shared_ptr<int> int_ptr_shrd2;
    int_ptr_shrd2 = int_ptr_shrd;                       
    std::cout << "Valor do ponteiro 1: " << *int_ptr_shrd << "  endereço: "<< &int_ptr_shrd << "\n\n";
    std::cout << "Valor do ponteiro 2: " << *int_ptr_shrd2 <<"  endereço: "<< &int_ptr_shrd2;           
}