#include <iostream>
using namespace std;

int main(){
	int n=0;
	bool primo = true;
	
	cout << "Introduzca el número para saber si es primo o no. " << endl;
	cin >> n;
	
	for(int i=2; i < n && primo==true; i++){
		if( n % i == 0){
			//cout << "EL número " << n << " no es primo " << endl;
			primo = false;
		}
		
	} 
	if (primo == true){
		cout << "El número " << n << " es primo " << endl;
	}
	else {
		cout << "El número " << n << " no es primo " << endl;
	}
}
