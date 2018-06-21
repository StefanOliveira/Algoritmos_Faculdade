#include <iostream>
using namespace std;

int main(void) {
	int idade;

	idade = 67;

	cout<<"Digite sua idade: "<<endl;
	cin>>idade;
	
	if(idade>18){
		cout<<"Voce ja pode doar sangue!"<<endl;
	}
	else{
		cout<<"Voce ainda nao pode doar sangue!"<<endl;
	}
	cout<<"\n\n""Fim do Programa."<<endl;
	
	return 0;
}