#include <iostream>
using namespace std;

int main(){
	int a=0, b=0, r=0;
	
	
	cout <<"Hola! Esto es un programa para calcular el M.C.D de dos números.. es decir, ¡¡EL MÁXIMO COMÚN DIVISOR!!!" << endl;
	cout << "Introduce el primer número " << endl;
	cin >> a;
	cout << "Introduce el segundo número " << endl;
	cin >> b;

	r = a % b;
	
	while ( r != 0){
	 a = b;
	 b = r;
	 r = a % b;
	 }
	cout << "El M.C.D es: " << b << endl;
	
}
