#include <iostream>
using namespace std;

/**
 *@brief modulo que copia los valores de un vector de entrada en otro de salida
 *@param DIM_VE Es la constante que me indica la dimension del vector, esto es el numero maximo de componentes que podre utilizar. Es fijo y no se puede alterar
 *@param vector_entrada Es una referencia al vector de numeros enteros que tendre por entrada. Al ser un modulo de leectura este lo paso por copia como  	constante porque no va ser alterado
 *@param vector_entrada_utiles Es la variable que contiene las componentes utlizadas/ocupadas por el vector se pasa por copia porque porque estas no van a ser alteradas solo sirve para leer el vector y copiarlo en el vector de salida
 *@param vector_salida Es una referencia al vector de numeros enteros que tendre por salida. Al ser un modulo de leectura y escritura este lo paso por referencia.
 *@param vector_salida_utiles Es la variable que contiene los componentes utilizados/ocupados por el vector de salida se pasa por referencia porque van a ser alterados 
 *@pre no hay
 *@post (S) los valores de las utiles del vector de entrada deben de copiarse en el vector de salida
*/
int copiarvectores (const int DIM_VE, const int vector_entrada[], const int vector_entrada_utiles, int vector_salida[], int &vector_salida_utiles){
	
	if ( DIM_VE > vector_entrada_utiles){	
		for ( int i = 0; i < vector_entrada_utiles; i++){
			vector_salida[i] = vector_entrada[i];
			vector_salida_utiles ++;
		}
		
	}
}

/**
 *@brief modulo de proceso que se encarga de imprimir los valores enteros del vector de salida
 *@param vector_salida Es una referencia al vector de numeros enteros que tendre por salida. Al ser modulo de leectura este lo pasao por copia como constante
 *@param vector_salida_utiles Es la variable que contiene los componentes utilizados/ocupados por el vector en este instante se pasa por copia porque estas no van a 	ser alteradas solo van a imprimirse
 *@post Se imprimirá por la pantalla de la consola el contenido del vector.
*/
void imprime_vector_salida (const int vector_salida[], int vector_salida_utiles){

	cout << "Vector salida utiles = { " << endl;
	for ( int i = 0; i < vector_salida_utiles; i++){
		cout << vector_salida[i] << " ";
	}
	cout << "}" << endl;

}

int main(){
	int const DIM_VE = 100;
	int vector_entrada[DIM_VE] = {15,18,22};
	int vector_entrada_utiles = 3;
	int vector_salida[DIM_VE];
	int vector_salida_utiles = 0;

	copiarvectores(DIM_VE, vector_entrada, vector_entrada_utiles,vector_salida, vector_salida_utiles);
	imprime_vector_salida (vector_salida, vector_salida_utiles);
}
