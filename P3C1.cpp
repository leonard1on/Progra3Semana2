#include <iostream>
using namespace std;
int menu();

int main(){

	return 0;
}


int menu(){
	int opcion=0;
	while(opcion=0){
		cout <<"- Menu Principal -" << endl
		<<"1. Leer Elementos" << endl
		<<"2.Imprimir Elementos" << endl
		<<"Salir" << endl
		<<"Selecione una opcion: ";
		cin >> opcion;
	}
	return opcion;	
}


