/*13. Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h  */

#include<iostream>
using namespace std;

//construimos la funcion
void mistrcpy(char llegada[], char partida[]){
	int i=0;
	while(partida[i] != '\0'){
		llegada[i] = partida[i];
		i++;
	}
	llegada[i] = '\0';
}


int main(){
	char str1[100];
	char str2[100];
	
	cout<<"Digite una palabra para str2: "; 
	cin.getline(str2,100);
	
	//hacemos llamado de la funcion
	mistrcpy(str1,str2);
	
	cout<<"La palabra final copiada de str2 a str1 es: "<<str1<<endl;
	
	return 0;
}
