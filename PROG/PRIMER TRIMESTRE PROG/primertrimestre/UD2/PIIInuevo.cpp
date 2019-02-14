#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	//DECLARO LAS VARIABLES PARA EL NÚMERO INTRODUCIDO Y PARA LA SUMATORIA Y EL ACUMULADOR
	int n = 0;
	double acumulador=0.0, sumatoria=0.0, pi=0.0;	

	cout << "Introduzca el número de aproximaciones que quieres que tenga tú número PI " << endl;
	cin >> n;
	
	//REALIZO UN BUCKLE FOR PORQUE NECESITO QUE ME HAGA UNA SUMATORIA UN NÚMERO DE VECES INDICADO Y GUARDAR LA SUMATORIA PARA POSTERIORI HACER SU RAIZ Y MULTIPLICARLA
	for  (int i=0; i<=n; i++){
		sumatoria = pow(-1.0,i)/ pow( 2.0*i + 1.0,3.0);
			acumulador += sumatoria;		
	}
	pi = acumulador * 32.0;
	cout << "El número de aproximaciones de pi es: " << n << " el valor de PI es: " << setprecision (pi) << pow(pi,1.0/3) << endl;	
}
