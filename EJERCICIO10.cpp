/*10. Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de 
tendencia central media, mediana y moda.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	//sector variables
	int arreglo[30];
	int sumatotal,auxmediana,auxmoda,numero;
	
	srand(time(0));
	
	//sector llenado de array
	for(int i=0; i<30; i++){
		arreglo[i]=rand()%901+100;
		//cout<<i+1<<". "<<arreglo[i]<<endl;
	}
	
	//sector suma del array
	int suma=0;
	for(int i=0; i<30; i++){
		suma = suma + arreglo[i];
	}
	
	float promedio=suma/30;
	
	cout<<"La suma es: "<<suma<<endl;
	cout<<"\nEl promedio es: "<<promedio;
	
	//para el calculo de la mediana antes ordenar el array con el metodo de la burbuja
	for(int i=0; i < 30-1; i++) {
    for(int j=0; j < 30-i-1; j++) {
        if(arreglo[j] > arreglo[j+1]) {
            // Intercambio de valores
            int temp= arreglo[j];
            arreglo[j]= arreglo[j + 1];
            arreglo[j+1]= temp;
        }
    }
	}
	for(int i=0; i<30;i++){
		cout<<arreglo[i]<<" "<<endl;
	}
	return 0;
}

