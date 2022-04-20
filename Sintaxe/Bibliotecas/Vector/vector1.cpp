#include  <iostream>
#include  <vector>
#define espasso "\n" << "\n" << "\n" 
int main(){
    setlocale(LC_ALL,"portuguese");
    std:: vector < int > vetor1;
    std:: vector < int > vetor2;
    vetor1.push_back(5);
    vetor1.push_back(4);
    vetor1.push_back(3);
    vetor1.push_back(2);
    vetor1.push_back(1);    
    vetor2.push_back(3);
    vetor2.push_back(42);
    vetor2.push_back(31);
    vetor2.push_back(65);
    vetor2.push_back(0);   
    std::cout <<"Esses são os elementos do vetor 1: " 
    << "\n";
    for (int i = 0; i < vetor1.size(); i++)
        std::cout <<  vetor1[i] << "\n" ;
    std::cout<<"Esses são os elementos do vetor 2: "<< "\n" ;
    for (int i = 0; i < vetor2.size();  i++ )
        std::cout <<  vetor2[i] << "\n"; 
    std::cout <<"Agora trocaremos as respectivas \
    posições dos vectores: " << "\n"  <<  "\n";
    vetor1.swap(vetor2); 
    std::cout <<"Agora estes são os valores do vetor 1: " << "\n";
    for (int i = 0; i < vetor1.size(); i++)    
        std::cout <<  vetor1[i] << "\n" ;          
    std::cout << " \n " ;    
    std::cout <<"Agora estes são os valores do vetor 2: " << "\n";
    for(int i = 0; i < vetor2.size(); i++)
        std::cout <<  vetor2[i] << "\n";
    std::cout << "\n" ;
    std::cout << "Foram trocados com sucesso!!" 
    << "\n" << "\n" ;
   std::cout << espasso;
    std::cout << "Primeiro valor de vetor1: " <<
    vetor1.front() << "\n" ;


    std::cout << "Último valor de vetor1: " 
    << vetor1.back() << "\n" ; 
    std::cout <<"Valor do meio de vetor1: "
    << vetor1.at(vetor1.size()/2) << "\n" ;
    std::cout << espasso ;
    std::cout << "|||||||||||||||||||||||||||||||||||||||||||||" << "\n";
    std:: cout << "|||||||||||||||||||||||||||||||||||||||||||||" << "\n" \
    << "\n" << "\n";
    std::cout <<"Primeiro valor de vetor2: " <<
    vetor2.front() << "\n" ;
    std::cout << "Último valor de vetor2: " 
    << vetor2.back() << "\n" ;     
    std::cout << "Valor do meio de vetor2: " 
    << vetor2.at(vetor2.size()/2) << "\n";
    std::cout << espasso;
    std::cout << espasso;
    std::cout << "Agora, para inserir em qualquer\
    parte de \"vetor1\": " << "\n" << "\n";
    std::cout << " No início: " << "\n";
    vetor1.insert(vetor1.begin() , 20 );  
    for (int i = 0  ; i < vetor1.size() ;  i++)    
        std::cout <<  vetor1[i] << "\n";     
    std::cout << "\n" << "\n";
    std::cout << " Para adicionar no final: " << "\n" ;
    vetor1.insert(vetor1.end(), 54 );  
    for (int i=0  ; i < vetor1.size() ;  i++ )    
       std::cout <<  vetor1[i] << "\n" ;     
    std::cout << "Também é possível definir  qual \
    parte você quer adicionar: " << "\n" << "\n";
    std::cout << "----->Adicionando no inicio "<< "\n";
    vetor1.insert(vetor1.begin( ), 45);
    for (int i = 0  ; i < vetor1.size() ;  i++ )    
        std::cout <<  vetor1[i] << "\n" ;
    /* ou numero1.insert(numero1. 
    """""""""""end"""""""""" () """"-1""""" , 20 );  
    ---> caso queira escoher o penúltimo, e assim 
    por diante*/ 
    std::cout << "\n" << "\n";
    std::cout << "Esse é o tamanho do vetorl antes da remoção: " << vetor1.size() << "\n"; 
    std::cout << "Também é possível remover partes ou até mesmo o tudo de uma vez" << "\n" << "\n";
    std::cout << "Removendo..." << "\n" << "\n";
    vetor1.pop_back();
    std::cout << "Esse é o tamanho do vetorl:  " << vetor1.size() << "\n";
    for (int i=0  ; i < vetor1.size();  i++ )    
        std:: cout <<  vetor1[i] << "\n" ;
    std::cout <<"\n" << "Resetando o vetor..." << "\n" << "\n";
    vetor1.clear();
    std::cout << "Esse é o tamanho do vetorl agora: " << vetor1.size() << "\n";
    return 0;
}