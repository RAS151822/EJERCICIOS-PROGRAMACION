#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
#define verde "\033[1;32m"
using namespace std;

//int maxymin (int vector1_util, int vector2_util){
	int util_mayor = 0;

//}

/**
 *@brief Modúlo de proceso que intercambia el v1 con el v2 con la ayuda de un vector local
 *@param vector1 Es la referencia de mi vector de enteros donde guardo los componentes de V1
 *@param vector1_utiles Es la variable donde almaceno los componentes utilizados/ocupados actualmente de V1. Se pasa por referencia sin constante ya que el número de componentes va a ser modificada
 *@param vector2 Es la referencia de mi vector de enteros donde guardo los componentes del V2
 *@param vector2_utiles Es la variable donde guardo los componentes utilizados/ocupados actualmente del V2 e indicio su primera posicion libre. Se pasa por referencia ya que el número de componentes va a ser modificada
 *@param vector_local Es un vector que declaro dentro de la fucion para poder intercambiar valores entre el V1 Y V2
 *@param vector_local_util Es la variable donde guardo los componentes ocupados actualmente e indico la primera posicion libre. Es una variable local.
*/
void intercambiar_vectores (const int DIM_VECTOR, int vector1[], int &vector1_util, int vector2[], int &vector2_util){
	int vector_local[DIM_VECTOR];
	int vector_local_util = 0;

	for ( int i = 0; i < vector1_util; i++ ){
		vector_local[vector_local_util] = vector1[i];
		vector_local_util++;
	}

	for ( int i = 0; i < vector2_util; i++){
		vector1[vector1_util] = vector2[i];
		
	}

	for ( int i = 0; i < vector_local; i++){
		vector2[vector2_util] = vector_local[i];
	}
	
	
	//COMPROBACION PARA SABER SI SE HA COPIADO EL V1 EN EL VECTOR LOCAL
	//cout << DEBUG << "Debug de: Vector local = { ";
	//for (int i = 0; i < vector_local_util; i++){
	//	cout << vector_local[i] << ",";
	//}
	//cout << "}" << RESTORE << endl;

	//COMPROBACION PARA SABER SI SE HA COPIADO EL V2 EN EL VECTOR 1
	//cout << DEBUG << "Debug de: Vector local = { ";
	//for (int i = 0; i < vector_local_util; i++){
	//	cout << vector_local[i] << ",";
	//}
	//cout << "}" << RESTORE << endl;
}


/**
 *@brief Módulo de proceso que se encarga de mostrarme por pantalla los componentes del vector
 *@param v (E) Es la referencia al vector de enteros. Se pasa por referencia con constante ya que solo va a ser leido
 *@param v_utiles (E) Es la variable que contiene el número de componentes utilizadas/ocupadas por el vector actualmente y la ultima posicion libre. Se pasa por copia ya que NO se van a modificar el número de componentes
 *@pre v_utiles < DIM_V
 *@post no hay ya que solo es un módulo de leectura
*/
void imprime_vector_salida(const int vector[], int vector_utiles){
	cout << USER << "V [S] = { ";
	for (int i = 0; i < vector_utiles; i++){
		cout << vector[i] << ",";
	}
	cout << "}" << RESTORE << endl;
}

/**
 *@brief Módulo de proceso que se encarga de mostrarme por pantalla los componentes del vector
 *@param v (E) Es la referencia al vector de enteros. Se pasa por referencia con constante ya que solo va a ser leido
 *@param v_utiles (E) Es la variable que contiene el número de componentes utilizadas/ocupadas por el vector actualmente y la ultima posicion libre. Se pasa por copia ya que NO se van a modificar el número de componentes
 *@pre v_utiles < DIM_V
 *@post no hay ya que solo es un módulo de leectura
*/
void imprime_vector_entrada(const int vector[], int vector_utiles){
	cout << verde << "V [E] = { ";
	for (int i = 0; i < vector_utiles; i++){
		cout << vector[i] << ",";
	}
	cout << "}" << RESTORE << endl;
}

int main(){
	const int DIM_VECTOR = 30;
	int vector1[DIM_VECTOR] = {15,18,22,4,2};
	int vector1_util = 5;
	int vector2[DIM_VECTOR] = {3,4,1994};
	int vector2_util = 3;

	imprime_vector_entrada(vector1, vector1_util);//Funcion para mostrar por pantalla el primer vector que quiero intercambiar
	imprime_vector_salida(vector2, vector2_util);//Funcion para mostrar por pantalla el segundo vector que quiero intercambiar
	
	intercambiar_vectores ( DIM_VECTOR, vector1, vector1_util, vector2, vector2_util);

	imprime_vector_entrada(vector1, vector1_util);//Funcion para mostrar por pantalla el primer vector que quiero intercambiar
	imprime_vector_salida(vector2, vector2_util);//Funcion para mostrar por pantalla el segundo vector que quiero intercambiar
	
}
