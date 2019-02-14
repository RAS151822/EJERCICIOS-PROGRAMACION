#include <iostream>
using namespace std;

double media(double n1,double n2,double n3) {
	double resultado = 0.0;
	

	resultado = (n1 + n2 +n3)/3.0;

	cout << "La media de tus números " << n1 << ", " << n2 << ", " << n3 << " es: " << resultado << endl;
	cout << "\n";

}

int main(){
	double n1 = 0.0;
	double n2 = 0.0;
	double n3 = 0.0;

	cout << endl;
	cout << "Introduce 3 números y te dire su media " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;

	media (n1,n2,n3); 
}
