/*8. Comprobar si un número de 10 cifras es capicúa usando un vector.*/

#include<iostream>
using namespace std;

int main(){
	//int n;
	int numeros[150];
	
	
	for(int i=0; i<10; i++){
		cout<<"Digite el numero "<<i+1<<endl;
		cin>>numeros[i];
	}
	
	cout<<"Vamos a verificar si el numero ";
	for(int i=0; i<10; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<" es o no es capicua.";
	
	bool Verificador = true;
	for(int i=0; i<10/2; i++){
		if(numeros[i] != numeros[10-1-i]){
			Verificador = false;
			break;  //<-- Para romper el bucle
		}
	}
	
	if(Verificador == false){
		cout<<"\nEl numero ";
			for(int i=0; i<10; i++){
				cout<<numeros[i]<<" ";
			}
			cout<<"no es capicua.";
	}else{
		if(Verificador == true){
			cout<<"\nEl numero ";
			for(int i=0; i<10; i++){
				cout<<numeros[i]<<" ";
			}
			cout<<" es capicua.";
		}
	}
	
	
	return 0;
}
