#include "Banco.h"

using namespace std;

int main (){
	
	double retiro, deposito;
	int opcion;
	
	//Informacion de una cuenta
	Cuenta_Bancaria cuenta("C-259-963-8812", "Carlos Salguero", 2850.00);
	cout << "Numero de cuenta: " << cuenta.getNumeroCuenta() << endl;
	cout << "Nombre del Titular: " << cuenta.getNombreTitular() << endl;
	cout << "Saldo de la cuenta: " << cuenta.getSaldo() << endl;
	
	//eleccion de transaccion
	cout << "\nEscriba la inicial de su transaccion" << endl;
	cout << "1.Retirar / 2.Depositar: ";
	cin >> opcion;
	opcion=toupper(opcion);
	
	switch(opcion){
		case 1:
			//Hacer un retiro
			cout << "Cuanto desea retirar de la cuenta " << cuenta.getNumeroCuenta() << " $";
			cin >> retiro;
			cout << "Saldo inicial $" << cuenta.getSaldo() << endl;
			cuenta.retirar(retiro);
			cout << "Nuevo saldo $" << cuenta.getSaldo();
			break;
			
		case 2:
			//Hacer un deposito
			cout << "Cuanto desea retirar de la cuenta " << cuenta.getNumeroCuenta() << " $";
			cin >> deposito;
			cout << "Saldo inicial $" << cuenta.getSaldo() << endl;
			cuenta.depositar(deposito);
			cout << "Nuevo saldo $" << cuenta.getSaldo();
			break;
	}
		
	return 0;
}
