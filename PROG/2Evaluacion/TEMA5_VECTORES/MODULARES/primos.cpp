#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

/**
 *@brief Esto es un modulo que lee y guarda los valores introducidos en vector de entrada.
 *@param DIM_VECTOR Es una constante que mide la dimension del vector de entrada, eto es el número maximo de componentes que voy a utilizar. Es FIJO y no se puede alterar.
 *@param vector_entrada Es una referencia del vector de valores enteros. Al ser un módulo de leectura y escritura, lo paso como REFERENCIA sin constante.
 *@param vector_entrada utiles Es la variabale que guarda los componentes usados/ocupados actualmente por el vector de entrada. Se pasa por REFERENCIA ya que se va a cambiar el número de componentes utilizadas por el vector.
*/
int introduce_valores_vector_entrada ( const int DIM_VECTOR, int vector_entrada[], int &vector_entrada_utiles){
	
	cout << USER <<  "Introduce la cantidad de números que deseas introducir " << RESTORE << endl;

	do{

		cin >> vector_entrada_utiles;

		if ( vector_entrada_utiles == 0){
			cout << DEBUG << "Lo sentimos, EL ""0"" no es una cantidad  intentelo con otro número " << RESTORE << endl;
		}
		

	}while (vector_entrada_utiles > DIM_VECTOR || vector_entrada_utiles < 0);

		cout << USER << "Muy bien, Introduce ahora tus números enteros y te dire si son primos o no " << RESTORE << endl;
	
	for ( int i = 0; i < vector_entrada_utiles; i++){
		cin >> vector_entrada[i];
	}
	
	//cout << DEBUG << "Debug: Vector de entrada = { " ;
	//for (int i = 0; i < vector_entrada_utiles; i++){
	//	cout << vector_entrada[i] << " ";
	//}
	//cout << "}" << RESTORE << endl;
}
/**
 *@brief Módulo de función booleano que devuelve como resultado si un número es primo = true o no = false
 *@param i Es la variable que hace referencia al número guardado en una posicion concreta del vector
 *@pre no hay
 *@post devuelve un booleano. Si es true = es primo, si es false = no es primo
*/
bool calcular_primo ( int i) {
	
	bool primo = true;
	
	//cout << DEBUG << "Debug vector_entrada[i]" << i << RESTORE << endl;	

	for ( int j = 2; j < i; j++){
		if ( i % j == 0){
			primo = false;
			//cout << "ESTO ES LO QUE VALE PRIMO EN EL IF " << primo << endl;
			//cout << "ESTO ES LO QUE VALE i " << i << endl;
		}
	}
	
	//cout << "ESTO ES LO QUE VALE PRIMO despues del buckle " << primo << endl;
	return primo;	
	


	//cout << DEBUG << "Debug: Vector de primos = { " ;
	//for (int i = 0; i < vector_entrada_utiles; i++){
	//	cout << vector_entrada[i] << " ";
	//}
	//cout << "}" << RESTORE << endl;
}

/**
 *@brief Esto es un módulo que analiza y copia los números primos del vector de entrada en el vector de salida
 *@param vector_entrada Es una referencia del vector de números enteros de entrada. Al ser solo de leectura lo paso como referencia constante.
 *@param vector_entrada_utiles Es la variable que me indica el número de componentes utilizadas/ocupadas actualmente. Como no van a ser modificadas las paso como copia
 *@param vector_primos Es una referencia al vector de salida en el cual se van a almacenar los números primos que contiene el vector de entrada. Al ser un modulo de escritura y leectura se pasa como referencia SIN constante
 *@param vector_primos_utiles Es la variable que me indica el número de componentes utilizadas/ocupadas actualmente. Como van a ser modificadas las paso cmo referencia porque si van a ser cambiadas los componentes del vector.
*/
void leer_primos_copiar_vector_salida ( int vector_entrada[], int vector_entrada_utiles, int vector_primos[], int &vector_primos_utiles){
	
	int res_primo = 0;

	for ( int i = 0; i < vector_entrada_utiles; i++){
			
			res_primo = calcular_primo(vector_entrada[i]);			

			if ( res_primo == 1){
				vector_primos[vector_primos_utiles] = vector_entrada[i];
				vector_primos_utiles++;
				
			}
	}
	

	//cout << DEBUG << "Debug: Vector de primos = { " ;
	//for (int i = 0; i < vector_primos_utiles; i++){
	//	cout << vector_primos[i] << " ";
	//}
	//cout << "}" << RESTORE << endl;
}
/**
 *@brief Esto es un modulo de proceso que imprime por pantalla los números primos guardados en un vector
 *@param vector_primos Es una referencia al vector de enteros que guarda los números primos. Al ser solo lectura lo paso como referencia CONSTANTE
 *@param vector_primos_utiles Es la variable que me indica el número de componentes utilizadas/ocupadas actualmente. Como no van a ser modificadas las paso como copia
 *@pre ninguna
 *@post mostrara el resultado al usuario por pantalla
*/
void imprimir_primos (const int vector_primos[], int vector_primos_utiles){
	
	cout << USER << "Los números primos son { " ;
	for (int i = 0; i < vector_primos_utiles; i++){
		cout << vector_primos[i] << " ";	
	}
	cout << "}" << RESTORE <<  endl; 
}

int main(){
	const int DIM_VECTOR = 50;
	int vector_entrada[DIM_VECTOR];
	int vector_entrada_utiles = 0;
	int vector_primos[DIM_VECTOR];
	int vector_primos_utiles = 0;

	introduce_valores_vector_entrada ( DIM_VECTOR, vector_entrada, vector_entrada_utiles);
	leer_primos_copiar_vector_salida ( vector_entrada, vector_entrada_utiles, vector_primos, vector_primos_utiles);
	imprimir_primos (vector_primos, vector_primos_utiles);
}
