#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LimpiarPantalla();
void JugarPartida();
void Dibujar();

char eleccion; 
string palabras[] = {"actualizacion","ciberseguridad","cortafuego","proteccion","antivirus"};
string palabra , fallidas;
int nA;
int vida;
bool correcta, completa;

int main() {
	while(true){
		vida = 6;	
		palabra = "";
		fallidas = "";
		LimpiarPantalla();
		Dibujar();
		cout<<"::::MENU::::"<<endl;
		cout<<"1) Iniciar juego"<<endl;
		cout<<"2) Salir"<<endl;
		cout<<"eleccion: ";

		cin>>eleccion;
		switch(eleccion){
			case '1':
				JugarPartida();
				break;
			case '2':
				return 0;
				break;	
		}
	}
}
void JugarPartida(){
	srand((int)time(NULL));
	nA=rand()%5;
	
	for(int i = 0; i < (int)palabras[nA].size(); i++){
		palabra += "-";
	}
	
	while(vida > 0){
		LimpiarPantalla();
		cout<<"::: A H O R C A D O :::"<<endl;
		Dibujar();
		cout<<"fallos: "<<fallidas;
		cout<<"  progreso: "<<palabra[0]<<endl;
		cout << endl;
		cout<<"ingrese una letra: ";
		cout << endl;
		cin>>eleccion;
		
		correcta=false;
		for(int i = 0; i < (int)palabras[nA].size(); i++){
			if(palabras[nA][i] == eleccion){
				palabra[i] = eleccion;
				correcta = true;
			}
		}
		if(!correcta){
			vida--;
			fallidas += eleccion;
		}
		
		completa = true;
		for(int i = 0; i < (int)palabra.size(); i++){
			if(palabra[i] == '-'){
				completa = false;
			}
		} 
		if(completa){
		 LimpiarPantalla();
		 cout<<"::: A H O R C A D O :::"<<endl;
		 Dibujar();
		 cout<<"palabra: "<<palabras	[nA]<<endl;
		 cout<<"Ganaste. Ingresa un caracter para continuar: ";
		 cin>>eleccion;
		return;
		}
	}
	LimpiarPantalla();	
	cout<<"::: A H O R C A D O :::"<<endl;
	Dibujar();
	cout<<"palabra: "<<palabras	[nA]<<endl;
	cout<<"Perdiste. ingresa un caracter para continuar: ";
	cin>>eleccion;
	return;
}

void Dibujar(){
	switch(vida){
		case 6:
		cout<<"::: A H O R C A D O :::"<<endl;
		cout<<" --------"<<endl;
		cout<<" |       |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" ---"<<endl;
		break;
		case 5:
		cout<<" --------"<<endl;
		cout<<" |       |"<<endl;
		cout<<" |       0"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" ---"<<endl;	
		break;
		case 4:
	 	cout<<" --------"<<endl;
		cout<<" |       |"<<endl;
		cout<<" |       0"<<endl;
		cout<<" |       |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" ---"<<endl;	
		break;
		case 3:
	 	cout<<" --------"<<endl;
		cout<<" |       |"<<endl;
		cout<<" |       0"<<endl;
		cout<<" |      -|"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" ---"<<endl;	
		break;
		case 2:
	 	cout<<" --------"<<endl;
		cout<<" |       |"<<endl;
		cout<<" |       0"<<endl;
		cout<<" |      -|- " <<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" ---"<<endl;	
		break;
		case 1:
	 	cout<<" --------"<<endl;
		cout<<" |       |"<<endl;
		cout<<" |       0"<<endl;
		cout<<" |      -|- "<<endl;
		cout<<" |      -"<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" ---"<<endl;	
		break;
		case 0:
	 	cout<<" --------"<<endl;
		cout<<" |       |"<<endl;
		cout<<" |       0"<<endl;
		cout<<" |      -|- "<<endl;
		cout<<" |      - - "<<endl;
		cout<<" |"<<endl;
		cout<<" |"<<endl;
		cout<<" ---"<<endl;	
		break;
	}
}

void LimpiarPantalla(){
	if(system ("cls") == -1){
		cout<<"error al borrar la pantalla.";
	}
}

