/*10. Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de 
tendencia central media, mediana y moda.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int arreglo[30];
	int sumatotal,auxmediana,auxmoda,numero;
	
	srand(time(0));
	
	for(int i=0; i<30; i++){
		arreglo[i]=rand()%901+100;
		cout<<i+1<<". "<<arreglo[i]<<endl;
	}
	
	return 0;
}

