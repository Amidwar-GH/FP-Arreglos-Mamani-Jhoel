/*5. Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.*/

#include<iostream>
using namespace std;

int main(){
	int n;
	int numeros[100];
	cout<<"Cuantos numeros va digitar?";
	cin>>n;
	
	cout<<"DIGITE LOS NUMEROS."<<endl;
	for(int i=0; i<n; i++){
		cout<<"Digite el numero "<<"["<<i+1<<"]"<<endl;
		cin>>numeros[i];
	}
	
	
	return 0;
}
