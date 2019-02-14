#include <iostream>
#include <math.h>
using namespace std;


/**
 *@ brief Modulo para imprimir resultados de la media, varianza, d_tipica
 *@ param media es la variable que guarda el resultado de media y esta actualizada por paso por referencia
 *@ param varianza es la variable que guarda el resultado de la varianza y esta actualizada por paso por referencia
 *@ param d_tipica es la variable que guarda el resultado de la d_tipica y esta actualizada por paso por referencia
 *@ pre los valores seran >= 0
 *@ post los valores seran >=0
*/
void imprimeresultado (double media, double varianza, double d_tipica){
	
	cout << "La media es: " << media << endl;
	cout << "La varianza es: " <<  varianza << endl;
	cout << "La desviacion tipica es: " << d_tipica << endl;
}


/**
 *@ brief Modulo que calcula la varianza y la d.tipica
 *@ param util_notas es la variable que contiene los componentes utilizados/ocupados actualmente en el vector. Se pasa por copia ya que su valor no va a ser modificado
 *@ param notas[] es una referencia al vector de numeros enters. Al ser modulo de leectura lo paso como referencia no cmo constante
 *@ param media es la variable que guarda el resultado de media. Se pasa por copia porque no va a variar su contenido
 *@ parm varianza es la variable que va a guardar el resultado de varianza paso por referencia ya que necesito deovlver el valor par imprimirlo despues
 *@ param d_tipica es la variable que va a guardar el resultado de la desviacion tipica paso por referencia ya que necesito deovlver el valor par imprimirlo despues
 *@ param sumatoria es la variable local para acumulular la sumatoria para calcular la varianza 
*/
int calcular_varianza_d_tipica(int util_notas, double notas[], double media, double &varianza, double &d_tipica){
	double sumatoria = 0.0;
	
	for (int i = 0; i < util_notas; i++){
		sumatoria += pow((notas[i] - media),2);
	}
	varianza = sumatoria / (util_notas - 1);
	d_tipica = sqrt (varianza);
	
	//cout << "Debug: La varianza es: " <<  varianza << endl;
	//cout << "Debug: La desviacion tipica es: " << d_tipica << endl;
}

/**
 *@ brief Modulo que calcula la media de las calificaciones introducidas
 *@ param media es la variable que guardara el resultado de la media y se devuelve su valor mediante el return
 *@ param util_notas es la variable que contiene los componentes utilizadas/ocupadas actualmente por el vector. Se pasa por copia porque no va a variar el numero de  componentes del vector
 *@ param notas es una referencia al vector de numeros enteros. Al ser modulo de escritura y lectura del vector lo paso como referencia no como constante
 *@ pre debe ser >=0  y < DIM_VECTOR
 *@ post tendremos el calculo de la media
 *@ return resultado media */ 
int calcular_media(int util_notas, double notas[], double media){
	
	for (int i = 0; i < util_notas; i++){
		media += notas[i];
	}
	media /= util_notas;
	
	return media;
}

/**
 *@ brief Modulo que recoge por pantalla la cantidad de notas totales y sus calificaciones y las filtra no pueden ser (<0 y >100)
 *@  variable util_notas y guardar aqui la cantidad y saber asi la cantidad de espacios de memoria utilizados pro el vector  paso por referencia
 *@  variable DIM_NOTAS innecesariamente solo para marcar el limite de notas a introducir por el usuario
 *@ pre nada
 *@ post filtro para que la cantidad de notas introducidad este dentro del diametro del vector
*/
int cantidad_notas(int &cant_notas, int DIM_NOTAS, double notas[] ){

	do {	
		cout << "Introduce la cantidad de notas que deseas introducir entre ( 1 y " << DIM_NOTAS << " ): " << endl;
		cin >> cant_notas;
	}while ( cant_notas < 0 || cant_notas > DIM_NOTAS);
	
		cout << "Muy bien, ahora introduce tus calificaciones " << endl;

	for ( int i = 0; i < cant_notas; i++){
		cout << "Para la nota [ " << i << " ] " << endl;
		cin >> notas[i];
	}


}

int main(){
	int const DIM_NOTAS = 100;
	double notas[DIM_NOTAS];
	int util_notas = 0;
	double media = 0.0;
	double varianza = 0.0;
	double d_tipica = 0.0;	

	cantidad_notas(util_notas, DIM_NOTAS,notas);
	//cout << "Debug cantidad notas : " << util_notas << endl;
	 media = calcular_media(util_notas,notas, media);
	//cout << "Debug media: " << media << endl;
	calcular_varianza_d_tipica(util_notas,notas, media, varianza,d_tipica);
	imprimeresultado ( media, varianza, d_tipica);
}
