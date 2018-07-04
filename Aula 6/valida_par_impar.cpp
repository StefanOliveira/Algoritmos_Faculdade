//Valida se o número é par ou impar

#include <iostream>
using namespace std;

int main(void){
	int nNum;
	cout<<"Digite um número, para verificar se é par ou impar: "<<endl;
	cin>>nNum;

	if (nNum%2==0){
		cout<<"Número PAR"<<endl;
	}
	else{
		cout<<"Número ÍMPAR"<<endl;
	}

	return 0;
}