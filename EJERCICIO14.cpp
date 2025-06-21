/*14. Generar la función mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de String.h  */

#include<iostream>
using namespace std;


//<aca si ponemos es [] porque va recibir un arreglo de cierto tamaño>
void mistrcat(char str1[] , char str2[]){
	
	//aca vamos a encontrar el '\0' para saber la posicion final
	int i=0;
	while(str1[i] != '\0'){
		i++;
	}
	
	//ordenando los valores de lo arrays
	int j=0;
	while(str2[j] != '\0'){  //<-- aca vamos a recorres hasta que encuentre el nulo 
		str1[i] = str2[j];   //<-- aca designamos que si poe ejemplo en el anterior el nulo ('\0') acabo en la posicion 3 apartir de ahi vamos a copiar el str2
		i++;				 //<-- aca vamos a avanzar de posicion en el array [1][1+1=2][2+1=3] por ejemplo y para que con dcada iteracion copiemos el valor de str2 en un casillero en blanco	
		j++;					//<-- aca sumamos j para que avanze un casilla j
	}
	
	str1[i]= '\0';  //<-- al final del arreglo agregamos el '\0' para indicar el termino del array.
}

int main(){
	char str1[100];
	char str2[100];
	
	cout<<"Digite la primera palabra: "; 
	cin>>str1;
	cout<<"Digite la segunda palabra: ";
	cin>>str2;
	
	mistrcat( str1, str2);  //<--en el llamado de la funcion solo ponemos el nombre del arreglo mas no lo corchetes
	
	cout<<"El resultado de mistrcat es "<<str1;
	
	return 0;
}



/* entrada = hola, mundo
   salida = holamundo*/
