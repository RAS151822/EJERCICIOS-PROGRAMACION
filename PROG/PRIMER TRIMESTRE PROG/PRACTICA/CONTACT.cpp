#include <iostream>
#include <math.h>
using namespace std;

bool primo(int cont1){


	bool primo = true;
	
	for(int i=1; i <= cont1-1 && primo==true; i++){
		if( cont1 % i == 0){
			//cout << "EL número " << n << " no es primo " << endl;
			primo = false;
		}
		//else {
			//cout << "EL número " << n << " es primo " << endl;
			//primo = false;
		//}
	} 
	return primo; 

}

int main (){
	int n = 0, cont1 = 0, parada0 = 0, multiplicacion_primo = 1,resultado_primo = 0; 	
	
	//PEQUEÑA INTRODUCCION DEL PROGRAMA
	cout << "INTRODUCE UN NÚMERO Y LE DIRE SI ES CABALISTICO" << endl;	

	while (parada0 != 5){

		cin >> n;
		
		if (n == 1){
			cont1 ++;
			//cout << "EL VALOR DE CONTADOR DEL 1 ES: " << cont1 << endl;
			cout << "contador de unos  " << cont1 << endl;
			parada0 = 0;	
		}	
		if (n == 0){
			parada0 ++;
			if(parada0==1){
			
				multiplicacion_primo = multiplicacion_primo * cont1;
				//cout << "La multiplicacion del total de los numeros : " << multiplicacion_primo  << endl;
			}
			resultado_primo = primo (cont1); // la llamo antes de que el contador de uno valga 0 y asi tener el recuento
			cout << resultado_primo << "lo que vale primo " << endl;
			cont1 = 0;
			
		}
	}
	cout << "El numero " <<  multiplicacion_primo   << endl ;
}
