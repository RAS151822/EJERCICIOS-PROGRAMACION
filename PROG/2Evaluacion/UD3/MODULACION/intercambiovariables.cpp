#include <iostream>
using namespace std;

void intercambio(char &a, char &b){
	char aux;
	//cout << "Debug: a " << a << endl;
	//cout << "Debug: b " << b << endl;

	aux = a;
	a = b;
	b = aux;

	cout << "Debug: a " << a << endl;
	cout << "Debug: b " << b << endl;
}

int main(){
	char a = 'a', b = 'b';

	 intercambio (a,b);
	
	cout << "a = " << a << " y b = " << b << endl;
}
