/*11. Calcular la suma de elementos positivos y negativos en un arreglo.*/

#include<iostream>
using namespace std;

int main(){
	int n, suma=0;
	int arr[n];
	cout<<"¿cuantos numeros desea digitar?"<<endl;
	cin>>n;
	
	cout<<"Digite los elementos del arreglo."<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		suma=suma+arr[i];
	}
	cout<<"La suma es "<<suma<<endl;
	
	return 0;
} 
