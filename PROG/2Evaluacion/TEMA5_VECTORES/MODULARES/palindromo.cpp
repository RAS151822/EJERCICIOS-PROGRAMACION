#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

/**
 *@brief Módulo de proceso que lee el vector de enteros
 *@param vector (E) Es la referencia al vector de enteros que tenemos por entrada. Se pasa por referencia constante ya que es un módulo de leectura
 *@param utiles (E) Es la variable que almacena los componentes utilizados/ocupados actualmente y marca la última posicion libre del vector. Se pasa por copia porque sus componentes no van a ser modificados
 *@pre utiles < DIM
 *@pre utiles == 0
 *@post no hay
*/
void imprimir_por_pantalla (char vector[], int utiles ){
	
	cout << "Tu palabra sin espacios es: " ;
	for (int i = 0; i < utiles; i++){
		cout << vector[i];
	}
	cout  << endl;
}

void componentes_vector ( const int DIM, char vector[]){
	
	cout << "\n";
	cout << USER << "Bienvenido al programa de las palabras pálindromas!! " << RESTORE << endl;

	
	cout << USER << "Introduce tu palabra pálindroma : " << RESTORE << endl;
	cin.getline (vector,DIM);	
	
	
}

bool palindroma ( const int DIM, char vector[], int util ){
	bool palindroma = true; // resultado que devolvere para luego imprimir por pantalla con dos condicionales si es pálindroma o no
	char vector_par [DIM];
	int vector_par_util = 0;	

	for ( int i = 0; i < util/2; i++ ){ // Divido la util por si son impares. Si la util vale 7. 7 : 2 = 3.5 en la que solo coge el 3. Entonces mi buckle llegara desde la posición 0 hasta la posicion 3. Porque si es palindroma debe de leerse igual por las 3 anteriores que por las 3 posteriores. Entonces sería indiferente que fueran impares
		vector_par[vector_par_util] = vector [i];
		vector_par_util++;
	}	


	for ( int i = 0; i < util/2; i++){// Lo vuelvo a dividir porque solo quiero que se repita el buckle las mismas veces pares
		
			if ( vector_par[i] == vector [util-i-1] ){
				palindroma = true;
			}
			else {
				palindroma = false;
			}
		}



	return palindroma;
	cout << "ESTO VALE el bool de palindroma " << palindroma << endl;	
}

void quitar_espacios ( const int DIM, char vector[], int util, int &resultado ){
	char vector_local[DIM];
	int vector_local_utiles = 0; 
	

	while ( vector[util] != '\0'){ // para saber la cantidad de caracteres que introduce el usuario
		
		if ( vector[util] != ' '){
			vector_local [vector_local_utiles] = vector [util];
			vector_local_utiles++;
		}
		util++;
	}

	imprimir_por_pantalla ( vector_local, vector_local_utiles );
	resultado = palindroma ( DIM, vector_local, vector_local_utiles );
	cout << "ESTO VALE RESULTADO EN quitar espacios" << resultado << endl;	
}

void imprimir_resultado ( int resultado ) {

	cout << "ESTO VALE RESULTADO EN IMPRIMIR" << resultado << endl;	

	if ( resultado == 1 ) {
		cout << USER << "La palabra es palíndroma " << RESTORE << endl;
	}
	if ( resultado == 0 ) {
		cout << DEBUG << "La palabra No es palíndroma " << RESTORE <<  endl;
	}
}

int main () {
	const int DIM = 100;
	char vector1 [DIM];
	int vector1_util = 0;
	int resultado = 0;

	componentes_vector ( DIM, vector1);
	quitar_espacios ( DIM, vector1, vector1_util, resultado );
	imprimir_resultado ( resultado );
	
}
