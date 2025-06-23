/*18. Dada una frase comprobar si el balanceo de los paréntesis es correcto. Es decir, “(ccc(ccc)cc((ccc(c))))” es 
correcto, pero “)ccc(ccc)cc((ccc(c)))(“ no lo es, aunque tenga el mismo número de paréntesis abiertos que 
cerrados.*/

#include<iostream>
using namespace std;

int main(){
	bool Validador = true;
	int C=0;
	char texto[500];
	cout<<"DIGITE EL TEXTO QUE CONTENGA PARENTESIS: ";
	cin.getline(texto,500);
	
	int i=0;
	while(texto[i]!= '\0'){
		if(texto[i] == '('){
			C=C+1;
		}else if(texto[i] == ')'){
			C=C-1;
			
			if(C<0){
				Validador = false;
				break;
			}
		}
		i++;
	}
	
	if(C != 0){
		Validador = false;
	}
	
	if(Validador == true){
		cout<<"El texto esta correctamente escrito.";
	}else if(Validador == false){
		cout<<"El texto esta incorrectamente escrito.";
	}
	
	return 0;
}

