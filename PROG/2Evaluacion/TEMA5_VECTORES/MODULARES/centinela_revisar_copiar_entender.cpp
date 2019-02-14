#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
#define verde "\033[1;32m"
using namespace std;

void introducir_vector (char v[], const int DIM_V,int &util_v){

	cout << "\n";
	cout << "Bienvenido al programa revisar, copiar, entender vector con cadenas de caracteres a continuacion introduce dos cadenas de caracteres " << endl;
	cout << "\n";
	cout << "Introduce la primera cadena " << endl;
	cin.getline (v, DIM_V);

	while ( v[util_v] != '\0'){
		
		util_v++;	
	}	

}

void mostrar_longitud (int util_v){

	cout << "La longitud de la primera cadena es: {" << util_v << "}" << endl;
	

}

void imprimirvector ( char v[], int util){
	
	cout << "El vector concadenado es: {";
	for (int i = 0; i < util; i++){
		cout << v[i];
	}
	cout << "}" << endl;
}

void eliminar_espacios (char v_aux[], int util_aux){
	
	char v2 [util_aux];
	int util_v2 = 0;		

	
	for (int i = 0; i < util_aux; i++){
		if (v_aux[i] != ' '){
			v2[util_v2]=v_aux[i];
			util_v2++;
		}
	
	}
	cout << "El vector SIN ESPACIOS es: {";
	for (int i = 0; i < util_v2; i++){
		cout << v2[i];
	}	
	cout << "}" << endl;
	
}

void concatenar_cadena ( const int DIM_V, char v[], int util_v){
	char v2 [DIM_V];
	int util_v2 = 0;
	char v_aux [DIM_V];
	int util_aux = 0;
	int i = 0;

	while ( v[i] != '\0'){
		v_aux[util_aux] = v[i];
		i++;
		util_aux++;
	}
	
	//v_aux[util_aux] = " ";
	//util_aux++;

	cout << "Introduce la segunda cadena que desee. " << endl;
	cin.getline(v2, DIM_V);

	while (v2[util_v2] != '\0'){
		if (v2[util_v2]== v2[0]){
			cout << " ";
		}
		v_aux[util_aux] = v2[util_v2];
		util_v2++;
		util_aux++;		
	}

	imprimirvector(v_aux, util_aux);
	eliminar_espacios (v_aux, util_aux);
}
 
int main(){
	const int DIM_V = 50;
	char v[DIM_V];
	int util_v = 0;
	
	introducir_vector (v, DIM_V,util_v);
	mostrar_longitud (util_v);
	//cout << DEBUG << "Debug: La util_v es: " << util_v << RESTORE << endl;
	concatenar_cadena ( DIM_V, v, util_v);
}
