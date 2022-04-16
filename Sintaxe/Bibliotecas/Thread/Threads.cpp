#include <iostream>
#include <memory>
#include <thread>
void soma(int a, int b){
	int s;    
	s = a + b;    
	std::cout << "Aqui eh a soma da thread: " << s << std::endl;	
}

int main(){    
    // thread nome(funcao, argumentos)
    std::thread t1(soma, 10, 20);    
    std::cout << "Uma mensagem do Main" << std::endl;    
    // .join() bloqueia todas as outras threads ate que essa termine de ser executada
    t1.join();
    return 0;
}
