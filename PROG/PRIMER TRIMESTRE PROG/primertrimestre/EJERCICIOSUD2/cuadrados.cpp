#include <iostream>
using namespace std;

int main (){
	int n=0, r=0, acum=0;
	
	cout << "Esto es un programa para saber si su número es un cuadrado perfecto." << endl;
	cout << "Muy bien continuemos. " << endl;
	cout << "Introduzca su número por favor. " << endl;
	cin >> n;
	
	for ( int i=1; i<=n; i++){
		r = i * i;
		if ( r == n){
			cout <<  "El número " << n << " es cuadrado perfecto. " << endl;
			acum ++;
		}
	} 
	if ( acum !=1){
		cout << "El número " << n << " NO es cuadrado perfecto. " << endl;
	}
}
