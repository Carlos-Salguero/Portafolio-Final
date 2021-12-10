#include "Persona.h"

int main (){
	
	string nombres;
	string apellidos;
	int fecha_nacimiento;
	
	cout << "Ingrese sus nombres: ";
	getline(cin, nombres);
	
	cout << "Ingres sus apellidos: ";
	getline(cin, apellidos);
	
	cout << "Ingrese su fecha de nacimiento: ";
	cin >> fecha_nacimiento;
	
	Persona p(nombres, apellidos, fecha_nacimiento);
	cout << "\n***** Datos personales *****" << endl;
	cout << "Nombre: " << p.nombreCompleto();
	cout << ", edad: " << p.edad();
}
