#include <iostream>
#include <string>

using namespace std;

class Cuenta_Bancaria{
	private:
		string num_cuenta;
		string nombre_titular;
		double saldo;		
		
	public:
		Cuenta_Bancaria(string num, string nombre, double saldo);
		double getSaldo();
		string getNumeroCuenta();
		string getNombreTitular();
		void depositar(double deposito);
		void retirar(double retiro); 	
};

Cuenta_Bancaria::Cuenta_Bancaria(string num, string nombre, double saldo){
	if (saldo<0){
		this->saldo=0.00;
	} else {
		this->saldo=saldo;
	}
	this->num_cuenta=num;
	this->nombre_titular=nombre;
}

double Cuenta_Bancaria::getSaldo(){
	return this->saldo;
}

string Cuenta_Bancaria::getNumeroCuenta(){
	return this->num_cuenta;
}

string Cuenta_Bancaria::getNombreTitular(){
	return this->nombre_titular;
}

void Cuenta_Bancaria::depositar(double cant_deposito){
	if(cant_deposito>0){
		this->saldo+=cant_deposito;
	} else{
		cout << "Deposito invalido" << endl;
	}
}

void Cuenta_Bancaria::retirar(double cant_retirar){
	if(cant_retirar>0){
		this->saldo-=cant_retirar;
	} else{
		cout << "Retiro invalido" << endl;
	}
}
