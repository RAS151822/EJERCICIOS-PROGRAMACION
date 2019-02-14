#include <iostream>
using namespace std;

int main(){
	int n = 0, a = 1;
	
	cout << endl;
	cout << "Introduzca un número y el programa le dira cual es su número factorial :) " << endl;
	cin >> n;

	for (int i=1; i<=n; i++){
		a = i * a;
	}	
	cout << "El factorial de " << n << " es: " << a << endl;
}

