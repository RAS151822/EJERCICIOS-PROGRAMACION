#include <iostream>
using namespace std;

int main(){
	double x1 = 0.0,  y1 = 0.0;
	double x2 = 0.0, y2 = 0.0;
	double c1 = 0.0, c2 = 0.0;
	
	
	
	cout << endl;
	cout << "Que paso mi colega?! Bienvenido al  PROEVOLUTION RASPUTIN 1.0. " << endl;
	cout << "Para seguir jugando debe INTRODUCIR LAS COORDENADAS DE SU PORTERIA!! " << endl;
	
	do {
		cout << "INTRODUZCA las coordenadas para X, donde situaremos su PALO IZQUIERDO. " << endl;
		cin >> x1;
	}while (x1<0.0);
	
	do {
		cout << "AHORA INTRODUZCA las coordenadas para Y, donde situaremos su PALO IZQUIERDO. " << endl;
		cin >> y1;
	}while (y1<0.0);
	
	do{
		cout << "MUY BIEN!! Ahora INTRODUZCA las coordenadas para X,de su PALO DERECHO. " << endl;
		cin >> x2;
	}while ( x2<0.0);
	
	do {
		cout << "AHORA INTRODUZCA las coordenadas para X, Y donde situaremos su PALO IZQUIERDO. " << endl;
		cin >> y2;
	}while (y2<0.0);
	
	do {
		cout << "GENIAL!! sigamos! Ahora solo queda un paso CHUTARRR!!! " << endl;
		cout << "INTRODUZCA las coordenadas para x, y de su CHUTEEE!! " << endl;
		cin >> c1;
		cin >> c2;
	}while ( (x1>x2) && (x1>y2) && (y1>x2) && (y1>y2) );
	
	cout << "PERFECTO SU PORTERIA ES UN CUADRADO" << endl;
	cout << endl;
	
	//DECLARAMOS EL CONDICIONAL EN LOS QUE SERA GOL!!
	if ( (c1>x1) && (c2>y1) && (c1<x2) && (c2<y2) ) {
		cout << "GOOOOOL!! MUY BIEN CRACK ACABAS DE MARCAR UN GOLAZO!! " << endl;
	}if ( (c1>x1) && ( c2<y1) && ( c1<x2 ) && ( c2<y2) ) {
		cout << "TUERCE BOTAS!! Donde estas mirando tio? le distes una patada al suelo!! :) " << endl;
	}if ( (c1>x1) && ( c2<y1) && ( c1>x2) && (c2<y2) ) {
		cout << "TUERCE BOTAS!! Le distes al suelo y se fue fuera a la derecha!! " << endl;
	}if ( (c1>x1) && ( c2>y1) && ( c1>x2) && (c2<y2) ) {
		cout <<  "FUERA HACIA ARRIBA Y A LA DERECHA!! lo mandastes fuera a la derecha tio!! " << endl;
	}if ( (c1>x1) && (c2>y1) && (c1<x2) && ( c2>y2) ) {
		cout << "FUERA POR ENCIMA DEL LARGUERO!! lo mandastes a la grada mijo!! " << endl;
	}if ( (c1<x1) && (c2>y1) && (c1<x2) && (c2<y2) ) {
		cout << "FUERA POR LA IZQUIERDA!! lo mandastes fuera a la izquierda bro!! " << endl;
	}if ( (c1<x1) && (c2<y1) && (c1<x2) && (c2<y2) ) {
		cout << "TUERCE BOTAS!! lo mandastes fuera a la izquierda y encima le distes al suelo!! " << endl; 
	}if ( (c1==x1) && (c2>=y1) && (c1<x2) && (c2<y2) ) {
		cout << "LE DISTES AL POSTER IZQUIERDO!! " << endl;
	}if ( (c1>x1) && (c2>y1) && (c1==x2) && (c2<y2) ) {
		cout << "LE DISTES AL POSTER DERECHO!! " << endl;
	}if ( (c1>x1) && (c2>y1) && (c1<x2) && (c2==y2) ) {
		cout << "CASI!! LE DISTES AL LARGUERO TIO!! " << endl;
	}if ( (c1==x1) && (c2>y1) && (c1<x2) && (c2==y2) ) {
		cout << "LE DISTES A LA ESCUADRA IZQUIERDA!! " << endl;
	}if ( (c1>x1) && (c2>y1) && (c1==x2) && (c2==y2) ) {
		cout << "LE DISTES A LA ESCUADRA DERECHAA!! " << endl;
	}if ( (c1>x1) && (c2==y1) && (c1<x2) && (c2<y2) ) {
		cout << "PARADON DEL PORTEROO!! " << endl;
	}if ( (c1==x1) && (c2>y1) && (c1<x2) && (c2>y2) ) {
		cout << "LE DISTES AL ARBITRO TIO!! " << endl;
	}
	
	
}

