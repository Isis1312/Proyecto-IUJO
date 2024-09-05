#include <iostream>
#include <string>
#include <cstdlib>     //Esta libreria es para abrir archivos
#include <cmath>      //Esta libreria de matematicas
#include <fstream>
#include <cstdio>

using namespace std;

int main() {
	
	// Variables

	int opcion_idioma;
	char opcion_ciclo;

	//Variables menu principal español 
	int	op_revista;
	int op_menu_1;
	int op_menu_2;
	int op_menu_3;
	int op_menu_4;
	int op_menu_5;
	int op_menu_6;

	//Variables menu revista
	int portada;
	int indice;
	int editorial;
	int art1;
	int art2;
	int art3;
	int art4;
	int juego;
	int volver_menu;
	


	do{
		std::cout << "****    Bienvenido al proyecto    *****"<<endl;
		
		std::cout << "¿ En que idioma desea continuar ?"<<endl;
		std::cout << "1. Español "<<endl;
		std::cout << "2. Ingles "<<endl;
		std::cout << "3. Salir "<<endl;          
		std::cin >> opcion_idioma;
		std::cout << endl;
		
		// Menu principal español
		switch(opcion_idioma) {   
			case 1:
				std::cout << "Bienvenido al Programa en Español"<<endl;
				std::cout << " Que deseas realizar " <<endl;
				std::cout << "1. Revista: Nube de Firewall " <<endl;
				std::cout << "2. Ayuda al sistema " <<endl;
				std::cout << "3. Calculadora de algoritmos" <<endl;
				std::cout << "4. Link a los videos de los integrantes" <<endl;
				std::cout << "5. Creditos" <<endl;
				std::cout << "6. Volver al menu de idiomas" <<endl;
				std::cout << endl;
				std::cin >> op_revista;
				std::cin >> op_menu_1;
				std::cin >> op_menu_2;
				std::cin >> op_menu_3;
				std::cin >> op_menu_4;
				std::cin >> op_menu_5;
				std::cin >> op_menu_6;

					break;

					//submenu revista

					switch (op_revista){
					case 1 :
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
						std::cin >> portada;
						std::cin >> indice;
						std::cin >> editorial;
						std::cin >> art1;
						std::cin >> art2;
						std::cin >> art3;
						std::cin >> art4;
						std::cin >> juego;
						std::cin >> volver_menu;
						
						break;
						
						//abrir revista	
									
						case 2 : // portada
							int main() ;
							// La ruta al archivo PDF
							const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
							// Numero de pagina donde se abrira
							int pageNumber = 1;

							// comando para abrir el archivo 
							char command[512];
							snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

							// ejecucion del comando 
							system(command);
							
							break;
						
						case 3 : // idice
							int main() ;
							// La ruta al archivo PDF
							const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
							// Numero de pagina donde se abrira
							int pageNumber = 2;

							// comando para abrir el archivo 
							char command[512];
							snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

							// ejecucion del comando 
							system(command);
							
							break;

						case 4 : // editorial
							int main() ;
							// La ruta al archivo PDF
							const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
							// Numero de pagina donde se abrira
							int pageNumber = 3;

							// comando para abrir el archivo 
							char command[512];
							snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

							// ejecucion del comando 
							system(command);
							
							break;
						
						case 5 : // articulo ciberseguridad
							int main() ;
							// La ruta al archivo PDF
							const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
							// Numero de pagina donde se abrira
							int pageNumber = 4;

							// comando para abrir el archivo 
							char command[512];
							snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

							// ejecucion del comando 
							system(command);
							
							break;

						case 6 : // articulo IA
							int main() ;
							// La ruta al archivo PDF
							const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
							// Numero de pagina donde se abrira
							int pageNumber = 6;

							// comando para abrir el archivo 
							char command[512];
							snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

							// ejecucion del comando 
							system(command);
							
							break;

							case 7 : // articulo LOGARITMOS
							int main() ;
							// La ruta al archivo PDF
							const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
							// Numero de pagina donde se abrira
							int pageNumber = 7;

							// comando para abrir el archivo 
							char command[512];
							snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

							// ejecucion del comando 
							system(command);
							
							break;

							case 8 : // TIPS
							int main() ;
							// La ruta al archivo PDF
							const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
							// Numero de pagina donde se abrira
							int pageNumber = 9;

							// comando para abrir el archivo 
							char command[512];
							snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

							// ejecucion del comando 
							system(command);
							
							break;

							case 9 : // Juego
							int main() ;
							// La ruta al archivo PDF
							const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
							// Numero de pagina donde se abrira
							int pageNumber = 9;

							// comando para abrir el archivo 
							char command[512];
							snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

							// ejecucion del comando 
							system(command);
							
							break;
						
						
						
						
						default:
					
				
							break;
						}		
					
					default:
						break;
					}
				std::cout << "****            INDICE            ****"<<endl;
				std::cout << endl;
				
				break;
				
			case 2:
				std::cout << "Welcome to the program in English"<<endl;
				std::cout << endl;
				std::cout << endl;
							
				std::cout << "****             INDEX            ****"<<endl;
				std::cout << endl;
				
				break;
				
			case 3:
				std::cout << "Gracias por Haber ingresado al proyecto"<<endl;
				break;
	default:
		std::cout << "Opcion no valida, por favor intente de nuevo"<<endl;
		return 1;
}
		
		std::cout << endl;
		std::cout << "Desea volver a ejecutar el programa? (S/N)"<<endl;
		std::cin >> opcion_ciclo;
		std::cout << endl;
	}while (opcion_ciclo == 's' or opcion_ciclo == 'S');
	
	std::cout << endl;
	std::cout << "Gracias por utilizar nuestro proyecto"<<endl;
	std::cout << endl;
	
    return 0;
