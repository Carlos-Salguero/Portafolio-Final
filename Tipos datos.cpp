#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	cout<<"*** Ejercicio 1 ***" << endl;
	
	int x=5, y=2;
	cout<< x + y << endl;
	cout<< x - y << endl;
	cout<< x * y << endl;
	
	x=12, y=3;
	cout<< x / y << endl;
	
	x=5, y=2;
	cout << x % y << endl;
	
	++x;
	cout << x << endl;
	
	x=5;
	--x;
	cout<< x << endl;
	
	cout <<"*** Ejercicio 2 ***" << endl;
	
	double d1, d2;
	
	cout <<"*** Calcula operaciones aritmeticas de dos numero *** \n";
	cout <<"ingrese un numero: "; cin >> d1;
	cout <<"ingrese otro numero: "; cin >> d2;
	
	cout <<"Suma: "<< d1 + d2 << endl;
	cout <<"Resta: "<< d1 - d2 << endl;
	cout <<"Multiplicacion: "<< d1 * d2 << endl;
	cout <<"Division :" << d1 / d2 << endl;
	
	int i1=d1, i2=d2;
	cout <<"Residuo de division: " << i1 % i2 << endl;
	
	++d1, ++d2;
	cout <<"Incremento en uno de numero 1: " << d1 <<" y del numero 2: "<< d2 << endl;
	
	--d1, --d2;
	cout <<"Decremento en uno de numero 1: " << d1 <<" y del numero 2: "<< d2 << endl;
	
	/*cout <<"*** Ejercicio 3***" << endl;
	
	int i3, i4;
	
	cin >> i3;
	cin >> i4;
	
	i3+=i4;
	cout << i3 << endl;
	
	i3-=i4;
	cout << i3 << endl;
	
	i3*=i4;
	cout << i3 << endl;
	
	i3/=i4;
	cout << i3 << endl;
	
	i3%=i4;
	cout << i3 << endl;*/
	
	cout<<"*** Ejercicio 4 ***" << endl;
	
	int i5=5;
	cout << i5 << endl;
	
	i5+=3;
	cout << i5 <<endl;
	
	i5-=3;
	cout << i5 <<endl;
	
	i5*=3;
	cout << i5 <<endl;
	
	i5/=3;
	cout << i5 <<endl;
	
	i5%=3;
	cout << i5 <<endl;
	
	cout << "*** Ejercicio 5 ***" << endl;
	
	int i6=5;
	
	cout << i6 << ":" << "\t" << bitset<8>(i6) << endl;
	cout << "3:" << "\t" << bitset<8>(3) << endl;
	cout << i6 << " AND 3 (&) = \n";
	
	i6&=3;
	cout << i6 << "\t" << bitset<8>(i6) << endl;
	
	i6=5;
	cout << i6 << " OR 3 ( | ) = \n";
	
	i6 |=3;
	cout << i6 << "\t" << bitset<8>(i6) << endl;
	
	i6=5;
	cout << i6 << " XOR 3 ( ^ ) = \n";
	i6 ^= 3;
	cout << i6 << "\t" <<bitset<8>(i6) << endl;
	
	cout << "...........................\n";
	
	i6=13;
	cout << i6 << ":" << "\t" << bitset<8>(i6) << endl;
	cout << i6 << " >> 3 = \n";
	i6 >>= 3;
	cout << i6 << "\t" << bitset<8>(i6) << endl;
	
	i6=13;
	cout << i6 << " << 3 = \n";
	i6 <<= 3;
	cout << i6 << "\t" << bitset<8>(i6) << endl;
	
	cout << "*** Ejercicio 6 ***";
	
	int i7=5, i8=3, i9;
	
	cout << "\t Decimal" << "\t : \t Binario" << endl;
	cout << "\t" << i7 << "\t : \t" << bitset<8>(i7) << endl;
	cout << "\t" << i8 << "\t : \t" << bitset<8>(i8) << endl;
	
	i9= i7&i8; //AND binario
	cout << "x & y \t" << i9 << "\t : \t" << bitset<8>(i9) << endl;
	
	i9 = i7|i8; //OR binario
	cout << "x | y \t" << i9 << "\t : \t" << bitset<8>(i9) << endl;
	
	i9 = i7^i8; //XOR binario
	cout << "x ^ y \t" << i9 << "\t : \t" << bitset<8> (i9) << endl;
	
	i9 = i7<<i8; //Desplacamiento a la izquierda
	cout << "x << y \t" << i9 << "\t : \t" << bitset<8> (i9) << endl;
	
	i9 = i7>>i8; //Desplacamiento a la izquierda
	cout << "x >> y \t" << i9 << "\t : \t" << bitset<8> (i9) << endl;
	
	/*cout << "*** Ejercicio 7 ***";
	
	int i10, i11;
	
	cin >> i10;
	cin >> i11;
	
	bool var1 = true;
	bool var2 = false;
	
	cout << var1 << endl;
	cout << var2 << endl;
	// 0 = False y 1 = True
	
	cout << (i10 < i11) << endl;
	cout << (i10 > i11) << endl;
	cout << (i10 <= i11) << endl;
	cout << (i10 >= i11) << endl;
	cout << (i10 != i11) << endl;
	cout << (i10 == i11) << endl;*/
	
	cout << "*** Ejercicio 8 ***";
	
	int i12=5, i13=3;
	
	cout << (i12 < i13) << "\n";
	cout << (i12 > i13) << "\n";
	cout << (i12 <= i13) << "\n";
	cout << (i12 >= i13) << "\n";
	cout << (i12 != i13) << "\n";
	cout << (i12 == i13) << "\n";
	
	return 0;
}

