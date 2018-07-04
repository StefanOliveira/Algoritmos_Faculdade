#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero = 7;
	
	numero >= 0 ? numero++ : numero--;
	cout<<"O novo valor de numero eh: "<<numero;
	
	return 0;
}
