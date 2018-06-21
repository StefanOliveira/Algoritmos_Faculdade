#include <iostream>
using namespace std;

int main(void) {
	int idade;

	cout<<"Digite sua idade: "<<endl;
	cin>>idade;
	
	if(idade > 18 && idade <= 67 ){
		cout<<"Voce ja pode doar sangue!"<<endl;
	}
	else{
		cout<<"Voce nao pode doar sangue!"<<endl;
	}
	cout<<"\n\n""Fim do Programa."<<endl;
	
	return 0;
}