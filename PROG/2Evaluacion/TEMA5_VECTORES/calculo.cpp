#include <iostream>
using namespace std;

int main(){
	const int NUM_NOTAS = 5;
	double nota [NUM_NOTAS], media = 0.0;

	cout << "Hola bienvenido a mi primer vector " << endl;
	cout << "\n" << endl;
	cout << "Introduce tus notas y calculare tu media " << endl;

	for (int i = 0; i < NUM_NOTAS; i++){
		cout << "Nota alumno " << i << " : " << endl;
		cin >>	nota [i];	
		//cout << nota [i] << endl;
	}

	//cout << nota [i] << endl; NO SE PUEDE NO COMPILA

	for (int i = 0; i < NUM_NOTAS; i++){
		media += nota [i];
	}	
		media /= NUM_NOTAS;

		cout << "La media de tus " << NUM_NOTAS << " : es " << media << endl; 
}
