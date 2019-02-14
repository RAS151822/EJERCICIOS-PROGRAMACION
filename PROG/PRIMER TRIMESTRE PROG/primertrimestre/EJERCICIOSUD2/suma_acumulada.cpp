#include <iostream>
using namespace std;

int main(){
	int n=0;
	int s=0;
	
	cout << "Este es un programa que calcula la sumatoria del número que quiera, cuando pulsa " "0""." << endl;
	
	do{
		cout << "Introduzca su número. " << endl;
		cin >> n;
		s = n + s;
		
	}while ( n != 0 );
		cout << "La sumatoria de sus números es: " << s << endl;
	
	
	
}
