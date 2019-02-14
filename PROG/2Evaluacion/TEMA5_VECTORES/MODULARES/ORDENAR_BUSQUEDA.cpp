#include <iostream>

using namespace std;

void RellenarVector(const int Dim_v,int v[],int &util_v){

	do{
	cout << "¿Cuantas edades de personas me va a guardar? " << endl; 
	cin>>util_v;
	}while(util_v <=0 && util_v > Dim_v);	
	
		
	for(int i=0;i < util_v;i++){
	cout << "Intruduce la edad en la posicion ; [" << i << "] ";
	cin>>v[i];
	cout << endl;

	}
}
void BuscamosLaedad (int v[],int util_v){

	int n = 0,cont = 0,copia_indice  = 0;
		
	cout << "Dime que edad quieres buscar : " << endl;
	cin>>n;	
	
	for(int i = 0;i < util_v && cont != 1;i++){

		if(n != v[i]){

			cont=0;			

		}else{
			copia_indice = i;
			cont++;

		}
		

	}
	if(cont == 0){

		cout << "Segun la edad que nos has indicado no encontramos ningun registro en el vector . " <<endl;	

	}
	if(cont == 1){
		cout << "La edad indicada es : [" << n << "] y se encuentra en la posicion del vector [ "<< copia_indice << "]"; 
	}
}
int main (){

	const int Dim_v = 100;
	int v [Dim_v] = {0};
	int util_v = 0;

	RellenarVector(Dim_v,v,util_v);
	BuscamosLaedad(v,util_v);

}


