#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//DECLARO LAS VARIABLES PARA EL NÚMERO INTRODUCIDO Y PARA LA SUMATORIA Y EL ACUMULADOR
	int n = 0;
	double acumulador=0.0, sumatoria=0.0, raiz=0.0, pi=0.0;	

	cout << "Introduzca el número de decimales que quiere que tenga sú número PI " << endl;
	cin >> n;
	
	//REALIZO UN BUCKLE FOR PORQUE NECESITO QUE ME HAGA UNA SUMATORIA UN NÚMERO DE VECES INDICADO Y GUARDAR LA SUMATORIA PARA POSTERIORI HACER SU RAIZ Y MULTIPLICARLA
	for ( int i=0; i<=n; i++){
		sumatoria = pow (-1.0,n)/ pow ( (2.0*n+1.0),3.0);
		acumulador = sumatoria ++;
	}
	pi = acumulador * 32;

		cout << "El valor de PI es: " << pow (pi,1.0/3) << endl;	
}
