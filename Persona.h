#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Persona{
	private:
		string nombres;
		string apellidos;
		int fecha_nacimiento;
		
	public:
		Persona(string nombres, string apellidos, int fecha_nacimiento);
		string nombreCompleto();
		int edad();
};

Persona::Persona(string nombres, string apellidos, int fecha_nacimiento){
	this->nombres = nombres;
	this->apellidos = apellidos;
	this->fecha_nacimiento = fecha_nacimiento;
}

string Persona::nombreCompleto(){
	string nombre= this->nombres+" "+this->apellidos;
	return nombre;
}

Persona::edad(){
	time_t now=time(0);
	tm* ltm = localtime(&now);
	
	int fecha_actual=1900 + ltm->tm_year;
	int edad = (fecha_actual - this->fecha_nacimiento);
	return edad;
}
