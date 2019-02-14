#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n=0, factorial=1;
	double e=0;	
		
	
	cout << "Introduce un número entero que sustituya a la ""n"" de tu ecuacion E " << endl;
	cin >> n;	

	// DECLARO UN BUCKLE FOR  PARA CALCULAR EL FACTORIAL	

	for ( int i=1; i<=n; i++){

		factorial = factorial * i;
	// DECLARO EL SEGUNDO BUCKLE FOR PARA HACER LA SUMATORIA DE 1 DIVIDIDO ENTRE FACTORIAL		
		for ( int j=1; j<=n; j++){
			e = (1/factorial) + e;
			cout << "El valor de e es: " << e << endl;
		}
	}
		cout << "El factorial de " << n << " es " << factorial << endl;	
		cout << "Para el número: " << n << " el resultado de E es: " << e << endl;	
}
