/*7. Invertir un vector e imprimirlo. */

#include<iostream>
using namespace std;

int main(){
	int n,auxiliar;
	int vector[500];
	cout<<"Digite el tamanio del vector: "; cin>>n;
	
	cout<<"\nDigite los elementos del vector: "<<endl;
	for(int i=0; i<n; i++){
		cin>>vector[i];
	}
	
	cout<<"Tu vector es: ";
	for(int i=0; i<n; i++){
		cout<<vector[i]<<" ";
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1-i; j++){
			auxiliar = vector[j];
			vector[j] = vector[j+1];
			vector[j+1] = auxiliar;
		}
	}
	
	cout<<"\nTu vector invertido es: "<<endl;
	for(int i=0; i<n; i++){
		cout<<vector[i]<<" ";
	}
	
	return 0;
}
