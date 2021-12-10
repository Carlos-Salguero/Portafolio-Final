#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

//Carlos Mauricio Salguero Cardona SC100216

using namespace std;

const int LADO=3;

//prototipos
void Imprimir_Tablero (char tablero[][LADO]);
int Marcar_Casilla_Jugador (char tablero[][LADO]);
int Leer_Numero (string Indicacion, string Mensaje_Error, int Min, int Max);
int Marcar_Casilla_Computadora (char tablero[][LADO]);
char Ganador_Filas (char tablero[][LADO]);
char Ganador_Columnas (char tablero[][LADO]);
char Ganador_Diagonales (char tablero[][LADO]);
char Determinar_Ganador (char tablero [][LADO]);
void Jugar();

int main(){
	char Jugar_de_Nuevo;
	srand(time(0)); //Inicia la semilla de numeros aleatorios
	do{
		Jugar();
		cout << "Desea jugar de nuevo (S|n)? ";
		cin >> Jugar_de_Nuevo;
		cout << endl;
	} while(toupper(Jugar_de_Nuevo)=='S');
	
	return 0;
}

void Jugar(){
	char tablero[LADO][LADO]={};
	char ganador=0;
	
	cout << "Juego de equis-cero" << endl;
	int Casillas_Libres = LADO*LADO;
	bool Turno_Jugador = true;
	Imprimir_Tablero(tablero);
	
	while (Casillas_Libres > 0 && ganador ==0){
		if (Turno_Jugador){
			Casillas_Libres -= Marcar_Casilla_Jugador(tablero);
		} else {
			Casillas_Libres -= Marcar_Casilla_Computadora(tablero);
		}
		Turno_Jugador = !Turno_Jugador; //Turno del otro jugador
		ganador = Determinar_Ganador(tablero);
	}
	switch (ganador){
		case 'X':
			cout << "Usted gana!!!" << endl;
			break;
		case '0':
			cout << "La computadora gana :'(" << endl;
			break;
		default:
			cout << "Empate." << endl;
	}
}

void Imprimir_Tablero(char tablero[][LADO]){
	// Cuente los espacios usando los puntos
	// Guia: ...............   ...............
	cout << "\n     0   1   2 \n-----------" << endl;
	for (int fila=0; fila<LADO; fila++){
		cout << " " << fila << " |";
		for (int columna=0; columna<LADO; columna++){
			cout << " " << tablero[fila][columna] << " |";
		}
		// guia: ..................
		cout << "\n-----------" << endl;
	}
	cout << endl;
}

int Leer_Numero (string Indicacion, string Mensaje_Error, int Min, int Max){
	int numero;
	cout << Indicacion << ": ";
	
	//Valida que la entrada sea un entero
	while (!(cin >> numero) || (numero<Min || numero >= Max)) {
		cin.clear();
		cin.ignore(10000, '\n');
		cout << Mensaje_Error << endl;
		cout << Indicacion << ": ";
	}
	
	return numero;
}

int Marcar_Casilla_Jugador(char tablero[][LADO]){
	int fila, columna;
	cout << "Jugador: " << endl;
	string mensaje="Ingrese un valor entre 0 y " + to_string(LADO);
	fila=Leer_Numero("Fila", mensaje, 0, LADO);
	columna=Leer_Numero("Columna", mensaje, 0, LADO);
	while (tablero[fila][columna] !=0){
		cout << "Casillas ocupa. Intente de nuevo" << endl;
		fila=Leer_Numero("fila", mensaje, 0, LADO);
		columna=Leer_Numero("columna", mensaje, 0, LADO);
	}
	tablero[fila][columna]='X';
	Imprimir_Tablero(tablero);
	return 1;
}

int Marcar_Casilla_Computadora(char tablero[][LADO]){
	int fila, columna;
	fila = rand() % LADO;
	columna = rand() % LADO;
	while (tablero[fila][columna] != 0){
		fila = rand() % LADO;
		columna - rand() % LADO;
	}
	tablero[fila][columna] ='0';
	cout << "Computadora:" << endl;
	Imprimir_Tablero(tablero);
	return 1;
}

char Determinar_Ganador(char tablero[][LADO]){
	char ganador;
	
	//ganador por filas?
	ganador = Ganador_Filas(tablero);
	
	//ganador por columnas?
	if (ganador == 0){
		ganador = Ganador_Columnas(tablero);
	}
	//ganador por diagonal?
	if (ganador == 0){
		ganador = Ganador_Diagonales(tablero);
	}
	return ganador;
}

char Ganador_Filas (char tablero[][LADO]){
	for (int fila=0; fila<LADO; fila++){
		//Primer caracter de la fila
		char caracter = tablero[fila][0];
		int veces=0;
		if (caracter != 0){
			//contar cuantas veces aparece el caracter
			for (int columna = 0; columna<LADO; columna++){
				if (tablero[fila][columna] == caracter) {
					veces++;
				}
			}
			if (veces==LADO){
				return caracter;
			}
		}
	}
	return 0;
}

char Ganador_Columnas (char tablero[][LADO]){
	for (int columna=0; columna<LADO; columna++){
		//Primer caracter de la columna
		char caracter = tablero[0][columna];
		int veces = 0;
		if(caracter !=0){
			//contar las veces que aparece el caracter
			for (int fila=0; fila<LADO; fila++){
				if (tablero[fila][columna]==caracter){
					veces++;
				}
			}
			if (veces == LADO){
				return caracter;
			}
		}
	}
	return 0;
}

char Ganador_Diagonales (char tablero[][LADO]){
	char caracter;
	int veces;
	
	//Diagonal de izquierda a derecha
	caracter=0;
	veces=0;
	
	if (caracter!=0){
		for (int i=0; i<LADO; i++){
			if (tablero[i][i]==caracter){
				veces++;
			}
		}
		if (veces==LADO){
			return caracter;
		}
	}
	
	//Diagonal de derecha a izquierda
	caracter=tablero[0][LADO-1];
	veces=0;
	if (caracter !=0){
		for (int i=0; i<LADO; i++){
			if (tablero[i][LADO-1-i] == caracter){
				veces++;
			}
		}
		if(veces==LADO){
			return caracter;
		}
	}
	return 0;
}





