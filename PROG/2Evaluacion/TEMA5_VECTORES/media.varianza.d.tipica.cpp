#include <iostream>
#include <math.h>
using namespace std;

int main(){
	const int NUM_NOTAS = 5;
	double nota [NUM_NOTAS]; 
	double media = 0.0;
	double varianza = 0.0;
	double  sumatoria = 0.0;
	double d_tipica = 0.0;

	cout << "Hola bienvenido a mi primer vector " << endl;
	cout << "\n" << endl;
	cout << "Introduce tus notas y calculare tu media " << endl;

	//BUCKLE PARA GUARDAR LOS VALORES DE LAS 5 NOTAS
	for (int i = 0; i < NUM_NOTAS; i++){
		cout << "Nota alumno " << i << " : " << endl;
		cin >>	nota [i];	
		//cout << nota [i] << endl;
	}


	//cout << nota [i] << endl; NO SE PUEDE NO COMPILA

	//BUCKLE PARA CALCULAR LA MEDIA DE CADA NOTA
	for (int i = 0; i < NUM_NOTAS; i++){
		media += nota [i];
	}	
		media /= NUM_NOTAS;

		cout << "La media de tus " << NUM_NOTAS << " notas : es " << media << endl; 

	//BUCKLE PARA CALCULAR LA VARIANZA DE UNA NOTA
	for ( int i = 0; i < NUM_NOTAS; i++){
		//cout << "Nota de i: " << i << " la nota es : " << nota [i] << endl; 		
		
		sumatoria += pow((nota [i] - media),2);
		//cout << "Valor de sumatoria: " << sumatoria << endl;		

	}
		//cout << "Valor de sumatoria fuera del buckle: " << sumatoria << endl;
		varianza = (sumatoria / (NUM_NOTAS - 1));
		d_tipica = sqrt (varianza);

		cout << "La varianza es: " << varianza << endl;
		cout << "La desviacion tipica es: " << d_tipica << endl;
}
	
