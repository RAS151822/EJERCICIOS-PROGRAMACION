#include <iostream>
#include <string.h>
using namespace std;



int main(){
	int opcion = 0;
	string nombre; 
	
		cout << endl;
		cout << "BIENVENIDO AL PROGRAMA QUE EJECUTA LA PRÁCTICA DE RAUL ARENAS SENABRE " << endl;
		cout << "Me gustaria saber su nombre para dirijirme a usted, porfavor le importaria escribir su nombre? " << endl;
		cin >> nombre;
		cout << "Hola " << nombre << ", bonito nombre por cierto mi primo se llamaba asi " << endl;
		cout << endl;

	//DECLARACION DEL MENÚ MEDIANTE UN BUCKLE PARA QUE NOS APAREZCA CADA VEZ DESPUES DE ELEGIR UNA OPCION
	
	while (opcion != 4){ 
		
		cout << "Muy bien " << nombre << ", Escoja el problema que desea ejecutar mediante la pulsacion del número correspondiente " << endl;
		cout << "1) PROBLEMA CONTACT " << endl;
		cout << "2) PROBLEMA STAR WARSS I : Yo soy tu..." << endl;
		cout << "3) PROBLEMA STAR WARSS II : Panel " << endl;
		cout << "4) Salir del programa.. " << endl;
		cout << "Escoja una opcion " << endl;
		cin >> opcion;
		
		switch (opcion){
			
			case 1:
				cout << "Esta usted en el programa CONTACT" << endl;
				
			break;
			case 2:
				cout << "Esta usted en el programa STAR WARS I" << endl;
					
			break;
			case 3:
				cout << "Esta usted en el progrma STAR WARS II" << endl;
		}

	}
}
