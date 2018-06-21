#include <iostream>
using namespace std;

int main(void){
	int numero;

	cout<<"Digite um numero: "<<endl;
	cin>>numero;

	if (numero > 0){
		cout<<"Numero positivo!"<<endl;
	}
	else {
		cout<<"Numero negativo!"<<endl;
	}

	return 0;
}