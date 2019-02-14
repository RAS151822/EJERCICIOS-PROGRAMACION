#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

/**
 *@brief Modulo para escribir los numeros enteros en el vector de entrada
 *@param DIM_VECTOR Es la constante que me indica la dimension del vector, esto es el numero maximo de componentes que podre utilizar. Es fijo y no se puede alterar.
 *@param vector_entrada Es la referencia al vector de numeros enteros. Al ser modulo de leectura y escritura del vector lo paso como referencia sin constante
 *@param vector_entrada_utiles Es la variable que contiene los componentes utilizados/usados por el vector. Se pasa por referencia porque si se va a cambiar el número de componentes utilizadas por el vector.
 *@pre no hay
 *@post los numeros introducidos en el vector no deben superar la dimension total del vector de entrada.
*/
int introduce_valores_vector_entrada (const int DIM_VECTOR, int vector_entrada[], int &vector_entrada_utiles){
	
	cout << "\n";
	cout << USER "INTRODUZCA la cantidad de números enteros que desea introducir como máximo hasta [ " << DIM_VECTOR << " ] " << RESTORE << endl;	

	do {
		
		cin >> vector_entrada_utiles;

		if ( vector_entrada_utiles == 0){
			cout << DEBUG << "Lo sentimos, EL ""0"" no es una cantidad  intentelo con otro número " << RESTORE << endl;
		}
		

	}while ( vector_entrada_utiles > DIM_VECTOR || vector_entrada_utiles == 0);

		cout << USER <<  "Muy bien, ahora introduce tus numeros enteros " << RESTORE << endl;
		
	

			for (int i = 0; i < vector_entrada_utiles; i++){
				
				cin >> vector_entrada[i];						
			}

	//cout << "Debug vector entrada utiles = { " << endl;
	//for ( int i=0; i < vector_entrada_utiles; i++){
	//	cout << vector_entrada[i] << " ";
	//}
	//cout << "}" << endl;
}

/**
 *@brief Módulo que copia los números pares que contiene el vector de entrada= "vector_entrada"  en el vector de salida = "vector_pares"
 *@param vector_entrada Es una referencia al vector de entrada donde almaceno los valores introducidos del usuario. Se pasa como constante porque solo voy leer y copiar sus valores que sean pares
 *@param vector_entrada_utiles Es la variable que contiene los componentes usados/utilizados actualmente el vector de entrada. Lo paso por COPIA porque no va a ser modificado
 *@param vector_pares Es una referencia al vector de salida donde se van a guardar los numeros pares seleccionados del vector de entrada.
 *@param vector_pares_utiles Es la variable donde almaceno los componentes usados/utilizados actualmente del vector_pares donde guardaremos la cantidad de numeros pares que hay. Se pasa por referencia ya que SI se van a cambiar el numero de componentes utilizados en el vector.
*/
int leer_pares_y_copiar_vector_salida(const int vector_entrada[], int vector_entrada_utiles, int vector_pares[], int &vector_pares_utiles){

	for (int i = 0; i < vector_entrada_utiles; i++){
		if(vector_entrada[i] % 2 == 0){
			
			vector_pares[i] = vector_entrada[i];
			vector_pares[vector_pares_utiles] = vector_entrada[i];
			vector_pares_utiles++;
		}
	}
	
	//cout << "Debug: componentes vector pares = { " << endl;
	//for (int i = 0; i < vector_pares_utiles; i++){
	//	cout << vector_pares[i] << " " << endl;
	//}
	//cout << "}" << endl;
}

/**
 *@brief Módulo que sirve para imprimir por pantalla el vector de salida imprime_pares que nos mostrara los números pares y la cantidad de pares que existen en vector de entrada
 *@brief vector_pares Es una referencia al vector vector de numeros enteros pares. Al ser un módulo de sólo leectura del vector lo paso como referencia constante
 *@brief vector_pares_utiles Es una variable que me indica el número de componentes utilizadas/ocupadas actualmente en el vector. Se pasa por copia porque no van a ser modificadas sus componentes utilizadas por el vector.
*/
void imprime_pares ( int vector_pares[], int vector_pares_utiles){

	cout << USER  << "Los números pares introducidos son = { ";
		for (int i = 0; i < vector_pares_utiles; i++){

			cout << vector_pares[i] <<" ";
		}
	cout << "}" << endl;
	
	cout << "En definitiva la cantidad de números pares introducidos es de = " << vector_pares_utiles << RESTORE << endl;

}

int main(){
	const int DIM_VECTOR = 100;
	int vector_entrada[DIM_VECTOR];
	int vector_entrada_utiles = 0;
	int vector_pares[DIM_VECTOR];
	int vector_pares_utiles = 0;

	introduce_valores_vector_entrada (DIM_VECTOR, vector_entrada, vector_entrada_utiles);
	leer_pares_y_copiar_vector_salida (vector_entrada, vector_entrada_utiles, vector_pares, vector_pares_utiles);
	imprime_pares (vector_pares, vector_pares_utiles);
}
