#include <iostream>
#include <map>
int main(){    
    //      Sintaxe:          std::map< tipodachave, tipodeatribuição> nomeinventado;
    std::map<std::string, int> dicio;   
    std::map<std::string, int>::iterator it;
    dicio.insert(std::pair<std::string, int>("Israel", 18));    
    /*
        Para usar, é necessário criar um "pair", já que o 
        método necessita de um "pair" como parâmetro                                                                

        Sintaxe:      
            nome.insert(std::pair<tipodachave, tipodeatribuição>(nomedachave,valoratribuido));
    */
    dicio.insert(std::pair<std::string, int>("Juraci", 33));
    for(auto i: dicio)
        std::cout << i.first << " - " << i.second << "\n\n";    
        /*
            Para acessar a chave      iterador.first;
            Para acessar o valor atribuído      iterador.second;
        */
    // retorna um iterador e recebe como parâmetro uma chave
    it = dicio.find("Juraci");  
    // exclui o elemento apontado pelo iterador    
    // obs: SÓ É POSSÍVEL EXCLUIR PELA CHAVE                              
    dicio.erase(it);                                   
    std::cout <<"Agora o map atualizado:\n\n";
    for(auto i : dicio)
        //  percebe-se aqui que ele excluiu uma chave e seu valor,
         //  portanto, vai imprimir somente a chave restante
        std::cout << i.first << " - " << i.second << "\n\n";                                                                 
    /*    -------   Métodos extras:  -------                              
                        
            nome.empty()     ------->   Verifica se o container está vazio
            nome.clear()     ------->   Reseta o container            
            nome.swap(mapapratrocar) -------> troca os elementos do container pra outro 

    */
    if(dicio.count("jooj") != 0)              
    /* 
        testa se a chave requerida existe no container
        retorna um numero diferente de zero caso exista
        caso contrário, retorna 0 caso não exista
    */
        std::cout << "A chave \"Israel\" esta no mapa";
    else    
        std::cout << "Nao esta no mapa!\n\n";                        
}