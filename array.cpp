# include <iostream>
# include <array>

using namespace std;

int main (int argc, char *argv[]){
	array<int, 3> a = {8, 9, 10};
	
	cout << a.size() << endl; // Imprimi el tamanio del array
	cout << a.front() << endl; // Imprime la primera posicion del array
	cout << a.back() << endl; // Imprime la ultima posicion del array
	
	cout << "\n" << a[0] << a[1] << a[2] <<endl; // Imprime el array
	
	return 0;
}

