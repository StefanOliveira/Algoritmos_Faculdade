#include <iostream>
using namespace std;

/* Cálculo para conversão de Celsius para Fahrenheit  */

int main(int argc, char** argv) {
	float celsius;
	float fahrenheit;
	
	cout<<"Digite a temperatura em Celsius:"<<endl;
	cin>>celsius;
	fahrenheit = celsius*1.8 + 32;
	
	cout<<celsius<<" graus Celsius equivale a "<<fahrenheit<<" graus Fahrenheit."<<endl;
	
	return 0;
	
}