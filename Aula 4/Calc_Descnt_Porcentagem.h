#include <iostream>
using namespace std;

/*Calcula Desconto utilizando porcentagem */

int main(int argc, char** argv) {
	float Preco = 50;
	float Preco_desconto = 0;
	
	Preco_desconto = Preco - Preco * 7.5 / 100;
	
	cout << "O preco com desconto eh: " << Preco_desconto << endl;
	
}