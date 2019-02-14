//ESTO ES UN PROGRAMA PARA CALCULAR EL NIKOMANO DE UN NUMERO 
#include <iostream>
using namespace std;

int main(){
//DECLARACION DE VARIABLES
	int n= 0, s=0, inicializacion=0, finalizacion=0,aux = 0, nikomano=0;

//INTRODUCION PARA EL USUARIO	
	cout << "BIENVENIDO AL PROGRAMA DE NICOMANO!! " << endl;
	cout << "INTRODUCE UN NÚMERO Y LE DIRE SU CUBO" << endl;
	cin >> n;
//DECLARO UN BUCKLE FOR PARA HACER UNA SUMATORIA Y GUARDAR AQUI EL NÚMERO POR EL QUE INICIARA EL NIKOMANO
	for (int i=0; i<n; i++){
		s = i + s;
	}
// PARA QUE SIEMPRE INICIALICE EN EL SIGUIENTE NÚMERO IMMPAR DE N MULTIPLICAMOS LA SUMATORIA POR DOS Y LE SUMAMOS UNA
	inicializacion = (s *2) + 1;
// PARA SABER HASTA DONDE VA A LLEGAR LA SUMA DE LOS IMPARES 
 	finalizacion = ((n * n) + n ) - 1;

	//cout << "El valor de inicializaion es: " << inicializacion << endl;
	//cout << "El valor de finalizacion es: " << finalizacion << endl;
	
	for ( int aux = inicializacion; aux <= finalizacion; aux+=2){
		cout << "EL valor de inicializacion es " << aux << endl;
		nikomano = aux + nikomano;
	} 	
	cout << "EL NIKOMANO DE SU NÚMERO ES: " << nikomano << endl;
}
