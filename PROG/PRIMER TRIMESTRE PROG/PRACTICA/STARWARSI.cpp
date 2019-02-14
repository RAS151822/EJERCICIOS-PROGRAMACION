#include <iostream>
#include <string.h>
using namespace std;

int problema STARWARSI (){
	string A,B;//DECLARO DOS VARIABLES STRING PARA QUE EL USUARIO INTRODUZCA CARACTERES
	int n = 0, acumulador = 1;// NÚMERO DE VECES Y ACUMULADOR PARA QUE PARE EL BUCKLE
	string Luke,Padre;//DOS VARIABLES PARA COMPARAR
	
	do{
	//PEQUEÑA INTRODUCCION
		cout << endl; 
		cout << "BIENVENIDO AL PROGRAMA DE STAR WARSS I" << endl;
		cout << "INTRODUCE EL NÚMERO DE PERSONAJES QUE QUIERES INTRODUCIR" << endl;
		cin >> n;//NUMERO DE VECES QUE QUIERO QUE REPITA EL BUCKLE
		if ( n<=0){
		cout << "DATO NO VALIDO repita porfavor " << endl;
		}	
	}while ( n <= 0);	
	
	
	
	while ( n >= acumulador ){
		
		cout << "Introduce el nombre de tu personaje favorito de STAR WARS " << endl;
		cin >> A;
		cout << "Introduce el parentesco de tu personaje favorito de STAR WARS " << endl;
		cin >> B;

		acumulador ++;
	
		//CONDICIONALES PARA QUE SI EL USUARIO INTRODUCE Luke Y Padre aparezca TOP SECRET
		if( (A == "Luke") && (B == "padre") ){
			cout << "TOP SECRET"<< endl;
		}else {
			cout << A << ", yo soy tu " << B << endl;}
		}
}
