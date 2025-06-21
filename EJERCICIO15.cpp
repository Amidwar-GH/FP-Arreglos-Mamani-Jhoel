/*15. Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las cadenas 
son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de String.h*/

#include<iostream>
using namespace std;

char mistrcmp(char str1[], char str2[]){
	
}



int main(){
	char comparacion;
	char str1[100];
	char str2[100];
	
	cout<<"Digite la primera palabra del primer arreglo: ";
	cin>>str1;
	cout<<"Digite la segunda palabra del segundo arreglo: ";
	cin>>str2;
	
	cout<<"------------------------------------------------------"<<endl;
	cout<<"VAMOS A COMPARAR LAS DOS CADENAS...."<<endl;
	
	comparacion = mistrcmp(str1, str2); // <-- aca vamos a llamar a la funcion nos va retornar un valor
	
	return 0;
}
