#include <iostream>
using namespace std;

int main() {
	int const DIM_NOTAS = 100;
	int notas [DIM_NOTAS];
	int media = 0;
	int i = 0;

	/*do {
		cout << "Introduce la cantidad de notas a Introducir " << endl;
		cin >> centinela;
	}while ( centinela < 1 || centinela > CAN_ALUMNOS);*/

	for ( int i = 1; notas[i-1] != -1 && i < DIM_NOTAS; i++ ){
		cout << "Introduce tus nota de: [ " << i << " ] " << " hasta que pulses -1 " << endl;
		cin >> notas[i];
		//cout << notas [i] << endl;
	}
	
	notas[i] = -1; 

	//cout << " notas[i]: " << notas[i] << endl;

	for ( int i = 0; notas[i] != -1; i++){
		media += notas[i];
	}

	if ( i == 0){
		cout << "No se introdujo ninguna nota " << endl;
	}else {
		media /= i;
		cout << "La media es: " << media << endl;
	}
}
