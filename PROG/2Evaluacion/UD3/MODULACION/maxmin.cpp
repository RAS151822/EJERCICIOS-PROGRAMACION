#include <iostream>
using namespace std;

/**
@\brief Es una funcion la cual pide al usuario por la entrada estándar dato "intervalo" que es la cantidad de números que vamos a comparar
@\Hasta que se verifique que intervalo >= 0
@\pre intervalo la activacion de la entrada de datos por teclado 
@\post intervalo >= 0
@\salida un dato entero >=0
*/ 

void filtrodatos (int &intervalo){ // Funcion entera para introducir los parametros actuales 
	
	do {	
		cout << endl;
		cout << "Bienvenido, al programa de calcular MAXIMO y MINIMO dentro de un intervalo " << endl;
		cout << endl;
		cout << "Introduce tu intervalo " << endl;
		cin >> intervalo;
	}while ( intervalo <=0);
	
	cout << "Intervalo introducido válido " << endl; 
}

/**
@\brief Dada dos entradas con el número entero "numero" calcula el maximo y mínimo comparandolos
@\pre intervalo >= 0
@\post intervalo >=0
@\salida de dos datos enteros >=0
*/
int calcularmaxmin (int intervalo, int &max, int &min){ // Funcion entera para pder recorrer desde el primer número hasta el 
	int numero = 0;
	//cout << "Debug: " << intervalo << endl;	
	
	cout << "Introduce tus números a comparar " << endl;
		cin >> numero;

	max = numero;
	min = numero;

	for ( int i = 1; i < intervalo; i++){		
		

		if ( numero > max ) {
			max = numero;
			//cout << "El max es: " << max << endl;
		}				
		if ( numero < min ) {
			min = numero;
			//cout << "El min es: " << min << endl;
		}
		cout << "Introduce tus números a comparar " << endl;
		cin >> numero;	
	}

	

}
/**
@\brief Dada dos entradas con el número entero "numero" calcula el maximo y mínimo comparandolos
@\pre intervalo >= 0
@\post intervalo >=0
@\salida de dos datos enteros >=0
*/
void imprimirmaxmin (int intervalo, int max, int min){ // Funcion vacía para mostrar por pantalla imprimirtotalmaxmin

	cout << "Para el intervalo [ " << intervalo << " ] el max es: " << max << " y, el min es: " << min << endl;
}

int main(){ // Funcion principal donde llamamos a las demas funciones
	int intervalo = 0;
	int max = 0;
	int min = 0;



	filtrodatos(intervalo);
	calcularmaxmin (intervalo, max, min);
	imprimirmaxmin (intervalo, max, min);
	
}
