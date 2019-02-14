#include <iostream>
using namespace std;

int main (){
	char figura;
	int fila=0, columna=0, fila1=0, columna1=0;

	cout << "BIENVENIDO AL AJEDREZ DE RASPUTIN 1.0 " << endl;
	cout << endl;
	cout << "ELIGE LA FICHA QUE DESEAS MOVER" << endl;
	cout << endl;
	cout << "LA TORRE ES LA T" << endl;	
	cout << "LA REINA ES LA R" << endl;
	cout << "EL CABALLO ES LA C" << endl;
	cin >> figura;
	
	switch (figura) {
		case 'T': cout << "Elegiste la TORRE " << endl;
		break;
		case 'R': cout << "Elegiste la REINA" << endl;
		break;
		case 'C': cout << "Elegiste el CABALLO" << endl;
	}
	
	cout << "INTRODUZCA un valor para la FILA " << endl;
	cin >> fila;
	cout << "INTRODUZCA un valor para la COLUMNA" << endl;
	cin >> columna;
	cout << "INTRODUCEME la fila hacia donde la quieres mover " << endl;
	cin >> fila1;
	cout << "INTRODUCEME la columna hacia donde la quieres mover " << endl;
	cin >> columna1;

	if ( (fila >=1) && (fila <=8) && (columna >=1) && (columna<=8) && (fila1>=1) && (fila1<=8) && ( columna1>=1) && (columna<=8)){
		cout << "Movimiento valido " << endl;
			if ( (fila == fila1) || (columna == columna1) ){
			cout << "Movimiento valido CABALLO " << endl; 
			}else {
			cout << "Movimiento no válido " << endl;
			}
	}else {
		cout << "Movimiento no valido " << endl;
	}
}
