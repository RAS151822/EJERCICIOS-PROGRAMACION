#include <iostream>
using namespace std;

/**
 *@brief Módulo de proceso que lee el vector de enteros
 *@param vector (E) Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia constante ya que es un módulo de leectura
 *@param utiles (E) Es la variable que almacena los componentes utilizados/ocupados actualmente y marca la última posicion libre del vector. Se pasa por copia porque sus componentes no van a ser modificados
 *@pre utiles < DIM
 *@pre utiles == 0
 *@post no hay
*/
void imprimir_por_pantalla(const int vector[], int utiles){
	

	cout << "EL VECTOR 1 { " ;
	for (int i = 0; i < utiles; i++){
		cout << vector[i];
		if ( i < utiles ){
			cout << ",";
		}
		if ( i == utiles-1){
			cout << "}" << endl;
		}		

	}
}

/**
 *@brief Módulo de proceso que lee el vector de enteros
 *@param vector (E) Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia constante ya que es un módulo de leectura
 *@param utiles (E) Es la variable que almacena los componentes utilizados/ocupados actualmente y marca la última posicion libre del vector. Se pasa por copia porque sus componentes no van a ser modificados
 *@pre utiles < DIM
 *@pre utiles == 0
 *@post no hay
*/
void imprimir_por_pantalla2(const int vector[], int utiles){
	
	cout << "El VECTOR 2 { " ;
	for (int i = 0; i < utiles; i++){
		cout << vector[i];
		if ( i < utiles ){
			cout << ",";
		}
		if ( i == utiles-1){
			cout << "}" << endl;
		}		

	}
}

/**
 *@brief Módulo de proceso que lee el vector de enteros
 *@param vector (E) Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia constante ya que es un módulo de leectura
 *@param utiles (E) Es la variable que almacena los componentes utilizados/ocupados actualmente y marca la última posicion libre del vector. Se pasa por copia porque sus componentes no van a ser modificados
 *@pre utiles < DIM
 *@pre utiles == 0
 *@post no hay
*/
void imprimir_por_pantalla3(const int vector[], int utiles){
	
	cout << "El VECTOR AUX { " ;
	for (int i = 0; i < utiles; i++){
		cout << vector[i];
		if ( i < utiles ){
			cout << ",";
		}
		if ( i == utiles-1){
			cout << "}" << endl;
		}		

	}
}

/**
 *@brief Modulo de proceso que se encarga de ordenar los componentes de un vector y guardarlo en otro local
 *@brief DIM (E) Es la variable que almacena los componentes totales que pueden tener mis vectores
 *@param vector (E) Es la referencia a nuestro vector de entrada de números enteros. Se pasa por copia con referencia ya que sus valores no van a ser modificados
 *@param utiles (E) Es la variable que almacena los componentes utilizados/ocupados actualmente por el vector. Se pasa por copia porque NO van a ser modificados sus componentes.
**/
int ordenar_vector (const int DIM, int vector[], int utiles){
	int aux = 0;
	

	for(int i = 0; i < utiles ; i++){
		
		for (int j = 1; j < utiles; j++){

			if ( vector[i] <= vector[j] ){
				
				aux = vector [j];
				vector[j] = vector[i];
				vector [i] = aux;
				
			}
		}
	}

		

	cout << "El VECTOR AUX { " ;
	for (int i = 0; i < utiles; i++){
		cout << vector[i];
		if ( i < utiles ){
			cout << ",";
		}
		if ( i == utiles-1){
			cout << "}" << endl;
		}		

	}
}

 /**
 *@brief Modulo de proceso donde concadeno dos vectores de entrada. Es decir, donde uno los componentes utiles de un vector a otro
	ej : v1 { 4, 5, 6} , v2 { 7,8,9} = vector_auxiliar { 4, 5, 6, 7, 8, 9}
 *@param DIM (E) Es la variable que almacena los componentes totales que pueden tener mis vectores
 *@param vector (E) Es la referencia a nuestro vector de entrada de números enteros. Se pasa por copia con referencia ya que sus valores no van a ser modificados
 *@param vector_util (E) Es la variable que almacena los componentes utilizados/ocupados actualmente por el vector. Se pasa por copia porque NO van a ser modificados sus componentes.
 *@param vector2 (E) Es la referencia a nuestro segundo vector de entrada de números enteros. Se pasa por copia por referencia ya que sus valores no van a ser modificados
 *@param vector2_util (E) Es la variable que almacena los componentes utilizados/ocupados actualmente por el vector. Se pasa por copia porque NO van a ser modificados sus componentes.
 *@pram vector_aux (S) Es la referencia a nuestro vector de salida. El cual contiene el vector1 y el vector2 unidos. Es decir, concadenados.Y al ser local no se pasa por copia ni por referencia 
 *@param vector_aux_util (S) Es la variable que almacena los componentes utilizados/ocupados actualmente por nuestro vector de salida. Y al ser local no se pasa por copia ni por referencia 
 *@pre vector_util <= DIM
 *@pre vector2_util <= DIM
 *@pre vecotr_util = 0
 *@pre vector2_util = 0
 *@pre vector_aux <= DIM
 *@pre vector_aux_util = 0
*/
int concadenar_vector (const int DIM, int vector[], int vector_util, int vector2[], int vector2_util){
	int vector_aux [DIM];
	int vector_aux_util = 0;

	
	for ( int i = 0; i < vector_util; i++ ){

		vector_aux[ vector_aux_util ] = vector [ i ];
		vector_aux_util++;
	}

	for ( int i = 0; i < vector2_util; i++ ) {
		
		vector_aux [ vector_aux_util ] = vector2 [i];
		vector_aux_util++;
	}

	imprimir_por_pantalla3( vector_aux, vector_aux_util );
	ordenar_vector( DIM, vector_aux, vector_aux_util );
}



int main () {
	const int DIM = 20;
	int vector [DIM] = {4,5,2,10};
	int vector_util = 4;
	int vector2 [DIM] = {2,9,8,7,6,5};
	int vector2_util = 6;
	

	imprimir_por_pantalla( vector, vector_util );
	imprimir_por_pantalla2 ( vector2, vector2_util );
	concadenar_vector ( DIM, vector, vector_util, vector2, vector2_util);
	
}
