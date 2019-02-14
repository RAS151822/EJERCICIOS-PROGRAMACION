#include <iostream>
using namespace std;

int main(){
	double n1=0.0, n2=0.0;

	cout << "HOla ERIKA Escribe dos numeros reales y le dire cuál es el mayor" << endl;
	cin >> n1;
	cin >> n2;

	if (n1>n2) {
		cout << "El número mayor es: " << n1 << endl;
	}
	if (n2>n1) {
		cout << "El número mayor es: " << n2 << endl;
	}
	else if ( n1==n2) {
		cout << "Los números son iguales " << endl;
	}
}	
