#include <iostream>
#include <math.h>
using namespace std;

int main () {
	double radio = 0.0, area = 0.0, pi = 3.14159, diametro = 0.0;

	cout << "INTRODUZCA ÚN NUMERO ENTERO " << endl;
	cin >> radio;
	
	diametro = pow(radio, 2);
	area = pi * diametro;
	
	cout << "Tu radio es: " << radio << endl;
	cout << "Tu diametro es: " << diametro << endl;
	cout << "Tu area es: " << area << endl;
	
}
