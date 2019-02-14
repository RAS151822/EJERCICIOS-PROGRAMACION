#include <iostream>
using namespace std;

int main(){
	const int DIM_NOTAS = 100;
	double notas[DIM_NOTAS];
	int util_notas = 0;
	int media = 0;

	do {
		cout << "Introduzca el numero de notas enre 1 " << " y " << DIM_NOTAS << endl;
		cin >> util_notas; 
	}while ( util_notas < 1 || util_notas > DIM_NOTAS);

	for ( int i = 0; i < util_notas; i++){
		cout << "Introduce la calificacion de tu nota [ " << i << " ] " << endl;
		cin >> notas [i];
	}

	for ( int i = 0; i < util_notas; i++){
		media += notas [i];
		cout << notas [i] << endl;
	}
	
	media /= util_notas;
	//cout << "Tu media es: " << media << endl;
}
