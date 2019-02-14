#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

int main(){
	const int DIM = 15;
	int v[DIM] = {9,6,3,2,1,5,7};
	int utiles = 7;
	int izq = 0;
	int i = 0;
	int valor = 0;

	cout << "\n";
	cout << USER << "El vector DES-ordenado = { ";
	for ( int j = 0; j < utiles; j++){
		cout << v [j];
		if ( j < utiles ){
			cout << ",";
		}
		if ( j == utiles-1 ){
			cout << " }" << RESTORE << endl;
		}
	}

	for ( int izq = 1; izq < utiles; izq++ ){

		valor = v[izq];
		
		for (  i = izq; i > 0 && valor < v[i-1]; i-- ){
			
			v[i] = v[i-1];	
		}		
		v[i] = valor; 
	}
	
	cout << "\n";
	cout << DEBUG << "El vector ordenado = { ";
	for ( int j = 0; j < utiles; j++){
		cout << v [j];
		if ( j < utiles ){
			cout << ",";
		}
		if ( j == utiles-1 ){
			cout << " }" << RESTORE << endl;
		}
	}
}
