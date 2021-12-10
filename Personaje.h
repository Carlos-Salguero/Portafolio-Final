#include <iostream>
#include <string>

using namespace std;

class Personaje{
	private:
		string nombre;
		int salud;
	
	public:
		Personaje(string nombre, int salud);
		void recibirGolpe(int puntos_perdidos);
		void estaVivo();
		int getPuntoVida();
		string getNombre();
		void comer(int puntos_ganados);
};

Personaje::Personaje(string personaje, int salud){
	this->nombre=personaje;
	this->salud=salud;
}

string Personaje::getNombre(){
 return this->nombre;
}

int Personaje::getPuntoVida(){
	return this->salud;
}

void Personaje::estaVivo(){
	if (salud>0){
		true;
	} else {
		cout << "\nGame Over";
	}
}

void Personaje::recibirGolpe(int puntos_perdidos){
	cout << "Dano recibido " << puntos_perdidos << endl;
	if(salud > 0){
		this->salud-=puntos_perdidos;
	} else {
		salud=0;
		this->salud=0;
	}
}

void Personaje::comer(int puntos_ganados){
	
	int opcion;
	cout << "\nQue desea comer, cada objeto cura una cantidad distinta de salud" << endl;
	cout << "1. Hamburgesa" << endl;
	cout << "2. Pizza" << endl;
	cin >> opcion;
		
	if (salud<100){
		switch(opcion){
			case 1:
				puntos_ganados = 10;
				this->salud+=puntos_ganados;
				break;
				
			case 2:
				puntos_ganados = 15;
				this->salud+=puntos_ganados;
				break;
				
		}if (salud>100){
			this->salud=100;
		}
	}else {
		cout << "\nVitalidad al maximo" << endl;
	}
	this->salud+=puntos_ganados;
}


