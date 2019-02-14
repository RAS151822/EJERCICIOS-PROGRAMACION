#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int const DIM_NOTAS = 100;
	double notas [DIM_NOTAS];
	int util_notas = 0;
	double media = 0.0;
	double varianza = 0.0;
	double d_tipica = 0.0;
	double sumatoria = 0.0;

	do {
		cout << "Introduce la cantidad de notas a introducir entre 1  y " << DIM_NOTAS << endl;
		cin >> util_notas;
	}while ( util_notas < 1 || util_notas > DIM_NOTAS);

	for ( int i = 0; i < util_notas; i++){
		cout << "Introduce la calificacion para tu nota [ " << i << " ] " << endl;
		cin >> notas[i];
	}
	
	for ( int i = 0; i < util_notas; i++){
		media += notas[i];
	}
	
	media /= util_notas;
	cout << "La media es: " << media << endl;

	//calculo varianza
	for ( int i = 0; i < util_notas; i++){
		sumatoria += pow((notas[i] - media),2);
		//cout << "Valor de sumatoria: " << sumatoria << endl;
		
	
	}
	//cout << "Valor de sumatoria fuera del buckle: " << sumatoria << endl;

	varianza = sumatoria / (util_notas - 1);
	d_tipica = sqrt (varianza);
	
	cout << "La varianza es: " <<  varianza << endl;
	cout << "La desviacion tipica es: " << d_tipica << endl;
}
