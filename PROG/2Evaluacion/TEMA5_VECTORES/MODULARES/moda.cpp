#include <iostream>
#include <iomanip>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"   
#define USER "\033[1;34m"
using namespace std;

int  main(){
	int DIM = 100;
	int v[DIM] = {1,8,9,9,23,23,14,36,23};
	int utiles = 9;
	int v_local[DIM];
	int v_local_utiles = 0;
	int i = 0;
	int izq = 0;
	int valor = 0;

	for ( izq = 1; izq < utiles_v; izq++){
		valor = v[izq];	
			for ( int i = izq;i > 0 && valor != v[i-1]; i--){
				
				if ( v[izq] == v[i-1] ){
					v_local[v_local_utiles] = v[izq];
					v_local_utiles++;
				}
			}
		 
	}

}
