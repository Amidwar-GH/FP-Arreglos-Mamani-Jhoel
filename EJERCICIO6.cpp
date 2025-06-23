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
		cout<<i+1<<". ";
		cin>>numeros[i];
	}
	
	int j=0;
	while(numeros[j] == '\0'){
		if(numeros[j] % 2 == 0){
			P=P+numeros[j];
		}
		if(numeros[j] % 2 != 0 ){
			IP=IP+numeros[j];
		}
	}
	
	cout<<"La suma de pares es "<<P;
	
	
	return 0;
}
