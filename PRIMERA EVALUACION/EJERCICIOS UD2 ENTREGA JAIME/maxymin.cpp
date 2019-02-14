#include <iostream>

using namespace std;

int main(){

	int n1=0,min=0, max=0;

	cout << "INTRODUZCA sus números y le dire cual es el máximo y el mínimo de ellos HASTA QUE PULSE 0 " << endl;
	cin >> n1;
	
	min = n1;
 	max = n1;

	while ( n1 != 0){
		
		if ( n1 > max ) {
			max = n1;
		}
		if ( n1 < min ) {
			min = n1;
		}
		cout << "INTRODUZCA su número para compararlo " << endl;
		cin >> n1;
	}
	
	cout << "El máximo de tus números es: " << max << endl;
	cout << "El mínimo de tus números es: " << min << endl;

}
