#include <iostream>
#include <cmath>

using namespace std;

// Función para calcular el logaritmo con una base especificada
double logBase(double a, double base) {
    if (base <= 0) {
        cerr << "Error: La base debe ser un numero positivo." <<endl;
        return NAN; // Devuelve No es un Número si la base no es válida
    }
    return log(a) / log(base);
}


 // Función para calcular el logaritmo con una raíz como base
double logRoot(double a, double root) {
    if (root <= 0) {
        cerr << "Error: La raíz debe ser un numero positivo." <<endl;
        return NAN; // Devuelve No es un Número si la raíz no es válida
    }
    return logBase(a, pow(root, 1.0 / root));
}


 // Función para calcular el logaritmo con una fracción como base
double logFraction(double a, double nume, double deno) {
    if (deno == 0) {
        cerr << "Error: El denominador no puede ser cero." <<endl;
        return NAN; // Devuelve No es un Número si el denominador es cero
    }
    return logBase(a, nume / deno);
}

int main (){
	
	char respuesta;
	int opcion;
	double x;
	double base;
	double nume;
	double deno;
	double root;
	double resultado;
	 
	do{
	    cout << "Bienvenido a la calculadora de logaritmos"<<endl;
	    cout << "1. Calcular logaritmo con una base espesificada"<<endl;
	    cout << "2. Calcular logaritmo con una raiz como base"<<endl;
	    cout << "3. Calcular logaritmo con una fraccion como base"<<endl;
	    cout << "Ingrese una opcion:";
	    cout << endl;
	    cin >> opcion;
	            	    
	    if (opcion == 1) {
	        cout << "ingrese un numero: ";
	        cin >> x;
	        cout << "Ingrese la base: ";
			cin >> base;
			
	        resultado = logBase(x,  base);
	        cout << "El resultado del log ingresado es: " << resultado <<endl;
	            	        	
		} else if (opcion == 2) {
			cout << "Ingrese un numero: ";
			cin >> x;
			cout << "Ingrese una raiz: ";
			cin >> root;
				
			resultado = logRoot(x , root);
			cout << "El resultado del log en base de raiz es: "<<resultado <<endl;
						    	
		} else if (opcion == 3) {
			cout << "Ingrese un numero: ";
			cin >> x;
			cout << "Ingrese un numerador: ";
			cin >> nume;
		    cout << "Ingrese un denominador: ";
			cin >> deno;
								
			resultado = logFraction(x, nume, deno);
			cout << " El resultado del  log en base de fraccion es : " << resultado <<endl;
								
			} else{
			    cout << "ERROR! Esta opcion no esta disponible"<<endl; 
			}
							// Fin de la calculadora de logaritmos...
		
		cout << endl;
    	
    	cout << "¿ Desea volver a ejecutar la calculadora ? (s/n): ";
    	cin >> respuesta;
	}while  (respuesta == 's' || respuesta == 'S');
	 
	cout << endl;
	cout << "Gracias por utilizar nuestra calculadora";
	cout << endl;
	  
	return 0;
}