/*12. Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, 
false en caso contrario. */

#include<iostream>
using namespace std;

		//mandamos el array , y su tamanio
bool ArrOrdenado(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true; 
}


int main(){
	int n;
	bool orden;
	
	cout<<"Digite la cantidad de elementos de su arreglo: "; cin>>n;
	int arr[n];
		
	for(int i=0; i<n; i++){
		cout<<"Digite el elemento "<<i+1<<endl;
		cin>>arr[i];
	}
	
	orden = ArrOrdenado(arr,n);
	if(orden){
		cout<<"El arreglo no se encuentra ordenado."<<endl;
	}else{
		cout<<"El arreglo no se encuentra ordenado."<<endl;
	}
	
	return 0;
}
