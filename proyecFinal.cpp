#include <iostream> 
#include <stdio.h> 
#include <stdlib.h>


using namespace std;

// FUNCIONES PARA MENU ESPAÑOL
void idioma_menu()
{
	cout << "****    Bienvenido al proyecto    *****" << endl;
	cout << "¿ En que idioma desea continuar ?" << endl;
	cout << "1. Español " << endl;
	cout << "2. Ingles " << endl;
	cout << "3. Salir " << endl;
	cout << "Ingrese una opción: ";
}

void menu_principal_es()
{
	cout << "Bienvenido al programa en Español" << endl;
	cout << "    Elije una opción " << endl;
	cout << "1. Revista: Nube de Firewall " << endl;
	cout << "2. Ayuda al sistema " << endl;
	cout << "3. Calculadora de logaritmos" << endl;
	cout << "4. Video explicativo." << endl;
	cout << "5. Juego: EL AHORCADO" << endl;
	cout << "6. Créditos" << endl;
	cout << "7. Volver al menú de idiomas" << endl;
	cout << "Ingrese una opción: ";
}

void menu_revista_es()
{
	cout << "Bienvenido a  Nube de Firewall " << endl;
	cout << " Escoge una opción " << endl;
	cout << "1. Portada " << endl;
	cout << "2. Indice " << endl;
	cout << "3. Editorial" << endl;
	cout << "4. Artículo: Amenazas Digitales y Protección Empresarial: Caso Xelar " << endl;
	cout << "5. Artículo: La IA ¿Un arma de doble filo?" << endl;
	cout << "6. Artículo: Logaritmos: mas alla de laas formulas" << endl;
	cout << "7. Artículo: 8 maneras de mejorar tu ciberseguridad" << endl;
	cout << "8. Sección de entretenimeinto" << endl;
	cout << "9. Volver al menú principal" << endl;
	cout << "Ingrese una opción: ";
}
// funcion abrir pdf	ESPAÑOL
void mostrar_pdf(int num_pagina)
{
	const char *pdfFile = "..\\recursos\\revista_es.pdf"; // Ruta de pdf para abrir
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files\\Adobe\\Acrobat DC\\Acrobat\\Acrobat.exe\" /A \"page=%d\" \"%s\"", num_pagina, pdfFile);
	system(command);
}
// VIDEO ESPAÑOL
void abrir_video()
{
	const char *videoFile = "..\\recursos\\video_es.mp4";
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", videoFile);
	system(command);
}

// abrir juego ESPAÑOL
void abrir_juego_es()
{
	const char *file = "juego.exe";
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", file);
	system(command);
}
// abrir ayuda al sistema español
void pdf_ayuda_es(){
	const char *pdfFile = "..\\recursos\\ayudad_es.pdf"; 
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", pdfFile);
	system(command);
}
//abrir calculadora español
void abrir_calcu_es()
{
	const char *file = "calculadora_es.exe";
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", file);
	system(command);
}
// abrir creditos
void creditos(){
	const char *creditoFile = "..\\recursos\\creditos.pdf"; 
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", creditoFile);
	system(command);
}

// FUNCIONES MENU INGLES
void menu_principal_in()
{
	cout << "Welcome to the Program in English" << endl;
	cout << "    Choose an option " << endl;
	cout << "1. Magazine: Firewall Cloud " << endl;
	cout << "2. System Help " << endl;
	cout << "3. Algorithm Calculator" << endl;
	cout << "4. Explanatory video" << endl;
	cout << "5. Game: THE HANGMAN" << endl;
	cout << "6. Credits" << endl;
	cout << "7. Return to the language menu" << endl;
	cout << "Enter an option: ";
}

void revista_menu_in()
{
	cout << "Welcome to Firewall Cloud" << endl;
	cout << "Choose an option " << endl;
	cout << "1. Cover " << endl;
	cout << "2. Table of Contents " << endl;
	cout << "3. Editorial" << endl;
	cout << "4. Article: Digital Threats and Business Protection: Xelar case" << endl;
	cout << "5. Article: AI - A Double-Edged Sword?" << endl;
	cout << "6. Article: Algorithms - Beyond the Formulas" << endl;
	cout << "7. Article: 8 Ways to Improve Your Cybersecurity" << endl;
	cout << "8. Entertainment Section" << endl;
	cout << "9. Return to the main menu" << endl;
	cout << "Enter an option: ";
}
// funcion abrir pdf	INGLES
void mostrar_pdf_in(int num_pag)
{
	const char *pdFile = "..\\recursos\\revista_in.pdf"; 
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files\\Adobe\\Acrobat DC\\Acrobat\\Acrobat.exe\" /A \"page=%d\" \"%s\"", num_pag, pdFile);
	system(command);
}
// VIDEO INGLES
void abrir_video_in()
{
	const char *videoFile = "..\\recursos\\video_in.mp4";
	// tamaño del char
	char comando[512];
	snprintf(comando, sizeof(comando), "start \"\" \"%s\"", videoFile);
	system(comando);
}
// abrir calculadora ingles
void abrir_calcu_in()
{
	const char *calcu_in = "calculadora_in.exe";
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", calcu_in);
	system(command);
}
// abrir ayuda al sistema ingles
void pdf_ayuda_in(){
	const char *pdfFile = "..\\recursos\\ayuda_in.pdf"; 
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", pdfFile);
	system(command);
}
// abrir juego ingles
void abrir_juego_in()
{
	const char *file = "juego_in.exe";
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", file);
	system(command);
}	
// abrir creditos ingles
void creditos_in(){
	const char *creditoFile = "..\\recursos\\creditos_in.pdf"; 
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"%s\"", creditoFile);
	system(command);
}
int main()
{

	// comando acentos y Ñ
	system("chcp 65001");

	// Variables menu idiomas
	int op_idiomas;

	// variables volver menu ESPAÑOL
	bool volver_menu_principal = false; // valor logico falso
	bool volver_menu_idiomas = false;

	// Variables menu principal español
	int op_menu_principal;

	// Variable sub menu revista
	int op_menu_revista;

	// Variable menu principal ingles
	int op_menu_principal_in;
	int op_menu_revista_in;

	// Variables volver menu INFLES
	bool volver_menu_idomas_in = false;
	bool volver_menu_principal_in = false;

	// INICIA EL PROGRAMA
	// conectivo logico
	do // conectivo logico
	{
		// BORRAR CMD
		system("CLS");
		// MENU DE IDOMAS
		idioma_menu();
		cin >> op_idiomas;

		// Menu principal español

		switch (op_idiomas)
		{
		case 1:
			do
			{
				system("CLS");
				menu_principal_es();
				cin >> op_menu_principal;

				switch (op_menu_principal)
				{

				case 1:
					// DO = SI CONDICIONAL
					do
					{
						// MENU REVISTA EN ESPAÑOL
						system("CLS");
						menu_revista_es();
						cin >> op_menu_revista;

						switch (op_menu_revista)
						{
						case 1:
							mostrar_pdf(1);
							break;
						case 2:
							mostrar_pdf(2);
							break;
						case 3:
							mostrar_pdf(3);
							break;
						case 4:
							mostrar_pdf(4);
							break;
						case 5:
							mostrar_pdf(6);
							break;
						case 6:
							mostrar_pdf(8);
							break;
						case 7:
							mostrar_pdf(10);
							break;
						case 8:
							mostrar_pdf(11);
							break;
						case 9:
							volver_menu_principal = true; // valor logico verdadero
							break;
						default:
							system("CLS");
							cout << "opción invalida. Intente nuevamente." << endl;
							system("pause");
						}

						// ! negacion
					} while (!volver_menu_principal);
					break;

				case 2:
					pdf_ayuda_es();
					break;
				case 3:
					abrir_calcu_es();
					break;
				case 4:
					abrir_video();
					break;
				case 5:
					abrir_juego_es();
					break;
				case 6:
					creditos();
					break;
				case 7:
					volver_menu_idiomas = true;
					break;
				default:
					system("CLS");
					cout << "Opción invalida. Intentelo nuevamente." << endl;
					system("pause");
				}

			} while (!volver_menu_idiomas);
			break;

		// menu principal ingles
		case 2:
			do
			{
				system("CLS");
				menu_principal_in();
				cin >> op_menu_principal_in;

				switch (op_menu_principal_in)
				{

				case 1:
					do
					{
						system("CLS");
						revista_menu_in();
						cin >> op_menu_revista_in;

						switch (op_menu_revista_in)
						{
						case 1:
							mostrar_pdf_in(1);
							break;
						case 2:
							mostrar_pdf_in(2);
							break;
						case 3:
							mostrar_pdf_in(3);
							break;
						case 4:
							mostrar_pdf_in(4);
							break;
						case 5:
							mostrar_pdf_in(6);
							break;
						case 6:
							mostrar_pdf_in(8);
							break;
						case 7:
							mostrar_pdf_in(10);
							break;
						case 8:
							mostrar_pdf_in(11);
							break;
						case 9:
							volver_menu_principal_in = true;
							break;
						}

					} while (!volver_menu_principal_in);
					break;

				case 2:
					pdf_ayuda_in();
					break;
				case 3:
					abrir_calcu_in();
					break;
				case 4:
					abrir_video_in();
					break;
				case 5:
					abrir_juego_in();
					break;
				case 6:
					creditos_in();
					break;
				case 7:
					volver_menu_idomas_in = true;
					break;
				default:
					system("CLS");
					cout << "Invalid option. Please try again.." << endl;
					system("pause");
				}

			} while (!volver_menu_idomas_in);
			break;

		// salir del programa
		case 3:
			system("CLS");
			cout << "Saliendo del programa..." << endl;
			return 0;
		default:
			system("CLS");
			cout << "Opción invalida. Intentelo nuevamente." << endl;
			system("pause");
		}
	} while (true);

	return 0;
}