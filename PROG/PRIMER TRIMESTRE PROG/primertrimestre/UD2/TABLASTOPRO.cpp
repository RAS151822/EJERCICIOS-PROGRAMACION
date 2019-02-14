//PROGRAMA PARA CALCULAR LAS 10 TABLAS DE MULTIPLICAR 
#include <iostream>
using namespace std;

int main() {
	
	cout << endl;
	cout << "LAS TABLAS DE MULTIPLICAR DEL 1 AL 10" << endl;	

	for (int i=0; i<=10; i++){
			cout <<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<< endl;
			cout << endl;
			cout << "LA TABLA DE MULTIPLICAR DEL " << i << endl;
		for ( int j=0; j<=10;j++){
			cout << i << " x " << j << " = " << i*j<< endl; 
			cout << endl;
		}		
	}
	

}
