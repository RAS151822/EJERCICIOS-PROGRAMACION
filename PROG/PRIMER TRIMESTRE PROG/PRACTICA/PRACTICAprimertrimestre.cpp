#include <iostream>
#include <string.h>
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

bool primo (int acumuladoruno){

	// DECLARAMOS UNA VARIABLE BOOLEANA PARA SABER SI ES PRIMO O NO EL ACUMULADOR DE UNOS
	bool primo = true;

	for (int i = 2;i<acumuladoruno;i++){
		
		if (acumuladoruno % i == 0){
			primo = false;
		}
	}
	return primo;
}

int mostrarporpantalla (int acumuladoruno){

	cout << acumuladoruno << " * " ;
	
}

string cambiarorden ( int acumuladoruno){
	ostringstream cambiarorden;

	cambiarorden << acumuladoruno;
	
	return cambiarorden.str();

}

int contact(){
	char dato; // Declaro variable tipo char para poder introducirla seguida y sin espacios para introduccion de secuencia binaria
	int acumuladorcero = 0, acumuladoruno = 0; // Declaro variable para la sumatoria de unos y ceros introducidos
	int multiplicadoruno = 1; // Declaro variable para multiplicar la sumatoria de unos
	int contador = 0;
	int acumuladorparada = 0;
	string guardarresultadomultiplicaciones=" ";

	cout << "\n";
	cout << "BIENVENIDO AL PROGRAMA CABALÍSTICO!!  \n ";
	cout << endl;
	cout << "INTRODUZCA la secuencia binaria captada por la NASA!! " << endl;
	

	while ( acumuladorcero < 5) {

		cin >> dato;
		filtroentero(dato);

		if (dato == '1'){
			acumuladoruno ++;
			acumuladorcero = 0;
			acumuladorparada = 0;

		}
		if (dato == '0'){
		
			acumuladorcero ++;
			acumuladorparada ++;
		
			if(acumuladorparada == 1){
				multiplicadoruno *= acumuladoruno;
				//mostrarporpantalla (acumuladoruno);
				
				if (guardarresultadomultiplicaciones != " "){

					guardarresultadomultiplicaciones += " * ";
				}				
					guardarresultadomultiplicaciones += cambiarorden(multiplicadoruno);
			}
			if (primo(acumuladoruno) == 0){

				contador++;
			
			}
				
			acumuladoruno = 0;
		}
	}
	
		if(contador >= 1){
			cout << multiplicadoruno << " = " << guardarresultadomultiplicaciones << " --> NO es cabalístico " << endl;
		}else{
			cout << multiplicadoruno << " = " << guardarresultadomultiplicaciones << " --> es cabalístico " << endl;
		}
	
}

int starwarsI () {
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
					contact();
			break;
			case 2:
				cout << "Esta usted en el programa STAR WARS I" << endl;
					starwarsI ();
			break;
			case 3:
				cout << "Esta usted en el progrma STAR WARS II" << endl;
		}

	}
}
