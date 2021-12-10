#include <iostream>
#include <math.h>

using namespace std;

int numero_mayor(int num_1, int num_2, int num_3, int num_4, int num_5){
	
	int mayor;
	
	if ((num_1 > num_2) && (num_1 > num_3) && (num_1 > num_4) && (num_1 > num_5)){
		mayor=num_1;
	}
	else if ((num_2 > num_1) && (num_2 > num_3) && (num_2 > num_4) && (num_2 > num_5)){
		mayor=num_2;
	}
	else if ((num_3 > num_1) && (num_3 > num_2) && (num_3 > num_4) && (num_3 > num_5)){
		mayor=num_3;
	}
	else if ((num_4 > num_1) && (num_4 > num_2) && (num_4 > num_3) && (num_4 > num_5)){
		mayor=num_4;
	}
	else{
		mayor=num_5;
	}
	
	return mayor;
}

int main (){
	
/*Pida al usuario que ingrese los tres lados de un triangulo y en base a ello determine si es equilátero, escaleno o isósceles
En base a la información, calcule el área de dicha figura.*/

	cout << "***** Ejercicio 1 calculo de area de triangulos *****" << endl;
	float l1, l2, l3, area, s, raiz;
	
	cout << "Ingrese el primer lado del triangulo: ";
	cin >> l1;
	cout << "Ingrese el segundo lado del triangulo: ";
	cin >> l2;
	cout << "Ingrese el tercer lado del triangulo: ";
	cin >> l3;
	
	if (l1==l2 && l2==l3){
		area = (sqrt(3)/4)*(pow(l1,2));
		cout << "El triangulo es equilatero y su area es: " << area << endl;
	}else if (l1==l2) {
		area= (l3*(sqrt(pow(l1,2)-pow(l3,2)/4)))/2;
		cout << "El triangulo es isoseles y su area es: " << area << endl;
	}else if (l1==l3){
		area= (l2*(sqrt(pow(l1,2)-pow(l2,2)/4)))/2;
		cout << "El triangulo es isoseles y su area es:  " << area << endl;
	}else if ((l2==l3)){
		area= (l1*(sqrt(pow(l2,2)-pow(l1,2)/4)))/2;
		cout << "El triangulo es isoseles y su area es:  " << area << endl;
	}else {
		s=(l1+l2+l3)/2;
		area=sqrt(s*((s-l1)*(s-l2)*(s-l3)));
		cout << "El triangulo es escaleno y su area es: " << area << endl;
	}
	
/*Utilizando condicionales (if ... else, etc) elabore una función que solicite 5 números al usuario y luego le indique el número mayor.*/

	cout << endl;
	int num_1, num_2, num_3, num_4, num_5, mayor;
	
	cout << "***** Ejercicio 2 el mayor de 5 numeros *****" << endl;
	cout << "Ingrese el primer numero: ";
	cin >> num_1;
	cout << "Ingrese el segundo numero: ";
	cin >> num_2;
	cout << "Ingrese el tercer numero: ";
	cin >> num_3;
	cout << "Ingrese el cuarto numero: ";
	cin >> num_4;
	cout << "Ingrese el quinto numero: ";
	cin >> num_5;
	
	mayor=numero_mayor(num_1, num_2, num_3, num_4, num_5);
	cout << "El numero mayor es: " << mayor << endl;;
	
/*Utilizando bucles solicite a un usuario que introduzca cualquier cantidad de números
Al terminar de ejecutar el bucle que retorne el valor promedio de los números ingresados.*/

	cout << endl;
	cout << "***** Ejercicio 3 promedio de n cantidad de numeros *****" << endl;
	char op='s';
	int count=0;
	float num, prom, sum=0;

	while (op == 's'){
		cout << "Ingrese un numero: ";
		cin >> num;
		sum=sum+num;
		cout << "Desea continuar s/n: ";
		cin >> op;
		count ++;
	}
	prom = sum / count;
	cout << "El promedio de los numeros es " << prom;

}
