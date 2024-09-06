#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>

using namespace std;

void idioma_menu(){
	std::cout << "****    Bienvenido al proyecto    *****"<<endl;
	std::cout << "¿ En que idioma desea continuar ?"<<endl;
	std::cout << "1. Español "<<endl;
	std::cout << "2. Ingles "<<endl;
	std::cout << "3. Salir "<<endl;   
	std::cout << "Ingrese una opción: ";
}

void menu_principal_es(){
	std::cout << "Bienvenido al Programa en Español"<<endl;
	std::cout << "    Elije una opcion " <<endl;
	std::cout << "1. Revista: Nube de Firewall " <<endl;
	std::cout << "2. Ayuda al sistema " <<endl;
	std::cout << "3. Calculadora de algoritmos" <<endl;
	std::cout << "4. Link a los videos de los integrantes" <<endl;
	std::cout << "5. Creditos" <<endl;
	std::cout << "6. Juego: EL AHORCADO" <<endl;
	std::cout << "7. Volver al menu de idiomas" <<endl;
	std::cout << "Ingrese una opción: ";   
	std::cout << endl;
}
void menu_revista_es(){
		std::cout << "Bienvenido a  Nube de Firewall "<<endl;
		std::cout << " Escoge una opción " <<endl;			
		std::cout << "1. Portada " <<endl;
		std::cout << "2. Indice " <<endl;
		std::cout << "3. Editorial" <<endl;
		std::cout << "4. artículo: ciberseguridad " <<endl;
		std::cout << "5. artículo: La IA ¿Un arma de doble filo?" <<endl;
		std::cout << "6. artículo: Algoritmos: mas alla de laas formulas" <<endl;
		std::cout << "7. artículo: 8 maneras de mejorar tu ciberseguridad" <<endl;
		std::cout << "8. Seccion de entretenimeinto" <<endl;
		std::cout << "9. Volver al menu principal" <<endl;
		std::cout << endl;
	}
//funcion abrir pdf	
void mostrar_pdf(int pageNumber){
	const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files\\Adobe\\Acrobat DC\\Acrobat\\Acrobat.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);
	system(command);
}

void abrir_video(){
	const char* videoFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\video.mp4";  
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", videoFile);
	system(command);
}

int main() {

	// comando acentos y Ñ
	system("chcp 65001");

	// Variables menu idiomas

	int op_idiomas;
	bool volver_menu_principal = false; // valor logico falso
	bool volver_menu_idiomas = false;

	//Variables menu principal español 
	int	op_menu_principal;

	//Variable sub menu revista
	int op_menu_revista;

	//conectivo logico
	do{
		// BORRAR CMD
		system("CLS");
		idioma_menu();
		std::cin >> op_idiomas;
		
		// Menu principal español
		
		switch(op_idiomas) { 
			case 1:
			do{
				system("CLS");
				menu_principal_es();
				std::cin >> op_menu_principal;

				switch (op_menu_principal){

					case 1: 
						// DO = SI CONDICIONAL
						do{
							system("CLS");
							menu_revista_es();
								std::cin >> op_menu_revista;
								
								switch (op_menu_revista){
									case 1: 
										mostrar_pdf(1);
										break;
									case 2: 
										mostrar_pdf(2);
										break;
									case 3: 
										mostrar_pdf(1);
										break;
									case 4: 
										mostrar_pdf(1);
										break;
									case 5: 
										mostrar_pdf(1);
										break;
									case 6: 
										mostrar_pdf(1);
										break;
									case 7: 
										mostrar_pdf(1);
										break;
									case 8: 
										mostrar_pdf(1);
										break;
									case 9: 
										volver_menu_principal = true; //valor logico verdadero
										break;
									default:
										std::cout << "opción invalida. Intente nuevamente." << endl;
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
						abrir_video();
						break;
					case 5 :
						std::cout << " Creditos " <<endl;
						break;
					case 6 :
						cout<< " Juego " <<endl;
						break;
					case 7 :
						volver_menu_idiomas = true;
						break;	
					default:
					std::cout << "opción invalida. Intentelo nuevamente." << endl;
				}	

			}while (!volver_menu_idiomas);
			break;
	
			// menu principal ingles
			case 2:
				std::cout << "Welcome to the program in English"<<endl;
				break;
			// salir del programa
			case 3: 
				system("CLS");
				std::cout << "Saliendo del programa..." << endl;
        		return 0;
      		default:
	  			std::cout << "opción invalida. Intentelo nuevamente." << endl;
	 	} 	
	} while (true);

  return 0;
} 