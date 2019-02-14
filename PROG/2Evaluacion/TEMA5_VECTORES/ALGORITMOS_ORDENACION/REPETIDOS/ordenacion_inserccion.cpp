#include <iostream>
using namespace std;

int main (){
	const int DIM = 10;
	int v[DIM] = {22,13,11,30,23};
	int utiles = 5;
	int i = 0;
	int valor = 0;
	int izq = 0;

	for ( izq = 1; izq < utiles; izq++){
		
		valor = v[izq];

		for ( i = izq; i > 0 && valor < v[i-1]; i--){
			
			v[izq] = v [i-1];
		}
		v[i] = valor;
	}
	
}
