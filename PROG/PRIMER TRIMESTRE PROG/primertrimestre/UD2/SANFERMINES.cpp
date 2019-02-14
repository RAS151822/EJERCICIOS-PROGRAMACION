#include <iostream>
using namespace std;

int main(){
	int numero_toros = 0, velocidad_toro = 0, velocidad_mayor=0, velocidad_menor=0;
	int aux = 1;	

	cout << "BIENVENIDO A LOS SANFERMINES DE RAS" << endl;
	cout << "INTRODUZCA EL NÚMERO DE TOROS QUE DESEA" << endl;
	cin >> numero_toros;
	
	cout << "INTRODUZCA LA VELOCIDAD PARA SU TORO " << aux << endl;
	cin >> velocidad_toro;
	
	velocidad_mayor = velocidad_toro;	
	while(velocidad_toro < 100 && velocidad_toro >= 1 && numero_toros != 1  ){
		aux++;
		if ( velocidad_mayor <= velocidad_toro){
		
			velocidad_mayor = velocidad_toro;
				
		}		
	 	cout << "INTRODUZCA LA VELOCIDAD PARA SU TORO " << aux << endl;
		cin >> velocidad_toro;
		numero_toros--;
		
		
	}
		if ( velocidad_mayor <= velocidad_toro){
		
			velocidad_mayor = velocidad_toro;
				
		}	
		if ( velocidad_toro > 100 ){
			cout << "EL TORO NO PUEDE IR A MAS DE 100 POR HORA " << endl;
		}
		if ( velocidad_toro < 0 ){
			cout << "EL TORO NO PUEDE CORRER HACIA ATRAS " << endl;
		}	
		if ( velocidad_toro == 0 ) {
			cout << "EL TORO ESTA QUIETO " << endl;
		}
		if (velocidad_toro < 100 && velocidad_toro >= 1){
			cout << "La velocidad a la que tiene que ir el corredor es: " << velocidad_mayor << endl;
		}
}
