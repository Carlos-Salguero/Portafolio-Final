#include "Personaje.h"

using namespace std;

int main(){
	
	string nombre;
	int salud=100, puntos_ganados, puntos_perdidos;
	int opcion;
	
	cout << "Nombre del personaje: ";
	getline(cin, nombre);
	
	Personaje p(nombre, salud);
	
	cout << "\nPersonaje " << p.getNombre() << endl;
	cout << "Vitalidad " << p.getPuntoVida() << endl;
	cout << "Enemigo aparace, quiere pelear" << endl;
	
	while(p.getPuntoVida()>0){
		
		cout << "\nQue desea hacer?" << endl;
		cout << "1. Atacar / 2. Defender / 3. Curar  " << endl;
		cin >> opcion;
		
		switch(opcion){
			case 1:
				cout << "Ataque Fallo" << endl;
				puntos_perdidos= 10 + rand() % 5;
				p.recibirGolpe(puntos_perdidos);
				p.getPuntoVida();
				break;
				break;
			
			case 2:
				puntos_perdidos= 0;
				p.recibirGolpe(puntos_perdidos);
				p.getPuntoVida();
				break;
			case 3:
				p.comer(puntos_ganados);
				p.getPuntoVida();
				break;
			default:
				cout << "Opcion no valida" << endl;
				break;
		}
		
		cout << "Vitalidad " << p.getPuntoVida() << endl;
		p.estaVivo();
	}
}
