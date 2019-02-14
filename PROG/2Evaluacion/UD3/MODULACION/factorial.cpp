#include <iostream>
using namespace std;

double factorial (double n, double &s){	

	for (int i = 1; i<=n; i++){
		s = i * s;
	}
	//cout << "Esto es lo que vale s cuando sale del buckle " << s << endl;
	return s;
}

int main(){
	double n = 0.0;
	double s = 1.0;

	cout << endl;
	cout << "Introduce un número y le mostrare su FACTORIAL " << endl;
	cin >> n;
	
	factorial (n,s);

	cout << "El factorial de n " << n << " es " << s << endl;

}
