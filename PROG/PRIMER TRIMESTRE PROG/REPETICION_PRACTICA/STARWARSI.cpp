#include <iostream>
using namespace std;

int main () {
	string nombre, parentesco; // Declaro dos variables para que el usuario introduzca los datos
	string Luke, padre; // Declaro dos variables para que cuando pulse esto el usuario entre en el if
	int dato = 0; // Declaro una variable de tipo entero para que el usuario me diga el número de veces que quiere introducir nombre y parentesco
	int acumulador1 = 1; //Declaro un acumulador para parar el buckle cuando este sume el número de veces que sea igual que el dato


	//PEQUEÑA PRESENTACION DONDE PIDO AL USUARIO QUE INTRODUZCA EL NÚMERO DE ENTRADAS	
		cout << endl;
		cout << "BIENVENIDO al programa STARWARSI " << endl;

	//DECLARO UN BUCKLE DO WHILE PARA REALIZAR UN FILTRO DE ENTRADA DE Nºs POSITIVIOS

	do {
		cout << endl;
		cout << "INTRODUCE EL NÚMERO DE PERSONAJES QUE QUIERES INTRODUCIR " << endl;
		cin >> dato;// El número de veces que voy a repetir mi buckle
		if ( dato <= 0){
			cout << "NÚMERO NO VALIDO, porfavor introduzca un número positivo " << endl;
		}		

	}while ( dato <= 0 );

		cout << "Introduce el nombre y seguido el parentesco  de tu personaje favortio de STARWARS " << endl;
		
		
	while ( dato <= acumulador1 ){
	
			cin >> nombre;
			cin >> parentesco;
	
			acumulador1 ++;		
	

		if ( nombre == "Luke" && parentesco == "padre") {	
				cout << "TOP SECRET " << endl;
			}else {
				cout << nombre << " yo soy tu " << parentesco << endl;
			} 

	}
}
