/*1. Convertir palabras a mayúsculas iniciales: "cáceres patrimonio de la humanidad" ? "Cáceres Patrimonio De 
La Humanidad" */

#include<iostream>
using namespace std;

int main(){
	bool RenovacionP;
	int i = 0;
	char frase[500];
	char resultado[500];
	cout<<"Digite la frase a convertir: ";
	cin.getline(frase,500);
	
	
	RenovacionP = true;
	while(frase[i] != '\0'){
		if(frase[i] == ' '){
			resultado[i] = ' ';
			RenovacionP = true; 
		}else{
			if(RenovacionP == true){
				resultado[i] = toupper(frase[i]);
				RenovacionP = false;
			}else{
				resultado[i] = frase[i];
			}
		}
		i=i+1;
	}
	
	resultado[i] = '\0'; 
	
	
	return 0;
}
