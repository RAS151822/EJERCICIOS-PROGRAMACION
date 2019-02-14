//PREGUNTAR EN CLASE TESTING DE UN NÚMERO DE 9 DIGITOS resultados NEGATIVOS?¿ WHY?¿
#include <iostream>
using namespace std;

int main (){
	int n=0;
	
	cout << "Introduzca cualquier número entero y le dire su tabla de multiplicar. ;)" << endl;
	cin >> n;
	
	for(int i = 0; i<=10; i++){
		cout << n << " x " << i << " = " << n*i << endl;
	}

}
