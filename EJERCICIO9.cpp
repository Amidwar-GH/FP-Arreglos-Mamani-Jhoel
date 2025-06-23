/*9. Rotar las componentes de un vector una posición hacia la derecha.  */

#include<iostream>
using namespace std;
int main (){
	int ultimaPosicion;
	int n;
	int vector[300];
	cout<<"Digite el numero de vectores: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite el vector de la posicion "<<i<<": "; 
		cin>>vector[i];
	}
	
	
	ultimaPosicion = vector[n-1];
	for(int i=n-1; i>0; i--){
		vector[i] = vector[i-1];
	}
	
	vector[0] = ultimaPosicion;
	
	cout<<"\nEl vector con una posicion a la derecha es ";
	for(int i=0; i<n; i++){
		cout<<vector[i]<<" ";
	}
	
	
	
	return 0;
}
