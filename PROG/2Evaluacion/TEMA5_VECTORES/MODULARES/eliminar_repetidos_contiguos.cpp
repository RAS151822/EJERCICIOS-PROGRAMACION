#include <iostream>
using namespace std;
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"


void imprime_vector_entrada (const int vector, int vector_utiles){
	cout << "V [E] = { ";
	for (int i = 0; i < vector_utiles - 1; i++){
		cout << vector[i] << ",";
	}
	cout << vector[vector_utiles-1] << endl;
}

/**
 *@brief Esto es un modulo de proceso que me eliminia aquellos números que esten repetidos y CONSECUTIVOS de mi vector
 *@Ejemplo: vector[] = {3,5,8,7,7,12,21,21,6,15,15} vector_utiles = 11
            vector_sin_repetidos_utiles = {3,5,8,7,12,21,6,15} vector_sin_repetidos_utiles = 8
 *@param vector (E) Es la referencia al vector de números enteros. Al ser modulo de escritura y leectura del vector lo paso como referencia sin constante
 *@param vector_utiles (E) Es la variable que almacena los componentes utilizados/ocupados actualmente. Se pasa por referencia porque SI se va a cambiar el número de componentes del vector
 *@param vector_sin_repetidos (S) Es la referencia al vector de números enteros donde voy a almacenar los valores no repetidos contiguos. Al ser modulo de escritura y leectura del vector lo paso como referencia sin constante
 *@param vector_sin_repetidos_utiles (s) Es la variable que almacena los componentes utilizados/ocupados actualmente. Se pasa por referencia porque SI se a a cambiar el número de componentes del vector
 *@pre vector_utiles > 0
 *@pre vector_sin_repetidos_utiles = 0
 *@post vector_sin_repetidos_utiles <= vector_utiles
 *@post vector_sin_repetidos_utiles 
*/
void eliminar_repetidos_contiguos (int vector[], int &vector_utiles, int vector_sin_repetidos[], int &vector_sin_repetidos_utiles){

	for ( int i = 0; i < vector_utiles; i++){
		if ( vector[i] != vector[i+1] ){
			vector_sin_repetidos[vector_sin_repetidos_utiles] = vector[i];
			vector_sin_repetidos_utiles++;
		}
	}
}

/**
 *@brief Módulo proceso que imprime el resultado del vector sin números repetidos contiguos
 *@param vector_sin Es la referencia al vector de números enteros que guarda el resultado de los número contiguos. Se pasa como referencia constante ya que no va a ser modificado
 *@param vector_sin_utiles Es la variable que almacena los componentes utilizados/ocupados actualmente. Se pasa por copia porque no se van a cambiar el número de componentes del vector
 *@pre no hay
 *@post no hay
*/
void imprimir_resultado ( const int vector_sin[], int vector_sin_utiles ){
	
	cout << DEBUG << "Los números repetidos contiguos son: {";
	for (int i = 0; i < vector_sin_utiles; i++){
		cout << vector_sin[i] << " " ;
	}
	cout << "}" << RESTORE << endl;
}

int main(){
	const int DIM_VECTOR = 100;
	int vector[DIM_VECTOR] = {3,5,8,7,7,12,21,21,6,15,15};
	int vector_utiles = 11;
	int vector_sin_repetidos_contiguos[DIM_VECTOR]; // Para almacenar aqui los valores que no esten repetidos contiguos (seguidos)
	int vector_sin_repetidos_utiles = 0; // variable para almacenar los componentes utilizados/ocupados actualmente y para saber la primera posicón libre de memoria
	
	cout << "Bienvenido este es el vector de entrada para eliminar elementos repetidos contiguos. " << endl;

 	//1º Imprimo el vector de enteros al que quiero eliminarle los repetidos contiguos
	imprime_vector_entrada(vector, vector_utiles);
	//2º Aplico el algoritmo para eliminar los elementos contiguos
	eliminar_repetidos_contiguos (vector, vector_utiles, vector_sin_repetidos_contiguos, vector_sin_repetidos_utiles);
	//3
	imprimir_resultado (vector_sin_repetidos_contiguos, vector_sin_repetidos_utiles);
}
