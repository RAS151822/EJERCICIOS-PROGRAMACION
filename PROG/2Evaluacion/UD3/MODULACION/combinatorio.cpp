#include <iostream>
using namespace std;

/*
@brief Es una funcion  que calcula el factorial para saber el factorial de un
@param (E) int n Variable que almacena el n sobre el que voy a calcular el factorial
@pre n > 0
@post La variable de retorno tendra almacenado el resultado de factorial
@return devuelve la variable int resultado que contiene el resultado de factorial del calculo del número /n
*/ 

int factorial (int n){//Declaro una funcion llamada FACTORIAL para calcular el factorial de los parametros actuales
	int resultado = 1;

	for (int i = 1; i <= n; i++){
		resultado = i * resultado;
	}	
	//cout << "Debug: " << resultado << endl;
	return resultado;
}

int combinatorio (int primervalor, int segundovalor){//Declaro una funcion llamada COMBINATORIO para calcular el combinatorio de los parametros actuales
	//cout << "Debug: " << primervalor << endl;
	//cout << "Debug: " << segundovalor << endl;
	return factorial (primervalor)/ (factorial (segundovalor) * factorial ( primervalor - segundovalor));
}


int imprimefactorial (int n){//Declaro esta funcion para imprimir el resultado de facotorial

	cout << "El resultado del factorial de " << n << " es: " << factorial (n) << endl;
}

int imprimecombinatorio (int x1, int x2){//Declaro esta funcion para imprimir el resultado de combinatorio
	
	cout << "El combinatorio de su valor = " << x1 << " sobre su número = " << x2 << " es: " << combinatorio (x1,x2) << endl;
	cout << "Espero verle pronto :) " << endl;	
	cout << "\n";

}


void pausa (){//lo he hecho como en el ejemplo para comprobar lo que pasaba
	char tecla;
	
	cout << "\n";
	cout << "Pulse una tecla y mostrare su combinatorio :) " << endl;
	cin >> tecla;

}

int main(){
	int valor = 0, valor2 = 0;

	cout << "\n";
	cout << "Bienvenido al programa COMBINATORIO " << endl;
	cout << "\n";
	cout << "Por favor, INTRODUZCA un valor para calcular su combinatorio" << endl;
	cin >> valor;
	cout << "Ahora INTRODUZCA un número sobre el que quiere calcular el combinatorio " << endl;
	cin >> valor2;

	imprimefactorial (valor);
	pausa ();
	imprimecombinatorio (valor,valor2);
	
}
