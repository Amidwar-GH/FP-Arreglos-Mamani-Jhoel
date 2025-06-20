/*11. Calcular la suma de elementos positivos y negativos en un arreglo.*/

#include<iostream>
using namespace std;

int main(){
	//declaracion de variables
	int n, suma=0,sumaN=0,sumaP=0;
	int arr[n];
	cout<<"¿cuantos numeros desea digitar?"<<endl;
	cin>>n;
	
	//llenado y clasificado de numeros
	cout<<"Digite los elementos del arreglo."<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		suma=suma+arr[i];
		
		if(arr[i]<0){
			//int sumaN;
			sumaN=sumaN+arr[i];
		}else{
			//int sumaP;
			sumaP=sumaP+arr[i];
		}
	}
	
	//salida de datos
	cout<<"La suma general es "<<suma<<endl;
	cout<<"La suma de positivos es "<<sumaP<<endl;
	cout<<"La suma de negativos es "<<sumaN<<endl;
	
	return 0;
} 
