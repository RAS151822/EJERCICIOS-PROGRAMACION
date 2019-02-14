#include <iostream>
using namespace std;

int main(){
	int n=0;
	bool primo = true;
	
	cout << "Introduzca el número para saber si es primo o no. " << endl;
	cin >> n;
	
	for(int i=0; i <= n-1 && primo==true; i++){
		if( n % i == 0){
			cout << "EL número " << n << " no es primo " << endl;
			primo = false;
		}
		else {
			cout << "EL número " << n << " es primo " << endl;
			primo = false;
		}
	} 

}
