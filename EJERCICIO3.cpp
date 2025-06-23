/*3. Contar la ocurrencia de una letra específica en una cadena de entrada*/

#include<iostream>
using namespace std;

int main(){
	int C=0;
	char cadena[500];
	char buscador;
	cout<<"Digite una frase: ";
	cin.getline(cadena,500);
	cout<<"Que letra desea buscar?: "; cin>>buscador;
	
	
	int i=0;
	while(cadena[i] != '\0'){
		if(cadena[i] == buscador){
			C=C+1;
		}
		i++;
	}
	
	cout<<"La letra "<<buscador<<" se repite "<<"["<<C<<"]"<<" veces"<<endl;
	return 0;
} 
