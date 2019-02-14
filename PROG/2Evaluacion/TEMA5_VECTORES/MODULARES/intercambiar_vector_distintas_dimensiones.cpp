#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
#define SOL "\033[1;32m"
using namespace std;

/**
 *@brief Módulo de proceso que lee el vector de enteros
 *@param v1 (E) Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia constante ya que es un módulo de leectura
 *@param v1_util (E) Es la variable que almacena los componentes utilizados/ocupados actualmente y marca la última posicion libre del vector. Se pasa por copia porque sus componentes no van a ser modificados
 *@param v2 (E) Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia constante ya que es un módulo de leectura
 *@param v2_util (E) Es la variable que almacena los componentes utilizados/ocupados actualmente y marca la última posicion libre del vector. Se pasa por copia porque sus componentes no van a ser modificados
 *@pre utiles < DIM
 *@pre utiles == 0
 *@post no hay
*/
void mostrar_pantalla (int v1[], int v1_util, int v2[], int v2_util){
	
	cout << USER << "El vector 1 =  {" ;
	for (int i = 0; i < v1_util; i++){
		cout << v1[i];
			if ( i < v1_util){
				cout << ",";
			}
			if ( i == v1_util - 1){
				cout << "}" << RESTORE << endl;
			}
	}

	cout << DEBUG <<  "El vector 2 =  {" ;
	for (int i = 0; i < v2_util; i++){
		cout << v2[i];
			if ( i < v2_util){
				cout << ",";
			}
			if ( i == v2_util - 1){
				cout << "}" << RESTORE << endl;
			}
	}
	
}
 /**
 *@brief Módulo de proceso encargado de comparar entre las dos dimensiones y seleccionar la mayor
 *@param DIM1 Es la variable constante que almacena la cantidad de componentes utilizables que puedo usar en mi vector 1. Se pasa por constanre porque no va a ser modificada
 *@param DIM2 Es la variable constante que almacena la cantidad de componentes utilizables que puedo usar en mi vector 1. Se pasa por constanre porque no va a ser modificada
 *@pre DIM1 > 0
 *@pre DIM2 > 0
 *@post DIM_new > 0
*/
int comparar_dimensiones (const int DIM1,const int DIM2){
	 
	int DIM_new = 0;
	
	

	if ( DIM1 > DIM2 ){
		DIM_new = DIM1;
	}
	if ( DIM2 > DIM1 ){
		DIM_new = DIM2;
	}
	
	//cout << SOL << "La dimension mayor es: " << DIM_new << RESTORE << endl;
	return DIM_new;
}
 /**
 *@brief Modulo función que devuelve cual es la útil mayor de las dos
 *@param util1 Es la variable que almacena las componentes utilizadas/ocuapadas por nuestro vector. Se pasa por copia sin referencia Porque NO van a ser modificados sus componentes.
 *@param util2 Es la variable que almacena las componentes utilizadas/ocuapadas por nuestro vector. Se pasa por copia sin referencia Porque NO van a ser modificados sus componentes.
 *@pre util1 < DIM1 
 *@pre util1  >= 0
 *pre util2 >= 0
 *@pre util2 < DIM2
 *@post util_new >= 0 y tiene que ser la mayor entre util1 e util2
*/
int comparar_utiles ( int util1, int util2){
	int util_new = 0;

	if (util1 > util2){
		
		util_new = util1;
	}

	if (util2 > util1){
		
		util_new = util2;
	}
	
	return util_new; 
}

/**
 *@brief Módulo de proceso que intercambia los componentes útiles entre dos vectores
 *@param DIM_new Es la variable constante que almacena los componentes totales que puedo utilizar en mi vector. Se pasa por copia porque al ser constante no puede ser modificada
 *@param util_new Es la variable que almacena los componentes utilizados/ocupados máximos por los vectores. Se pasa por copia porque no van a ser modificados sus componentes nos sirve de leectura
 *@param v1 Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia porque sus componentes van a ser modificados
 *@param v2 Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia porque sus componentes van a ser modificados
 *@param vector_local Es el vector de nuestro módulo local utilizado para poder realizar el intercambio de componentes entre los vectores de entrada
 *@post Devolvemos por referencia los v1 y v2 con sus componentes intercambiadas
*/
void intercambiar_vector ( const int DIM_new, int util_new, int v1[], int v1_util, int v2[], int v2_util ){
	int vector_local[DIM_new];
	int util_local = 0;
	

	if ( util_new == v1_util ){
		util_local = v1_util;
		
	}
}

int main(){
	const int DIM1 = 15;
	const int DIM2 = 10;
	int v1[DIM1] = {5,3,11,22,18,15};
	int v1_util = 6;
	int v2[DIM2] = {25,23,80,2};
	int v2_util = 4;
	int DIM_new = 0;
	int util_new = 0;		

	mostrar_pantalla( v1, v1_util, v2, v2_util );
	DIM_new = comparar_dimensiones ( DIM1, DIM2);
	//cout << SOL << "La dimension mayor es: " << DIM_new << RESTORE << endl;
	util_new = comparar_utiles ( v1_util, v2_util );
	//cout << SOL << "La util mayor es: " << util_new << RESTORE << endl;
	intercambiar_vector ( DIM_new, util_new, v1, v1_util, v2, v2_util );
	mostrar_pantalla( v1, v1_util, v2, v2_util );
}
