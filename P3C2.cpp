#include <iostream>
using namespace std;
int menu();
int recfac(int, int);
int recsumatoria(int,int);
int itsumatoria();
int itfactorial();
int main(){
	int opcion=0;
	do{
		opcion=menu();
		switch(opcion){
			case 1:{
					int num;
					cout<<"Ingrese un numero para sacar su factorial: ";
					cin>>num;   
					cout<<"Su respuesta es: " <<recfac(num,1) <<endl <<endl;
				   }
				   break;
			case 2:{
					cout<<"Su respuesta es: " <<itfactorial() <<endl <<endl;
				   }
				   break;
			case 3:{
					int suma;
					cout<<"Ingrese un numero para sacar su sumatoria: ";
					cin>>suma;
					cout<<"Su respuesta es: " <<recsumatoria(suma,0) <<endl <<endl;
				   }
				   break;
			case 4:{
					cout<<"Su respuesta es: " <<itsumatoria() <<endl <<endl;
				   }
				   break;
			case 5:
				   break;
		}
	}while(opcion!=5);
	return 0;
}

int menu(){
	int opcion=0;
	cout<<"- Menu -" <<endl
		<<"1. Recursiva Factorial" <<endl
		<<"2. Iterativa Factorial" <<endl
		<<"3. Recursiva Sumatoria" <<endl
		<<"4. Iterativa Sumatoria" <<endl
		<<"5. Salir del Programa " <<endl <<endl
		<<"Seleccione una opcion:";
	cin>>opcion;
	return opcion;
}

int itfactorial(){
	int resp=1;
	int num;
	cout<<"Ingrese un numero para sacar su factorial" <<endl;
	cin>>num;
	for(int i; i<=num;i++){
		resp=i*resp;
	}
	return resp;
}

int itsumatoria(){
	int resp=0;
	int num;
	cout<<"Ingrese un numero para sacar su sumatoria" <<endl;
	cin>>num;
	for(int i=0; i<=num;i++){
		resp=i+resp;
	}
	return resp;
}

int recfac(int num, int resp){
	if(num==0){
		return resp*1;
	}else{
		resp*=num;
		num--;
		return recfac(num,resp);
	}
}

int recsumatoria(int num, int suma){
	if(num==0){
		return suma;
	}else{
		suma+=num;
		num--;
		return recsumatoria(num, suma);
	}
}
