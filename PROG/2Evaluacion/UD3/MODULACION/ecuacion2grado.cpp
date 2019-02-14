#include <iostream>
#include <cmath>
using namespace std;


/*@Es un proceso para introducir los valores de entrada
@pre activacion con la biblioteca iostream para la entrada de datos por el teclado y la salida por pantalla
@post las variables a , b , c tendran almacenados los datos introducidos por el usuario por paso por referencia
*/
void Bienvenida (double &a, double &b, double &c){
	
	cout << endl;
	cout << "Bienvenido al programa que calcula ecuaciones de segundo grado " << endl;
	cout << endl;
	cout << "Introduce un valor para tu a " << endl;
	cin >> a;
	cout << "Introduce un valor para tu b " << endl;
	cin >> b;
	cout << "Introduce un valor para tu c " << endl;
	cin >> c;
}

/*@Es una funcion que me va a calcular la ecuacion de segundo grado y ademas me va a servir de filtro para saber si tiene solucion o no. Y si tiene mas de una
@pre (E) de parametros a, b , c son tipo de datos double es decir decimales
@post (S) de x1 que seria la primera solucion. Y de x2 que seria la segunda solucion de la ecuacion en caso de que la hubiera
@post (S) de exito que es un booleano si este es true entrara en el condicional de la funcion int main (); y me mostrara por pantalla los resultados de dicha ecuacion
*/
bool Ecuacion2grado (double a, double b, double c, double &x1, double &x2){
	bool exito = true;
	
	if (a==0){ // Si la a que equivale al valor de X² = 0 pasaria a ser una ecuacion de primer grado
		if (b==0){ // Si la b que equivale a la la X = 0 no habria x
			exito = false; //No hay x la solucion seria -c / b	
		}
		else {
			x1 = x2 = -c/b;
			exito = true;
		}
	}
	else { // Si a > 0 entonces tenemos ecuacion de 2ºgrado
		double discriminante = b*b-4*a*c;
		if (discriminante > 0) {
			x1 = (-b+sqrt(discriminante))/(2*a);
			x2 = (-b-sqrt(discriminante))/(2*a);
			exito = true;
		}
		else if (discriminante < 0){
			exito = false; // si el discriminante = 0 no hay solucion
		}
		else {
				x1 = x2 = -b/(2*a);
				exito = true;			
			}			
		
	}

	return exito;
}

void Resultados2Grado ( double a, double b, double c, double x1, double x2){
	cout << "Ecuacion con coeficientes: " << a << ", " << b << ", " << c << endl;
	if ( x1 == x2 ){ // si la solucion uno que es x1 y la solucion 2 que es x2 son iguales entonces significa que solo hay una solucion
		cout << "Una solucion: " << x1 << endl;
	}
	else cout << "Dos soluciones: " << x1 << ", " << x2 << endl;
}		

//Funcion principal encargada de llamara a las demas funciones
int main(){
	double a = 0.0, b = 0.0, c = 0.0, s1 = 0.0, s2 = 0.0;
	int exito;

	Bienvenida ( a,b,c);
	//cout << "EL VALOR DE A: " << a << " EL VALOR DE B: " << b << " EL VALOR DE C: " << c << endl; // Comprobacion de si funcionan el paso de valor por referencia
	if (Ecuacion2grado(a, b, c, s1, s2) == 1){ // No entiendo este condicional pensaba que al tener exito igual a uno entraria
		Resultados2Grado(a, b, c, s1, s2);
	}
	else {
		cout << "Esta ecuacion no tiene soluciones " << endl;
	}
}
