#include <iostream>
using namespace std;

void leerintervalo(int &numero1, int &numero2){
		
	do {
		cout << "\n";
		cout <<"Hola! Esto es un programa para calcular el M.C.D de dos números.. es decir, ¡¡EL MÁXIMO COMÚN DIVISOR!!!" << endl;
		cout << "\n";
		cout << "Introduce dos números mayor que 0 porfavor " << endl;
		cout << "\n";
		cout << "Introduce el primer número " << endl;
		cin >> numero1;
		cout << "Introduce el segundo número " << endl;
		cin >> numero2;
	}while ( numero1 <=0 && numero2 <= 0);
	cout << "\n";
	cout << "Dato introducido correcto " << endl;
}

int calcularMCD (int primervalor, int segundovalor){
	int resultado = 0;

	resultado = primervalor % segundovalor;
	
	while ( resultado != 0){
	 primervalor = segundovalor;
	 segundovalor = resultado;
	 resultado = primervalor % segundovalor;
	 }
	return segundovalor;	
}

void imprimirresultado ( int resultado){
	cout << "\n";
	cout << "El M.C.D es: " << resultado << endl;
}

int main(){
	int primernumero = 0, segundonumero = 0;
	int resultado = 0;

	leerintervalo(primernumero, segundonumero);
	resultado = calcularMCD(primernumero, segundonumero);
	imprimirresultado (resultado);
}
