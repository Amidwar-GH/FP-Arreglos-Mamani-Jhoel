/*17. Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido 
pertenece a esa persona.*/

#include<iostream>
#include<string.h>
using namespace std;

//construccion de la funcion

bool funcionApellido(char nombresCompletos[], char apellido[]){
	
	//buscamos el apellido en el areglo del nombre					//(strstr(nombresCompletos, apellido) 
	if(strstr(nombresCompletos, apellido) != NULL){   	//<BUSCAMOS SI APELLIDOS ESTA DENTRO DE NOMBRESCOMPLETOS>
		return true;
	}else{
		return false;
	}
}


int main(){
	bool veredicto;
	char nombresCompletos[300];
	char apellido[300];
	
	//llenado del arreglo
	cout<<"Digite su nombre completo y el apellido: ";
	cin.getline(nombresCompletos,300);
	cout<<"Digite el apellido a buscar: ";
	cin.getline(apellido,300);
	
	//llamado de la funcion
	veredicto = funcionApellido(nombresCompletos, apellido);
	
	if(veredicto == true){
		cout<<"El apellido si pertenece a esa persona.";
	}else{
		cout<<"El apellido no se ha encontrado.";
	}
	
	
	return 0;
}
