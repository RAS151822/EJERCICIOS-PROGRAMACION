#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//DECLARO LAS VARIABLES PARA SABER POSICON Y RADIO DE LA CIRCUNFERENCIA
	double x1=0.0, y1=0.0, r1=0.0;//variables primera circunferencia
	double x2=0.0, y2=0.0, r2=0.0;//variables segunda circunferencia
	double D=0.0;//variable distancia	

	//PEQUEÑA PRESENTACION
	cout << "BIENVENIDO AL CALL OF DUTY RASPUTIN 1.0" << endl;
	cout << "INTRODUZCA LAS COORDENADAS X1, Y1 PARA SU POSICION " << endl;
	cin >> x1;
	cin >> y1;
	
	cout << "INTRODUZCA LAS COORDENADAS X2, Y2  PARA SU TIRO " << endl;
	cin >> x2;
	cin >> y2;
	
	do {
	cout << "INTRODUZCA LAS COORDENADAS DE SUS RADIOS R1, R2 PARA SUS CIRCUNFERENCIAS " << endl;
	cin >> r1;
	cin >> r2;
	}while(r1<=r2);	

	//DECLARO LA FORMULA DISTANCIA
	D = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
	cout << "EL VALOR DE D es: " << D << endl;
	//DECLARO CONDICIONALES PARA SABER SEGUN LOS VALORES INTRODUCIDOS QUE TIPO DE POSICION RELATIVA EXISTE
	if ( D == 0.0 ) {
		cout << "BAAM!! Le reventastes la cabeza amigo mio! (cocéntricas) " << endl;
	}
	if ( ( D > ( r1+r2) ) ) {
		cout << "Donde estas mirando tio! le distes a un pajaro!! (exteriores) " << endl;
	}
	if ( ( D > 0.0 ) && ( D < ( r1 - r2) ) ) {
		cout << "BAM!! Le distes en un ojo tioo!! (interiores o inscritas) " << endl;
	}
	if ( ( ( r1 + r2) == D ) ) {
		cout << "UYYYYY! LE ROZASTES LA CABEZA AMIGO LE VOLASTES UNA OREJA!! (tangente exterior) " << endl;
	}
	if ( ( (r1 - r2) == D ) ) {
		cout << "BAMMM!! Le rozastes en la cabeza amigo pero le volastes la mitad!! (tangente interior) " << endl;
	}
	cout << "GRACIAS POR JUGAR!! AL CALL OF DUTY RASPUTIN 1.0 " << endl;
}
