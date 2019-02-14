#include <iostream>
using namespace std;



int leerintervalo(int &intervalo1, int &intervalo2){ // Pequeña presentacion del programa y donde solicito la entrada de datos para los interalos
	
	cout << endl;
	cout << "Hola! Esto es un programa para calcular la cantidad de primos en un intervalo " << endl;
	cout << endl;
	cout << "Introduce tu primer intervalo " << endl;
	cin >> intervalo1;
	cout << endl;
	cout << "Introduce tu segundo intervalo " << endl;
	cin >> intervalo2;
	cout << endl;
	
}

int esprimo (int i){ //Para que me diga si la iteracion es primo o no
	bool primo = true;
	//cout << "Debug: " << i << endl;
	for (int j = 2; j < i; j++){
		if ( i % j == 0){
			primo = false;	
		}
	}
	//cout << "Debug primo : " << primo << endl;
	return primo;
}

int calcularprimo(int x1, int x2){ // Funcion que me va a calcular la cantidad de primos que hay en dicho intervalo
	int totalprimos = 0; 
	
		//cout << "Debug intervalo1 : " << x1 << endl; PARA SABER LO QUE VALE INTERVALO
		//cout << "Debug intervalo1 : " << x2 << endl;

	for (int i = x1; i <= x2; i++){
		if ( esprimo(i) == 1){
			//cout << "Debug: " << i << " es primo " << endl;	
			totalprimos++;
		}
		
	}
	//cout << "EL número de primos es: " << totalprimos << endl;
	return totalprimos;

}

void imprimirtotalprimos ( int parametro1, int parametro2, int totalprimos){

	cout << "Para los parametros [ " << parametro1 << ", " << parametro2 << " ] " << "el número de primos es: " << totalprimos <<  endl;
}

int main(){ //Declaro funcion int main para llamar a las otras funciones
	int  parametro1 = 0, parametro2 = 0;
	int totalprimos = 0;

	leerintervalo(parametro1, parametro2);
	totalprimos = calcularprimo (parametro1, parametro2);
	imprimirtotalprimos (parametro1, parametro2, totalprimos);
}
