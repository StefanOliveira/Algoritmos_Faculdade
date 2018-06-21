#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int x, i;
	x = 1;
	
	cout << x;
	i = 6;
	x =  ++i;
	cout << x;
	if ( x <= 7) {
		cout << x;
		x = ++10;
		} 
	else {
		cout<< x;
	}
	return 0;
}