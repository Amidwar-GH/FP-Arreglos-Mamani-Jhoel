/*15. Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las cadenas 
son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de String.h*/

#include<iostream>
using namespace std;

int mistrcmp(char str1[], char str2[]){
	
	//comparamos cadenas mientras tengan la misma cantidad de valores
	int i;
	while(str1[i] != '\0' && str2[i] != '\0'){
		if(str1[i] > str2[i]){
			return 1;
		}else if(str1[i] < str2[i]){
			return -1;
		}
		i=i+1;
	}
	
	
	if(str1[i] == '\0' && str2[i] == '\0'){
		return 0;
	}else if(str1[i] == '\0'){
		return -1;
	}else{
		return 1;
	}

}


int main(){
	int comparacion;
	char str1[100];
	char str2[100];
	
	cout<<"Digite la primera palabra del primer arreglo: ";
	cin>>str1;
	cout<<"Digite la segunda palabra del segundo arreglo: ";
	cin>>str2;
	
	cout<<"------------------------------------------------------"<<endl;
	cout<<"VAMOS A COMPARAR LAS DOS CADENAS...."<<endl;
	
	comparacion = mistrcmp(str1, str2); // <-- aca vamos a llamar a la funcion nos va retornar un valor
	
	//tomando en cuenta el codico ascii
	
	if(comparacion == 0){
		cout<<"["<<comparacion<<"]"<<" Las cadenas son iguales."<<endl;
	}else if(comparacion == 1){
		cout<<"["<<comparacion<<"]"<<" La primera cadena es mayor a la segunda cadena."<<endl;
	}else if(comparacion == -1){
		cout<<"["<<comparacion<<"]"<<" La segunda cadena es mayor a la primera cadena."<<endl;
	}
	return 0;
}
