/*13. Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h  */

#include<iostream>
using namespace std;

//construimos la funcion
void mistrcpy(char llegada[], char partida[]){
	int i=0;
	while(origen[i] != '\0'){
		llegada[i] = partida[i];
		i++
	}
	destino[i] = '\0';
}


int main(){
	char str1[100];
	char str2[100];
	
	cout<<"Digite una palabra: "; cin>>str2;
	//hacemos llamado de la funcion
	
	return 0;
}
