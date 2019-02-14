#include <iostream>
using namespace std;

/**
 *@brief esto es un modulo para guardar los caracteres introducidos por el usuario
 *@param vector Es una referencia al vector de char. Se pasa por referencia ya que es un modulo de lectura y escritura
 *@param utiles Es una variable que contiene los componentes utilizados/ocupados actualmente en el vector. Se pasa por referencia porque si se va a cambiar el número de componentes del vector
 */
void leer_cadena (char vector[],const int DIM_VECTOR, int &utiles){
	
	int i = 0;
	cout << "Introduce una frase y podras leerla del revés!! " << endl;
	cin.getline(vector,DIM_VECTOR);

	while ( vector [i]!= '\0'){ // Para saber la longitud que va a tener mi palabra
		
		utiles ++;
		i++;		
	}

}

void imprimir_vector_invertido (char vector[], int utiles){
		
	cout << "Cadena invertida = ";
	for ( int i = utiles-1; i >= 0; i--){
		cout << vector[i] ;
	}
	cout << endl;
}

int main(){
	const int DIM_VECTOR = 100;
	char vector[DIM_VECTOR];
	int utiles = 0;

	leer_cadena( vector,DIM_VECTOR, utiles);
	imprimir_vector_invertido (vector, utiles);
	
}
