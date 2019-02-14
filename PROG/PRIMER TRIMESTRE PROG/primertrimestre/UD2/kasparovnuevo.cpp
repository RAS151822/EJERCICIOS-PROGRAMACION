#include <iostream>
#include <math.h>

using namespace std;


void MovimientoTorre(int fila1,int columna1,int fila2,int columna2){
	
	if ( fila1 == fila2 || columna1 == columna2){
		cout << "Es un movimiento valido " << endl;
	}else {
		cout << "NO es valido " << endl;
	}
	
}

void MovimientoCaballo(int fila1,int columna1,int fila2,int columna2){

	if ( fila1 - 2 == fila2 && columna1 - 1 == columna2 || fila1 - 2 == fila2 && columna1 + 1 == columna2 || fila1 - 1 == fila2 && columna1 - 3 == columna2 || 
	fila1 - 1 == fila2 && columna1 + 2 == columna2 || fila1 +1 == fila2 && columna1 + 2 == columna2 || fila1 + 1 == fila2 && columna1 - 2 == columna2 || fila1 + 2 == fila2 && columna1 - 1 == columna2 || fila1 + 2 == fila2 && columna1 + 1 == columna2) {

		cout << "Es un movimiento valido " << endl;
	}else {
		cout << "NO es valido " << endl;
	}

}
void MovimientoReina(int fila1,int columna1,int fila2,int columna2){
	
	int diagonal_fila = fila1 - fila2;
	int diagonal_columna = columna1 - columna2;  	
	
	if ( fila1 == fila2 || columna1 == columna2 || diagonal_fila == diagonal_columna ){
		cout << "Es un movimiento valido " << endl;
	}else {
		cout << "NO es valido " << endl;
	}
}
void Movimientos(int aux){
	
	int fila1=0, columna1=0, fila2=0, columna2=0;

	do{
		cout << "INTRODUZCA la FILA donde se ENCUENTRA " << endl;
		cin >> fila1;
		cout << "INTRODUZCA la COLUMNA donde se ENCUENTRA " << endl;
		cin >> columna1;
	}while ((fila1 < 0) || (fila1 > 8) || (columna1 < 0) || (columna1 > 8));


	do{
		cout << "INTRODUZCA la FILA donde desea MOVER su ficha " << endl;
		cin >> fila2;
		cout << "INTRODUZCA la COLUMNA donde desea MOVER su ficha " << endl;
		cin >> columna2;
	}while ((fila2 < 0) || (fila2 > 8) || (columna2 < 0) || (columna2 > 8));
	
	if (aux == 1){

		MovimientoTorre(fila1,columna1,fila2,columna2);

	} 
	if (aux == 2){

		MovimientoReina(fila1,columna1,fila2,columna2);

	} 
	if (aux == 3){

		MovimientoCaballo(fila1,columna1,fila2,columna2);

	} 	
}
void Bienvenida(){

	cout << "BIENVENIDO AL AJEDREZ DE RASPUTIN 1.0 " << endl;
	cout << endl;

}
void Menu (){
	
	cout << "ELIGE LA FICHA QUE DESEAS MOVER" << endl;
	cout << endl;
	cout << "LA TORRE ES LA T" << endl;	
	cout << "LA REINA ES LA R" << endl;
	cout << "EL CABALLO ES LA C" << endl;
	cout << "PULSE  E PARA SALIR " << endl;

}
void Opciones (){
	
	Menu();
	
	int aux = 0;	
	char figura;	
	cin >> figura;

	switch (figura) {
		case 'T':
		case 't':
				cout << "HA ELEGIDO USTED LA TORRE " << endl;
				aux = 1;
				Movimientos(aux);
				break;
		case 'R':
		case 'r':
				cout << "HA ELEGIDO USTED LA REINA" << endl;
				aux = 2;
				Movimientos(aux);
				break;

		case 'C':
		case 'c': 	
				cout << "HA ELEGIDO USTED EL CABALLO" << endl;
				aux = 3;
				Movimientos(aux);
				break;
		case 'E':
		case 'e': 
				cout << " HA DECIDIDO USTED DEJAR DE JUGAR, MUCHAS GRACIAS." << endl;
				break;
		}
}	
int main(){

	Bienvenida();
	Opciones();
				
}

