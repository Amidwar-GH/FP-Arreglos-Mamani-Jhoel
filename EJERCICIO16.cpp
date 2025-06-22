/*16. Leer una l�nea de entrada. Descartar todos los s�mbolos excepto los d�gitos. Convertir la cadena de d�gitos en 
un entero y fijar el valor del entero a la variable n y finalmente sumarle 2 (las funciones atoi y isdigit te pueden 
ayudar para este prop�sito) Ejemplo: �En aproximadamente 120 d�as llegaremos al a�o 2022 y festejaremos� 
1202022 -> 1202024*/

#include<iostream>
#include<cctype>
#include<cstdlib>
using namespace std;

int main(){
	char enunciado[500];
	char numeros[500];
	
	cout<<"Digite un enunciado: ";
	cin.getline(enunciado,150);
	
	
	int i,j;
	//<aca rrecorremos el arreglo hasta que encuentre el vac�o>
	while(enunciado[i] != '\0'){
		if(isdigit(enunciado[i])){ //<-- si encuentra un digito en la posicion i
			numeros[j] = enunciado[i];  //<-- lo guarda en el arreglo que conservara solo d�gitos
			j=j+1;                    //<-- se actualiza el valor
		}
		i=i+1;						//<-- se actualiza el valor
	}
	numeros[j] = '\0';                //<--aca se agrega el vac�o en el nuevo arreglo
	
	
	
	return 0;
}
