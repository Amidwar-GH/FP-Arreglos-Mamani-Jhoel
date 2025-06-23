/*6. Calcular la suma de componentes de índice par e impar en un vector.*/

#include<iostream>
using namespace std;

int main(){
	int P=0,IP=0;
	int n;
	int numeros[500];
	cout<<"Digite la cantidad de numeros: "; cin>>n;
	
	//llenado del array
	for(int i=0; i<n; i++){
		cout<<i<<". ";
		cin>>numeros[i];
	}
	
	for(int i=0; i<n; i++){
		if(i%2 == 0){
			P=P+numeros[i];
		}else{
			IP=IP+numeros[i];
		}
	}
	
	cout<<"La suma de indices pares del arreglo es: "<<P<<endl;
	cout<<"La suma de indices impares del arreglo es: "<<IP<<endl;
	
	return 0;
}
