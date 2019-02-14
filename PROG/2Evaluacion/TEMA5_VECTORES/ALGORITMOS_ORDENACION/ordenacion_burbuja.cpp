#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

int main(){
	const int DIM = 20;
	int v[DIM] = {5,3,4,9,7,2,5,3,8,6};
	int utiles = 10;
	int izq = 0;
	int i = 0;
	int valor = 0;

	cout << USER << "VECTOR SIN ORDENAR = {";
	for (int j = 0; j < utiles; j++){
		cout << v[j];
	}
	cout << "}" << RESTORE << endl;	

	for ( izq = 0; izq < utiles; izq++){ // Declaro este buckle para recorrer el vector de izquierda a derecha y asi separar el vector ordenado del desordenado
		for ( i = utiles-1; i > izq; i--){ // Declaro este buckle para recorrer el vector de derecha a izquierda desde la ultima util este se va a cumplir mientras el indice en este caso "i" sea mayor que "izq" porque la pa
			
			if ( v[i] < v[i-1] ){
				
				valor = v [i];
				v[i] = v[i-1];
				v[i-1] = valor;
			}
		}
	}

	cout << DEBUG << "VECTOR  ORDENAdo = {";
	for (int j = 0; j < utiles; j++){
		cout << v[j];
	}
	cout << "}" << RESTORE;	
}
