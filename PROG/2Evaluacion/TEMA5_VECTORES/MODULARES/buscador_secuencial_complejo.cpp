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
void imprimir_por_pantalla (const int vector[], int utiles ){
	
	cout << "EL VECTOR { " ;
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
 *@brief Módulo booleano de proceso que se encarga de buscar el número introducido por el usuario dentro de nuestro vector
 *@param vector (E) Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia constante ya que es de leectura
 *@param utiles (E) Es la variable que almacena los componentes utilizados/ocupados actualmente y marca la última posicion libre del vector. Se pasa por copia porque no van a ser modificadas solo es de leectura.
 *@pre utiles < DIM
 *@pre utiles == 0
 *@post la posicion del vector
*/
void buscador_secuencial (int DIM, int vector[],int utiles){
	int n = 0;
	bool posicion = false;
	int indice = 0;
	int vector_posiciones[DIM];
	int vector_posiciones_utiles = 0;
	
	cout << '\n';
	cout << "Bienvenido Introduzca el número que desea encontrar en el vector " << endl;
	cin >> n;	
	
	for ( int i = 0; i < utiles; i++){
		if ( n == vector[i]){
			posicion = true;
			indice = i;
			vector_posiciones[vector_posiciones_utiles]= i;
			vector_posiciones_utiles++;
			
		}
	}
	
	if ( posicion == true  ) {
		cout << "Para tú número " << n << " la posicion en el vector es {" << indice << "}" << endl;
	}else {
		cout << "Tú número " << n << " no existe en este intervalo amigo mío!? " << endl; 
	}
	
	imprimir_por_pantalla ( vector_posiciones, vector_posiciones_utiles);

}


int main(){
	const int DIM = 100;
	int vector [DIM] = {22, 15, 13, 13, 18, 21, 25};
	int utiles = 7;

	imprimir_por_pantalla ( vector, utiles );
	buscador_secuencial ( DIM, vector, utiles );
}
