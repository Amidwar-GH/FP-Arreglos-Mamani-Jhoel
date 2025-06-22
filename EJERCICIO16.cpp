/*16. Leer una línea de entrada. Descartar todos los símbolos excepto los dígitos. Convertir la cadena de dígitos en 
un entero y fijar el valor del entero a la variable n y finalmente sumarle 2 (las funciones atoi y isdigit te pueden 
ayudar para este propósito) Ejemplo: “En aproximadamente 120 días llegaremos al año 2022 y festejaremos” 
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
	//<aca rrecorremos el arreglo hasta que encuentre el vacío>
	while(enunciado[i] != '\0'){
		if(isdigit(enunciado[i])){ //<-- si encuentra un digito en la posicion i
			numeros[j] = enunciado[i];  //<-- lo guarda en el arreglo que conservara solo dígitos
			j=j+1;                    //<-- se actualiza el valor
		}
		i=i+1;						//<-- se actualiza el valor
	}
	numeros[j] = '\0';                //<--aca se agrega el vacío en el nuevo arreglo
	
	
	
	return 0;
}
