/*2. Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada.*/

#include<iostream>
using namespace std;

int main(){
	char frase[500];
	cout<<"Digite una frase: ";
	cin.getline(frase,500);
	
	int i=0;
	
	while(frase[i] != '\0'){
		if(frase[i] == ' '){
			cout<<endl;
		}else{
			cout<<frase[i];
		}
		i++;
	}
	
	
	return 0;
}
  
