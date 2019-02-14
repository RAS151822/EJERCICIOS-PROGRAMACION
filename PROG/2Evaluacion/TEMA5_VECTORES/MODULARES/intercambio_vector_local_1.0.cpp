#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

/**
 *@brief Modulo de proceso de sólo leectura donde imprimimos por pantalla los dos vecotes de entrada
 *@brief v1 Es la referencia a nuestro vector de enteros v1. Se pasa por referencia constante ya que es un módulo de leectura
 *@brief v1_utiles Es la variable que almacena las componentes utiles/ocupadas en el vector además de la última posicion libre del vector. Se pasa por copia porque los componentes no van a ser modificados
 *@brief v2 Es la referencia a nuestro vector de enteros v2. Se pasa por referencia constante ya que es un módulo de leectura
 *@brief v2_utiles Es la variable que almacena las componentes utiles/ocupadas en el vector además de la última posicion libre del vector. Se pasa por copia porque los componentes no van a ser modificados
 *@pre v1_utiles < DIM , v1_utiles = 0
 *@pre v2_utiles < DIM , v2_utiles = 0
 *@post ninguna
*/
void leer_vectores ( const int v1[], int v1_utiles, const int v2[], int v2_utiles ){
	
	cout << USER << "VECTOR 1# = { ";
	for (int i = 0; i < v1_utiles; i++ ) {
		cout << v1[i] << ",";
	}
	cout << "}" << endl;

	cout << "VECTOR 2# = { ";
	for (int i = 0; i < v2_utiles; i++ ) {
		cout << v2[i] << ",";
	}
	cout << "}" << RESTORE << endl;
	
}

/**
 *@brief Módulo de proceso que se encarga de intercambiar los componentes de dos vectores de entrada utilizando un vector local
 *@param DIM (E) Es la constante que me indica la DIMENSIÓN del vector, esto es el número máximo de componentes que podré utilizar. Es fijo y no se puede alterar.
 *@param v1 (E) Es la referencia a nuestro vector de entrada de números enteros. Al ser módulo de leectura y de escritura lo pasamos por referencia
 *@param v1_utiles (E) Es la variable que almacena los componentes utilizados/ocupados por el vector. Se pasa por referencia ya que sus componentes van a ser modificadas
 *@param v2 (E) Es la referencia a nuestro vector de entrada de números enteros. Al ser módulo de leectura y de escritura lo pasamos por referencia
 *@param v2_utiles (E) Es la variable que almacena los componentes utilizados/ocupados por el vector. Se pasa por referencia ya que sus componentes van a ser modificadas
 *@param v_local Es el vector local que declaramos en este módulo para poder hacer el intercambio de componentes entre el v1 y el v2
 *@param v_local_utiles Es la variable que almacena los componentes utilizados/ocupados por el vector.
 *@pre v1_utiles < DIM y v1_utiles = 0
 *@pre v2_utiles < DIM y v2_utiles = 0
 *@pre v_local_utiles < DIM y v_local_utiles = 0
 *@post el v1 contendra los componentes del v2
 *@post el v2 contendra los componentes del v1
*/  
void intercambiar_vectores ( const int DIM, int v1[], int &v1_utiles, int v2[], int &v2_utiles ){
	int v_local[DIM];
	int v_local_utiles = 0;

	for ( int i = 0; i < v2_utiles; i++){
		v_local[i] = v2[i];
		v_local_utiles++;
	}
	
	v2_utiles = 0;

	for ( int i = 0; i < v1_utiles; i++ ){
		v2[i] = v1[i];
		v2_utiles++;
	}
	
	v1_utiles = 0;

	for ( int i = 0; i < v_local_utiles; i++ ){
		v1[i] = v_local[i];
		v1_utiles++;
	}
}

/**
 *@brief Modulo de proceso de sólo leectura donde imprimimos por pantalla los dos vecotes de entrada
 *@brief v1 Es la referencia a nuestro vector de enteros v1. Se pasa por referencia constante ya que es un módulo de leectura
 *@brief v1_utiles Es la variable que almacena las componentes utiles/ocupadas en el vector además de la última posicion libre del vector. Se pasa por copia porque los componentes no van a ser modificados
 *@brief v2 Es la referencia a nuestro vector de enteros v2. Se pasa por referencia constante ya que es un módulo de leectura
 *@brief v2_utiles Es la variable que almacena las componentes utiles/ocupadas en el vector además de la última posicion libre del vector. Se pasa por copia porque los componentes no van a ser modificados
 *@pre v1_utiles < DIM , v1_utiles = 0
 *@pre v2_utiles < DIM , v2_utiles = 0
 *@post ninguna
*/
void imprimir_resultado ( const int v1[], int v1_utiles, const int v2[], int v2_utiles ){
	
	cout << DEBUG << "VECTOR 1# = { ";
	for (int i = 0; i < v1_utiles; i++ ) {
		cout << v1[i] << ",";
	}
	cout << "}" << endl;

	cout << "VECTOR 2# = { ";
	for (int i = 0; i < v2_utiles; i++ ) {
		cout << v2[i] << ",";
	}
	cout << "}" << RESTORE << endl;
	
}


int main(){
	const int DIM = 10;
	int v1[DIM] = {22,13,15,7,3,11,30,33,23};
	int v1_utiles = 9;
	int v2[DIM] = {8,4,2};
	int v2_utiles = 3;

	leer_vectores ( v1, v1_utiles, v2, v2_utiles );
	intercambiar_vectores ( DIM, v1, v1_utiles, v2, v2_utiles );
	imprimir_resultado ( v1, v1_utiles, v2, v2_utiles );	
	
}
