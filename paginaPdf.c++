#include <cstdio>
#include <iostream>

int main() {
	// The path to your PDF file
	const char* pdfFile = "C:\\Users\\isis0\\Documents\\ARTICULOS\\cc.pdf";  // Ruta de pdf para abrir
	// Numero de pagina donde se abrira
	int pageNumber = 2;

	// Build the command using the start command and Adobe Reader arguments
	char command[512];
	snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

	// Execute the command
	system(command);
}


