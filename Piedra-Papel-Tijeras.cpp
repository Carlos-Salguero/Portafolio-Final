#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	int Opcion_Jugador;
	cout << " Juguemos a piedra, papel, tijeras, lagarto o spock selecciona tu movimiento \n";
	cout << " 1. Piedra \n 2. Papel \n 3. Tijeras \n 4. Lagarto \n 5. Spock \n Elige: ";
	cin >> Opcion_Jugador;
	srand(time(0));
	string Maquina;
	int Opcion_Maquina = rand() % 3+1;
	
	switch(Opcion_Maquina) {
		
		case 1:
			Maquina = "Piedra";
			break;
			
		case 2:
			Maquina = "Papel";
			break;
		
		case 3:
			Maquina = "Tijeras";
			break;
			
		case 4:
			Maquina = "Lagarto";
			break;
			
		case 5:
			Maquina == "Spock";
			break;
	}
	
	cout << "La maquina escogio: " << Maquina << endl;
	
	if(Opcion_Jugador == Opcion_Maquina) {
		cout << "Empate \n";
	} else if((Opcion_Jugador == 1) && (Opcion_Maquina == 3)) {
		cout << "Ganaste \n";
	} else if((Opcion_Jugador == 2) && (Opcion_Maquina == 1)) {
		cout << "Ganaste \n";
	} else if((Opcion_Jugador == 3) && (Opcion_Maquina == 2)) {
		cout << "Ganaste \n";
	} else if((Opcion_Jugador == 4) && (Opcion_Maquina == 2)) {
		cout << "Ganaste \n";
	} else if((Opcion_Jugador == 4) && (Opcion_Maquina == 5)) {
		cout << "Ganaste \n";
	} else if((Opcion_Jugador == 5) && (Opcion_Maquina == 3)) {
		cout << "Ganaste \n";
	} else if((Opcion_Jugador == 5) && (Opcion_Maquina == 1)) {
		cout << "Ganaste \n";
	} else {
		cout << "Perdiste \n";
	}
}
