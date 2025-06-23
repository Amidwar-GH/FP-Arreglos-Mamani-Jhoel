/*8. Comprobar si un número de 10 cifras es capicúa usando un vector.*/

#include<iostream>
using namespace std;

int main(){
	int n;
	int numeros[150];
	cout<<"Digite cuantos numeros desea guardar: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Digite el numero "<<i+1<<endl;
		cin>>numeros[i];
	}
	
	cout<<"Vamos a verificar si el numero ";
	for(int i=0; i<n; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<" es o no es capicua.";
	
	return 0;
}
