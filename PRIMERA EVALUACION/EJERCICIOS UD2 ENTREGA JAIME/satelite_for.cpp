#include <iostream>
using namespace std;

int main(){
	int dato=0;
	bool fin = false;
	int contador=0;
	
	for(int i=0; i<20 && fin==false; i++){
		cin >> dato;
		cout << i << "- PROCESADO " << endl;
		contador = contador + 5;
		cout << " Este es el valor de contador: " << contador << endl;
		
		if ( dato >= 0){
			cout << "PROCESADO"<< endl;
			
		}
		else {
			cout << "DATO NO VÁLIDO" << endl;
			fin = true;
		}
	}

}
