/*9. Rotar las componentes de un vector una posición hacia la derecha.  */

#include<iostream>
using namespace std;
int main (){
	int n;
	int vector[300];
	cout<<"Digite el numero de vectores: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite el vector de la posicion "<<i<<": "; 
		cin>>vector[i];
	}
	
	
	return 0;
}
