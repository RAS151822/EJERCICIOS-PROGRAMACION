#include <iostream>

using namespace std;


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

int main(){
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
