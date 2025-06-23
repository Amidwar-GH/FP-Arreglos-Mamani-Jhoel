/*5. Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.*/

#include<iostream>
using namespace std;

int main(){
	int numeromayor,numeromenor;
	int n;
	int numeros[100];
	cout<<"Cuantos numeros va digitar?";
	cin>>n;
	
	cout<<"DIGITE LOS NUMEROS."<<endl;
	for(int i=0; i<n; i++){
		cout<<"Digite el numero "<<"["<<i+1<<"]"<<endl;
		cin>>numeros[i];
	}
	
	//vamos a asumir arbitrariamente para la comparacion
	numeromayor = numeros[0];
	numeromenor = numeros[0];
	
	for(int i=1; i<n; i++){
		if(numeros[i]>numeromayor){
			numeromayor=numeros[i];
		}else if(numeros[i] < numeromenor){
			numeromenor = numeros[i];
		}
		
	}
	cout<<numeromayor<<" "<<numeromenor;
	
	
	return 0;
}
