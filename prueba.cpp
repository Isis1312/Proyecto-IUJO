#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>

using namespace std;

// FUNCIONES PARA MENU ESPAÑOL
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
//funcion abrir pdf	ESPAÑOL
void mostrar_pdf(int pageNumber){
	const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files\\Adobe\\Acrobat DC\\Acrobat\\Acrobat.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);
	system(command);
}
// VIDEO ESPAÑOL
void abrir_video(){
	const char* videoFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\video.mp4";  
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", videoFile);
	system(command);
}
// FUNCIONES MENU INGLES
void menu_principal_in(){
	std::cout << "Welcome to the Program in English" << std::endl;
    std::cout << "    Choose an option " << std::endl;
    std::cout << "1. Magazine: Firewall Cloud " << std::endl;
    std::cout << "2. System Help " << std::endl;
    std::cout << "3. Algorithm Calculator" << std::endl;
    std::cout << "4. Link to team member videos" << std::endl;
    std::cout << "5. Credits" << std::endl;
    std::cout << "6. Game: THE HANGMAN" << std::endl;
    std::cout << "7. Return to the language menu" << std::endl;
    std::cout << "Enter an option: ";   
    std::cout << std::endl;
}

void revista_menu_in(){
	std::cout << "Welcome to Firewall Cloud" << std::endl;
    std::cout << "Choose an option " << std::endl;         
    std::cout << "1. Cover " << std::endl;
    std::cout << "2. Table of Contents " << std::endl;
    std::cout << "3. Editorial" << std::endl;
    std::cout << "4. Article: Cybersecurity " << std::endl;
    std::cout << "5. Article: AI - A Double-Edged Sword?" << std::endl;
    std::cout << "6. Article: Algorithms - Beyond the Formulas" << std::endl;
    std::cout << "7. Article: 8 Ways to Improve Your Cybersecurity" << std::endl;
    std::cout << "8. Entertainment Section" << std::endl;
    std::cout << "9. Return to the main menu" << std::endl;
    std::cout << std::endl;
}
//funcion abrir pdf	INGLES
void mostrar_pdf_in(int pageNumber){
	const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\pp.pdf";  // Ruta de pdf para abrir
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files\\Adobe\\Acrobat DC\\Acrobat\\Acrobat.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);
	system(command);
}
// VIDEO INGLES
void abrir_video_in(){
	const char* videoFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\video.mp4";  
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", videoFile);
	system(command);
}

void abrir_calcu_in(){
	const char* file = "calculadorain.exe";  
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", file);
	system(command);
}


int main() {

	// comando acentos y Ñ
	system("chcp 65001");

	// Variables menu idiomas
	int op_idiomas;

	//variables volver menu ESPAÑOL
	bool volver_menu_principal = false; // valor logico falso
	bool volver_menu_idiomas = false;

	//Variables menu principal español 
	int	op_menu_principal;

	//Variable sub menu revista
	int op_menu_revista;

	// Variable menu principal ingles
	int op_menu_principal_in;
	int op_menu_revista_in;

	//Variables volver menu INFLES
	bool volver_menu_idomas_in = false;
	bool volver_menu_principal_in = false; 

		//INICIA EL PROGRAMA
	//conectivo logico
	do{
		// BORRAR CMD
		system("CLS");
		// MENU DE IDOMAS
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
							// MENU REVISTA EN ESPAÑOL
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
										system("CLS");
										std::cout << "opción invalida. Intente nuevamente." << endl;
										system("pause");
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
					system("CLS");
					std::cout << "Opción invalida. Intentelo nuevamente." << endl;
					system("pause");
				}	

			}while (!volver_menu_idiomas);
			break;
	
			// menu principal ingles
			case 2:
				do
				{
				system("CLS");
				menu_principal_in();
				std::cin >> op_menu_principal_in;

				switch (op_menu_principal_in){

					case 1 :
						do{		
							system("CLS");
							revista_menu_in();
							std::cin >> op_menu_revista_in;

							switch (op_menu_revista_in){
								case 1 :
									mostrar_pdf_in(1);
									break;
								case 2 :
									mostrar_pdf_in(1);
									break;
								case 3 :
									mostrar_pdf_in(1);
									break;
								case 4 :
									mostrar_pdf_in(1);
									break;
								case 5 :
									mostrar_pdf_in(1);
									break;
								case 6 :
									mostrar_pdf_in(1);
									break;
								case 7 :
									mostrar_pdf_in(1);
									break;
								case 8 :
									mostrar_pdf_in(1);
									break;
								case 9 :
									volver_menu_principal_in = true;
									break;
							}

						} while (!volver_menu_principal_in);
						break;

					case 2 :
						std::cout << " Ayuda al sistema " <<endl;
						break;
					case 3 :
						abrir_calcu_in();
						break;
					case 4 :
						abrir_video_in();
						break;
					case 5 :
						std::cout << " Creditos " <<endl;
						break;
					case 6 :
						cout<< " Juego " <<endl;
						break;
					case 7 :
						volver_menu_idomas_in = true;
						break;
					default:
					system("CLS");
					std::cout << "Invalid option. Please try again.." << endl;
					system("pause");
			
				}						

			} while (!volver_menu_idomas_in);
			break;

			// salir del programa
			case 3: 
				system("CLS");
				std::cout << "Saliendo del programa..." << endl;
        		return 0;
      		default:
				system("CLS");
	  			std::cout << "Opción invalida. Intentelo nuevamente." << endl;
				system("pause");
	 	} 	
	} while (true);

  return 0;
} 