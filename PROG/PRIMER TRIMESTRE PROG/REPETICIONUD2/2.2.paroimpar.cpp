#include <iostream>
using namespace std;

int main() {
	int n1 = 0;

	cout << "Introduce un número y le dire si es par o impar " << endl;
	cin >> n1;

	if ( n1 % 2 == 0 ) {
		cout << "El número " << n1 << " es par " << endl;
	}
	else {
		cout << "El número " << n1 << " es impar " << endl;
	}
}
