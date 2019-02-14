#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

/**
 *@brief Módulo de proceso que copia los números NO contiguos en un vector de salida
 *@param v (E) Es la referencia al vector de enteros donde se almacenan el valor de las componentes al que se le quiere eliminar los repetidos contiguos
 *@param v_utiles (E) Es la variable que contiene el número de componentes utilizadas actualmente por el vector y su ultima posicion libre. Se pasa como copia porque NO se van a modificar el valor de sus componentes
 *@param v_contiguos (S) Es la referencia al vector de enteros donde voy a almacenar el vector sin contiguos. Se pasa por referencia sin constante.
 *@param v_contiguos_utiles (s) Es la variable que contiene el número de componentes utilizadas actualmente por el vector y su ultima posicon libre. Se pasa por referencia porque SI se van a modificar sus componentes
 *@pre v_utiles > 0
 *@pre v_utiles < DIM_V
 *@pre v_contiguos_utiles = 0
 *@post v_contiguos_utiles <= v_utiles
 *@post se copien los valores NO contiguos en el vector de salida
*/
void eliminar_contiguos (const int v[], int v_utiles,int v_contiguos[], int &v_contiguos_utiles){
	
	for (int i = 0; i < v_utiles; i++){
		if ( v[i] != v[i-1]){
			v_contiguos[v_contiguos_utiles] = v[i];
			v_contiguos_utiles++;
		}
	}
}

/**
 *@brief Módulo de proceso que se encarga de mostrarme por pantalla los componentes del vector
 *@param v (E) Es la referencia al vector de enteros. Se pasa por referencia con constante ya que solo va a ser leido
 *@param v_utiles (E) Es la variable que contiene el número de componentes utilizadas/ocupadas por el vector actualmente y la ultima posicion libre. Se pasa por copia ya que NO se van a modificar el número de componentes
 *@pre v_utiles < DIM_V
 *@post no hay ya que solo es un módulo de leectura
*/
void imprime_vector(const int v[], int v_utiles){
	
	cout << USER << "Vector de entrada, v = {";
	for(int i = 0; i < v_utiles; i++){
		
		cout << v[i] << " "; 
		if ( i < v_utiles -1){
			cout << ",";
		}else {
			cout << "}\n" << RESTORE;	
		}
	}
	
}

int main(){
	const int DIM_V = 15;
	int v[DIM_V] = {15,15,18,22,3,3,1994,4,2,2};
	int v_utiles = 10;
	int v_contiguos[DIM_V] = {0};
	int v_contiguos_utiles = 0;

	imprime_vector(v, v_utiles); //funcion para mostrar por pantalla el vector de entrada
	eliminar_contiguos (v, v_utiles, v_contiguos, v_contiguos_utiles); // funcion para seleccionar los números que no sean contiguos
	imprime_vector(v_contiguos, v_contiguos_utiles); // funcion pra mostrar por pantalla el vector de salida ( v_contiguos)
	
}
