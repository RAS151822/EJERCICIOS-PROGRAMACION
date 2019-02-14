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

int maximominimo(){ // Funcion principal donde llamamos a las demas funciones
	int intervalo = 0;
	int max = 0;
	int min = 0;



	filtrodatos(intervalo);
	calcularmaxmin (intervalo, max, min);
	imprimirmaxmin (intervalo, max, min);
	
}

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

int primosintervalo(){ //Declaro funcion int main para llamar a las otras funciones
	int  parametro1 = 0, parametro2 = 0;
	int totalprimos = 0;

	leerintervalo(parametro1, parametro2);
	totalprimos = calcularprimo (parametro1, parametro2);
	imprimirtotalprimos (parametro1, parametro2, totalprimos);
}

void menu (){
	int opcion = 0;

	while (opcion != 3){ 
		
		cout << "\n";
		cout << "Escoja el problema que desea ejecutar mediante la pulsacion del número correspondiente " << endl;
		cout << "1) Primos intervalo " << endl;
		cout << "2) Maximo y minimo intervalo" << endl;
		cout << "3) Salir del programa.. " << endl;
		cout << "Escoja una opcion " << endl;
		cin >> opcion;
		
		switch (opcion){
			
			case 1:
				cout << "Esta usted en el programa PRIMOS INTERVALO" << endl;
					primosintervalo();
				
			break;
			case 2:
				cout << "Esta usted en el programa MAXIMO Y MINIMO" << endl;
					 maximominimo();
		}

	}	
	

}

int main (){ //Funcion principal donde llamamos a Menu que es la encargada de llamar a las demas funciones

	menu();

}
