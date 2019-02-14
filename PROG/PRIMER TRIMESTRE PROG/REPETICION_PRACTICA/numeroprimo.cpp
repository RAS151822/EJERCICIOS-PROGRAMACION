
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

int main (){

	int n = 0;

	cin >> n;


	cout << primo(n);
	//if(primo(n) == 1){
	//	cout << n << "esprimo" << endl;
	//}


}


