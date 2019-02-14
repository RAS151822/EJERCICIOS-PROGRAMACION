#include <iostream>
using namespace std;

/**
 *@brief Esto es un modulo variable que me eliminia aquellos números que esten repetidos y CONSECUTIVOS de mi vector
 *@param vector Es la referencia al vector de números enteros. Al ser modulo de escritura y leectura del vector lo paso como referencia sin constante
 *@param vector_utiles Es la variable que almacena los componentes utilizados/ocupados actualmente. Se pasa por referencia porque SI se va a cambiar el número de componentes del vector
 *@param vector_sin_repetidos Es la referencia al vector de números enteros donde voy a almacenar los valores no repetidos contiguos. Al ser modulo de escritura y leectura del vector lo paso como referencia sin constante
 *@param vector_sin_repetidos_utiles Es la variable que almacena los componentes utilizados/ocupados actualmente. Se pasa por referencia porque SI se a a cambiar el número de componentes del vector
*/
void eliminar_repetidos_contiguos (int vector[], int &vector_utiles, int vector_sin_repetidos, int &vector_sin_repetidos_utiles){

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
	
	cout << "Los números repetidos contiguos son: {";
	for (int i = 0; i < vector_sin_utiles; i++){
		cout << vector_sin[i] << " " ;
	}
	cout << "}" << endl;
}

int main(){
	const int DIM_VECTOR = 100;
	int vector[DIM_VECTOR] = [3,5,8,7,7,12,21,21,6,15,15];
	int vector_utiles = 11;
	int vector_sin_repetidos_contiguos[DIM_VECTOR]; // Para almacenar aqui los valores que no esten repetidos contiguos (seguidos)
	int vector_sin_repetidos_utiles = 0; // variable para almacenar los componentes utilizados/ocupados actualmente y para saber la primera posicón libre de memoria

	eliminar_repetidos_contiguos (vector, vector_utiles, vector_sin_repetidos_contiguos, vector_sin_repetidos_utiles);
	imprimir_resultado (vector_sin_repetidos_contiguos, vector_sin_repetidos_utiles);
}
