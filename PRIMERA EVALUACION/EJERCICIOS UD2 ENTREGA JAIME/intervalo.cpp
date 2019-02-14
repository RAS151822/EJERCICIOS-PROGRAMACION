#include <iostream>
using namespace std;

int main (){
	int a=0, b=0, x=0;
	int s=0;
	
	cout << endl;
	cout << "Introduzca el primer valor para su intervalo. " << endl;
	cin >> a;
	cout << "Introduzca el primer valor para el segundo intervalo. " << endl;
	cin >> b;
	cout << "Introduzca el número para calcular sus múltiplos " << endl;
	cin >> x;
	
	
	for(int i=a; i<=b; i++){
		if( i % x ==0){
			cout << "Los múltiplos de " << x << " son: " << i << endl;
		}
	}


}
