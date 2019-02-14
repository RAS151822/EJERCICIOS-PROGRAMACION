#include <iostream>
using namespace std;

int main(){
	int n=0;
	double s=0.0; 
	
	cout << "Esto es un programa que calcula la sumatoria compleja. " << endl;
	cout << "Introduzca su número. :) " << endl;
	cin >> n;
	
	for(int i=1; i<=n;i++){
		s = s + (1.0-i)/i;
	}
	cout << "El resultado de la sumatoria es: " << s << endl;
}
