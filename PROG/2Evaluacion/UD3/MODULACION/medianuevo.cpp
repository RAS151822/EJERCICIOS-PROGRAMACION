#include <iostream>
using namespace std;

/**
@\brief  Funcion Dada dos entradas con el número entero "numero" calcula el maximo y mínimo comparandolos
@\pre intervalo >= 0
@\post intervalo >=0
@\salida de dos datos enteros >=0
*/
double leerintervalo(double &intervalo){
	
	cout << "Introduce el número de veces que deseas introducir números " << endl;
	cin >> intervalo;

}

double calcularmedia (double x){
	double numeromedia = 0;
	int i = 0;
	double sumatoria = 0;	

	//cout << "Debug: " << x << endl;
	

	cout << "Introduce números para calcular la media " << endl;
	while ( x > i){
		cin >> numeromedia;
		sumatoria = numeromedia + sumatoria;
		i++;
	}
	//cout << "Debug: " << sumatoria << endl;
	return sumatoria;
}

void imprimirmedia ( double numero, double sumatoria){
	cout << "Para la cantidad de notas de: " << numero << " el valor de la  suma de ellas es: " << sumatoria << " LA MEDIA ES: " << sumatoria / numero << endl;
}

int main(){
	double numero = 0;
	int sumatoria = 0;

	leerintervalo(numero);
	sumatoria = calcularmedia(numero);
	imprimirmedia (numero, sumatoria);
}
