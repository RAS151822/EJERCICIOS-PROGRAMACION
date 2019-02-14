#include <iostream>
using namespace std;

bool primo(int n){
	bool primo = true;
	
	cout << "ESTO ES LO QUE VALE primo antes del for " << n << endl;	

	for ( int i = 2; i < n; i++){
		if ( n % i == 0){
			primo = false;
			//cout << "ESTO ES LO QUE VALE PRIMO EN EL IF " << primo << endl;
			//cout << "ESTO ES LO QUE VALE i " << i << endl;
		}
	}
	
	//cout << "ESTO ES LO QUE VALE PRIMO despues del buckle " << primo << endl;
	return primo;	

}

int main (){
	int n = 0;

	cout << "\n";
	cout << "Introduce un número y te dire si es primo " << endl;
	cin >> n;

	 if ( primo(n) == 1){
		cout << " El número " << n << " es primo " << endl;
	}else {
		cout << " El número " << n << " No es primo " << endl;
	}

}
