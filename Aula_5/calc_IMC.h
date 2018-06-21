#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	float peso, altura, imc;
	
	cout<<"Digite o seu peso: "<<endl;
	cin>>peso;
	cout<<"Digite sua altura: "<<endl;
	cin>>altura;
	
	imc = peso/(pow(altura,2));
	
	if(imc < 17){
		cout<<"\n\n" "IMC="<<imc<<". Situacao: Muito abaixo do peso. "<<endl;
	}
	if(imc >= 17 && imc <= 18.49){
		cout<<"\n\n" "IMC="<<imc<<". Situacao: Abaixo do peso. "<<endl;
	}
	if(imc >= 18.5 && imc <= 24.99){
		cout<<"\n\n" "IMC="<<imc<<". Situacao: Peso normal. "<<endl;
	}
		if(imc >= 25 && imc <= 29.99){
		cout<<"\n\n" "IMC="<<imc<<". Situacao: Acima do peso. "<<endl;
	}
		if(imc >= 30 && imc <= 34.99){
		cout<<"\n\n" "IMC="<<imc<<". Situacao: Obesidade 1. "<<endl;
	}
	if(imc >= 35 && imc <= 39.99){
		cout<<"\n\n" "IMC="<<imc<<". Situacao: Obesidade 2 (Severa). "<<endl;
	}
	if(imc > 40){
		cout<<"\n\n" "IMC="<<imc<<". Situacao: Obesidade 3 (Morbida). "<<endl;
	}
	return 0;
}