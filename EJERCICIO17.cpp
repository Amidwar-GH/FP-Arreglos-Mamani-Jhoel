/*17. Escriba una función que dado el nombre completo de una persona y un apellido, compruebe si el apellido 
pertenece a esa persona.*/

#include<iostream>
using namespace std;

int main(){
	bool veredicto;
	char nombresCompletos[300];
	char apellido[300];
	
	cout<<"Digite su nombre completo y el apellido: ";
	cin.getline(nombresCompletos,300);
	cout<<"Digite el apellido a buscar: ";
	cin.getline(apellido,300);
	
	veredicto = funcionApellido(nombresCompletos, apellido);
	
	if(Veredicto == true){
		cout<<"El apellido si pertenece a esa persona.";
	}else{
		cout<<"El apellido no se ha encontrado.";
	}
	
	
	return 0;
}
