#include <iostream>
using namespace std;

int main(){
	int n=0, s=0;
	
	cout << "Esto es un programa para calcular la sumatoria de un número." << endl;
	cout << "Introduzca su número. :) " << endl;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		s= i+s;
	}
	cout << "La sumatoria de el número " << n << "es: " << s << endl;
}
