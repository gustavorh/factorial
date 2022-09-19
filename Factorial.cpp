#include <iostream>
using namespace std;

int factorial(int n);

int main() {
	int num, resultado;
	cout << "Ingrese un numero para calcular el factorial: ";
	cin >> num;
	resultado = factorial(num);
	cout << num << "! = " << resultado << endl;
}
// Limite 33 y da un valor negativo
int factorial(int num) {
	if (num < 0) {
		return 0;
	} else if (num > 1) {
		return num * factorial(num-1); // Recursividad: n > 1
	}
	return 1; // Condición para n == 1 y n == 0
}
