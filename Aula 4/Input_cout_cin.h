#include <cstdlib> /* Biblioteca de String */
#include <iostream>  /* Biblioteca cout - cin */
using namespace std; /* Caso não seja utilizado será necessário utilizar std::cin - std::cout */

/*Exemplo para input de informações e print */

int main(void) {
	string nome;
	
	cout<<"Qual eh o seu nome?"<<endl;
	cin>>nome;
	
	cout<<"Oi "<<nome<<", tudo bem com voce?";
	cout<< "\n\n"; /* Utilizado para pular linhas, cada \n pula uma linha */
	
	system("PAUSE");
	return EXIT_SUCCESS;
}