#include <iostream>


using namespace std;

int main() {
	
	// Variables menu idiomas

	int op_idiomas;
	bool volver_menu_principal = false;
	bool volver_menu_idiomas = false;



	//Variables menu principal español 
	int	op_menu_principal;
	//Variable sub menu revista

	int op_menu_revista;


	do{
		
		std::cout << "****    Bienvenido al proyecto    *****"<<endl;
		std::cout << "¿ En que idioma desea continuar ?"<<endl;
		std::cout << "1. Español "<<endl;
		std::cout << "2. Ingles "<<endl;
		std::cout << "3. Salir "<<endl;   
		std::cout << "Ingrese una opcion: ";      
		std::cin >> op_idiomas;
		
		// Menu principal español
		
		switch(op_idiomas) { 
			case 1:
			do{
				std::cout << "Bienvenido al Programa en Español"<<endl;
				std::cout << "    Elije una opcion " <<endl;
				std::cout << "1. Revista: Nube de Firewall " <<endl;
				std::cout << "2. Ayuda al sistema " <<endl;
				std::cout << "3. Calculadora de algoritmos" <<endl;
				std::cout << "4. Link a los videos de los integrantes" <<endl;
				std::cout << "5. Creditos" <<endl;
				std::cout << "6. Volver al menu de idiomas" <<endl;
				std::cout << "Ingrese una opción: ";   
				std::cout << endl;
				std::cin >> op_menu_principal;

				switch (op_menu_principal){

					// SUB MENU REVISTA
					case 1: 
						// DO = SI CONDICIONAL
						do{
							std::cout << "Bienvenido a  Nube de Firewall "<<endl;
							std::cout << " Escoge una opcion " <<endl;
							std::cout << "1. Portada " <<endl;
							std::cout << "2. Indice " <<endl;
							std::cout << "3. Editorial" <<endl;
							std::cout << "4. Articulo: ciberseguridad " <<endl;
							std::cout << "5. Articulo: La IA ¿Un arma de doble filo?" <<endl;
							std::cout << "6. Articulo: Algoritmos: mas alla de laas formulas" <<endl;
							std::cout << "7. Articulo: 8 maneras de mejorar tu ciberseguridad" <<endl;
							std::cout << "8. Seccion de entretenimeinto" <<endl;
							std::cout << "9. Volver al menu principal" <<endl;
							std::cout << endl;
							std::cin >> op_menu_revista;

							switch (op_menu_revista){
								case 1: 
									std::cout << " Mostrar portada " <<endl;
									break;
								case 2: 
									std::cout << " Mostrar indice " <<endl;
									break;
								case 3: 
									std::cout << " Mostrar editorial " <<endl;
									break;
								case 4: 
									std::cout << " Mostrar art. ciberseguridad " <<endl;
									break;
								case 5: 
									std::cout << " Mostrar ar. La IA  " <<endl;
									break;
								case 6: 
									std::cout << " Mostrar art. Algoritmos " <<endl;
									break;
								case 7: 
									std::cout << " Mostrar 8 maneras de " <<endl;
									break;
								case 8: 
									std::cout << " Mostar seccion de entrenimiento " <<endl;
									break;
								case 9: 
									volver_menu_principal = true;
									break;
								default:
									cout << "Opcion invalida. Intente nuevamente." << endl;
							}		
				
						// ! negacion 
						} while (!volver_menu_principal);
						break;

					case 2 :
						std::cout << " Ayuda al sistema " <<endl;
						break;
					case 3 :
						std::cout << " calculadora " <<endl;
						break;
					case 4 :
						std::cout << " link videos " <<endl;
						break;
					case 5 :
						std::cout << " Creditos " <<endl;
						break;
					case 6 :
						volver_menu_idiomas = true;
						break;	
					default:
					cout << "Opcion invalida. Intentelo nuevamente." << endl;
				}	

			}while (!volver_menu_idiomas);
			break;
	
			// menu principal ingles
			case 2:
				std::cout << "Welcome to the program in English"<<endl;
				break;
			// salir del programa
			case 3: 
				std::cout << "Saliendo del programa..." << endl;
        	return 0;
      		default:
	  			std::cout << "Opcion invalida. Intentelo nuevamente." << endl;
	 	} 	
	} while (true);

  return 0;
} 