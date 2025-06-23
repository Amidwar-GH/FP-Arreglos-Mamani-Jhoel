/*4. Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos. */
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n;
	cout<<"Cuantos nombres va digitar?: ";
	cin>>n;
	char nombres[100][30]; //<-- 100 nombres de longitud 30
	
	for(int i=0; i<n; i++){
		cout<<"Digite el nombre: ";
		cin>>nombres[i];
	}
	
	//metodo de la burbuja con la libreria
	char comodin[30];
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(nombres[i],nombres[j])>0){
				strcpy(comodin,nombres[i]);
				strcpy(nombres[i], nombres[j]);
				strcpy(nombres[j], comodin);
			}
		}
	}
	
	
	cout<<"\nEL REORDENAMIENTO ES "<<endl;
	cout<<"-----------------------------------------"<<endl;
	for(int i=0; i<n; i++){
		cout<<nombres[i]<<endl;
	}
	
	return 0;
}
