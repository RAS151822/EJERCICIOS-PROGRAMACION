#include <iostream>
using namespace std;

void imprime_doble (int v[], int util){
	for ( int i = 0; i < util; i++){
		cout << "el VALR DE VECTOR ES: " << v [i] << endl;
		cout << "EL valor de util es: " << util << endl;	
	
		v[i] *= 2;
	
	cout << "El doble del vector " << v[i] << endl;
	}
}

int main(){
	int const DIM_VECTOR = 5 ;
	int vector [DIM_VECTOR] = {15,18,22};
	int util_vector = 3;

	imprime_doble ( vector, util_vector);
	//imprime_vector ( vector, util_vector);
}
