#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

void introducir_valores ( const int DIM, double v[], int &v_utiles){
	
	cout << "\n";
	cout << USER << "Bienvenido al programa ordenacion por inserccion 1.0 " << endl;
	cout << " Introduce la cantidad de valores que deseas introducir, maximo [ " << DIM << " ]"  << endl;
	cin >> v_utiles;

	cout << "\n";
	cout << "Muy bien ahora introduce los valores que desea ordenar " << RESTORE << endl;
	for ( int i = 0; i < v_utiles; i++){
		cin >> v[i];
	}
}

void ordenacion_inserccion ( double v[], int &v_utiles ){
	double valor = 0.0;
	int izq = 0;
	int i = 0;

	for ( izq = 1; izq < v_utiles; izq++){
		
		valor = v[izq];
		
		for ( i = izq; i > 0 && valor < v[i-1]; i-- ){
			
			v[i] = v[i-1];
		}
		v[i] = valor;
	}	

}

void leer_vector ( const double v[], int v_utiles ){
	
	cout << "\n";
	cout << USER << "El vector DES-ordenado = { ";
	for ( int j = 0; j < v_utiles; j++){
		cout << v [j];
		if ( j < v_utiles ){
			cout << ",";
		}
		if ( j == v_utiles-1 ){
			cout << " }" << RESTORE << endl;
		}
	}
}

void leer_vector_ordenado ( const double v[], int utiles ){
	
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


int main(){
	const int DIM = 50;
	double v[DIM];
	int v_utiles = 0;

	
	introducir_valores ( DIM, v, v_utiles);
	leer_vector ( v, v_utiles);
	ordenacion_inserccion ( v, v_utiles );
	leer_vector_ordenado (v, v_utiles);
	
}
