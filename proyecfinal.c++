#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>

// Función menu de idiomas
//void menu_idiomas(){
//    std::cout<< " Seleccione un idioma "<< std::endl;
  //  std::cout<< " Español "<< std::endl;
    //std::cout<< " Ingles "<< std::endl;
//}


// Función para abrir un archivo PDF
void abrirArchivo(const std::string& ruta) {}
    // Utiliza el comando del sistema para abrir el archivo PDF
   // std::string comando = "start " + ruta; //

    // system(comando.c_str()); //

// The path to your PDF file
    const char* pdfFile = "C:\\Usersisis0\\Documents\\ARTICULOS\\cc.pdf";  // Replace with the actual path to your PDF

    // The page you want to open (for example, page 2)
    int pageNumber = 2;

    // Build the command using the start command and Adobe Reader arguments
    char command[512];
    snprintf(command, sizeof(command), "start \"\" \"C:\\Program Files (x86)\\Adobe\\Acrobat Reader DC\\Reader\\AcroRd32.exe\" /A \"page=%d\" \"%s\"", pageNumber, pdfFile);

    // Execute the command
    system(command);

int main() {
    std::cout << "   Gestor de archivos  " << std::endl;
    std::cout << " Seleccione una opcion" << std::endl;
    std::cout << "1. Archivo" << std::endl;
    std::cout << "4. Salir" << std::endl;

    int opcion;
    std::string ruta;

    while (true) {

        std::cout << "Ingrese la opcion deseada: " << std::endl;
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                ruta =  "C:/Users/isis0/Documents/ARTICULOS/cc.pdf"; //ruta
                
                abrirArchivo(ruta);
                break;
            
                    std::cout << "Opción invalida. Por favor, intentelo de nuevo." << std::endl;
        }
    }
}  