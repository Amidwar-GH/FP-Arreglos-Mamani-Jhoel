/*12. Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, 
false en caso contrario. */

#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[n];
	bool orden;
	
	cout<<"Digite la cantidad de elementos de su arreglo: "; cin>>n;
		
	for(int i=0; i<n; i++){
		cout<<"Digite el elemento "<<i+1<<endl;
		cin>>arr[i];
	}
	
	return 0;
}
