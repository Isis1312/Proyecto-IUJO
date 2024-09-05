#include <iostream>
#include <string>
#include <cstdlib>     //Esta libreria es para abrir archivos
#include <cmath>      //Esta libreria de matematicas
#include <fstream>
#include <cstdio>

using namespace std;

int main() {
	
	/*
	Aqui vas a colocar las variables
	de todo el codigo que vas a hacer
	*/
	
	int opcion_idioma;
	char opcion_ciclo;
	
	do{
		cout << "***************************************"<<endl;
		cout << "****    Bienvenido al proyecto    *****"<<endl;
		cout << "***************************************"<<endl;
		
		cout << "En que idioma desea continuar?"<<endl;
		cout << "1. Español "<<endl;
		cout << "2. Ingles "<<endl;
		cout << "3. Salir "<<endl;          //El switch es igual que el if, else if y el else pero mas comodo de usar
		cin >> opcion_idioma;
		cout << endl;
		
		switch(opcion_idioma) {    //Cada case termina con un break para que el programa sepa hasta donde llega es case
			case 1:
				cout << "Bienvenido al Programa en Español"<<endl;
				cout << endl;
				cout << endl;
				
				cout << "**************************************"<<endl;
				cout << "****            INDICE            ****"<<endl;
				cout << "**************************************"<<endl;
				cout << endl;
				
				break;
				
			case 2:
				cout << "Welcome to the program in English"<<endl;
				cout << endl;
				cout << endl;
				
				cout << "**************************************"<<endl;
				cout << "****             INDEX            ****"<<endl;
				cout << "**************************************"<<endl;
				cout << endl;
				
				break;
				
			case 3:
				cout << "Gracias por Haber ingresado al proyecto"<<endl;
				break;
	default:
		cout << "Opcion no valida x_x intente de nuevo"<<endl;
		return 1;
}
		
		cout << endl;
		cout << "Desea volver a ejecutar el programa? (S/N)"<<endl;
		cin >> opcion_ciclo;
		cout << endl;
	}while (opcion_ciclo == 's' or opcion_ciclo == 'S');
	
	cout << endl;
	cout << "Gracias por utilizar nuestro proyecto"<<endl;
	cout << endl;
	
    return 0;
}