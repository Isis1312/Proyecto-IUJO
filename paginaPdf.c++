#include <cstdio>
#include <iostream>

int main() {
	// The path to your PDF file
	const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
	// Numero de pagina donde se abrira
	int pageNumber = 2;

	// Build the command using the start command and Adobe Reader arguments
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files\\Adobe\\Acrobat DC\\Acrobat\\Acrobat.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);
	// Execute the command
	system(command);
}
// funcion abrir pdf	ESPAÑOL
void mostrar_pdf(int pageNumber)
{
	const char *pdfFile = "..\\recursos\\cc.pdf"; // Ruta de pdf para abrir
	// tamaño del char
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files\\Adobe\\Acrobat DC\\Acrobat\\Acrobat.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);
	system(command);
}

