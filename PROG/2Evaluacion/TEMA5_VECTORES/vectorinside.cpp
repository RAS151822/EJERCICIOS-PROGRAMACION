#include <iostream>
using namespace std;

int main(){
	int const DIM_VECTOR1 = 100;
	int const DIM_VECTOR2 = 100;
	int vector1 [DIM_VECTOR1];
	int vector2 [DIM_VECTOR2];
	int utilvector1 = 0;
	int utilvector2 = 0;

	//aqui declaramos el utilvector1 para saber la cantidad de espacio del vector vamos a utilizar (dejamos al usuario que la defina) con la condicon de que 		tiene que ser menor que 100 y mayor igual que 0 
	do {
		cout << "Introduce la cantidad de valores que quieres guardar en tu primer vector " << endl;
		cin >> utilvector1;

	}while (utilvector1 < 0 || utilvector1 > DIM_VECTOR1);

	//guardo los valores introducidos por el usuario en un vector
	for ( int i = 0; i < utilvector1; i++){
		cout << "Ahora introduce los valores que desea guardar en su primer vector " << endl;
		cin >> vector1 [i];
		//cout << "Para la casilla [ " << i << " ] " << "el valor del vector 1 es: " <<  vector1 [i] << endl;
		cout << "\n";
	} 

	//cout << "el valor del vector 1 es: " <<  vector1 [] << endl;	

	for ( int i = 0; i < utilvector1; i++){
		vector2[i] = vector1[i];
		cout << "Para la casilla [ " << i << " ] " << "el valor del vector 2 es: " <<  vector2 [i] << endl;
	}

}
