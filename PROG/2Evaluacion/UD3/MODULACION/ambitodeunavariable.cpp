#include <iostream>
using namespace std;

void intercambio(char a, char b){
	char aux;

	aux = a;
	a = b;
	b = aux;

}

int main(){
	char a = 'a', char b = 'b';

	void intercambio (a,b);
	
	cout << "a = " << a << " y b = " << b << endl;
}
