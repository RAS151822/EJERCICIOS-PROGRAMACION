#include <iostream>
using namespace std;

bool primo (int acumuladoruno){
	bool primo = false;	

	for ( int i = 2; i <= acumuladoruno; i++){
		if ( acumuladoruno % i != 0){
			primo = true;		
		}
	}
	return primo;
}

int main(){

	char dato;
	int acumuladorcero = 0, acumuladoruno = 0;

	cout << "\n";
	cout << "BIENVENIDO AL PROTOTIPO DE CABALÍSTICO" << endl;
	cout << "\n";
	cout << "Introduzca codificacion de la NASA2" << endl;
	

	while ( acumuladorcero < 5){

	cin >> dato;

		if (dato == '1'){
			acumuladoruno ++;
			acumuladorcero = 0;
			//cout << "Este es el valor de acumuladoruno " << acumuladoruno << endl;
		}
		if (dato == '0'){
			acumuladorcero ++;
			paradaunos ++;	
			//cout << "Este es el valor de acumuladorcero " << acumuladorcero << endl;
			
			if (paradaunos == 1){
				multiplicadordeunos *= acumuladoruno;
				cout << "Este es el valor de multiplicadordeunos " << multiplicadordeunos << end;
			}
			if (primo(acumuladoruno) == 1){
				contador ++;
			}
			
			acumuladoruno = 0;		

		}

	}

}
