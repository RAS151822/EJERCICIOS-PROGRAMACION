#include <iostream>
#include <sstream>
using namespace std;

int filtroentero (int &a){ // FUNCION PARA ENTEROS QUE SIRVE PARA FILTRAR CARACTERES 

	while (cin.fail()){
		cout << "CARACTER NO VALIDO, Lo siento vuelva a intentarlo  introduce un numero"<< endl;
		cin.clear();
		cin.ignore(256,'\n');
		cin>>a;
	
	}
	return a;
}
int main () {
	string nombre, parentesco; // Declaro dos variables para que el usuario introduzca los datos
	string Luke, padre; // Declaro dos variables para que cuando pulse esto el usuario entre en el if
	string nombrecompleto;// Para guardar nombre y parentesco en una misma cadena y luego mostrarlo por pantalla
	int dato = 0; // Declaro una variable de tipo entero para que el usuario me diga el número de veces que quiere introducir nombre y parentesco
	int acumulador1 = 1, acumulador2 = 1; //Declaro un acumulador para parar el buckle cuando este sume el número de veces que sea igual que el dato


	//PEQUEÑA PRESENTACION DONDE PIDO AL USUARIO QUE INTRODUZCA EL NÚMERO DE ENTRADAS	
		cout << endl;
		cout << "BIENVENIDO al programa STARWARSI " << endl;

	//DECLARO UN BUCKLE DO WHILE PARA REALIZAR UN FILTRO DE ENTRADA DE Nºs POSITIVIOS

	do {
		cout << endl;
		cout << "INTRODUCE EL NÚMERO DE PERSONAJES QUE QUIERES INTRODUCIR " << endl;
		cin >> dato;// El número de veces que voy a repetir mi buckle
		filtroentero(dato);// llamo a la variable filtroentero para que solo pueda introducir números y no deje que entren simbolos
		if ( dato <= 0){
			cout << "NÚMERO NO VALIDO, porfavor introduzca un número positivo " << endl;
		}		

	}while ( dato <= 0 ); 

		cout << "Introduce el nombre y seguido el parentesco  de tu personaje favortio de STARWARS " << endl;
		

	while ( dato >= acumulador1 ) { //DECLARO UN BUCKLE WHILE PARA ASI PODER ACUMULAR TANTAS ENTRADAS COMO NÚMERO DE DATOS INTRODUCIDOS ANTERIORMENTE

		cin >> nombre;
		cin >> parentesco;

		if ( nombre == "Luke" && parentesco == "padre" ){ // CONDICIONAL PARA GUARDAR EN LA VARIABLE NOMBRECOMPLETO segun el nombre y el parentesco
			nombrecompleto += "TOP SECRET \n"; // VARIABLE PARA HACER LA SUMATORIA Y ASI GUARDAR  LOS CIN Y (\n) PARA EL SALTO DE LINEA
		}			
		else {
			nombrecompleto += nombre + " yo soy tu " + parentesco + "\n";
		}		

		acumulador1 ++; // PARA PARAR EL BUCKLE CUANDO DATO SEA IGUAL AL ACUMULADOR

	}
	cout << nombrecompleto << endl;
}
