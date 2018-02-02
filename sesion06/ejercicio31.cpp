/*
El siguiente programa resolvera una multiplicación sin usar la función * usando el algoritmo de la multiplicación rusa
*/
#include <iostream>										//Inclusión de recursos de E/S
#include <cmath>										//Inclusión de recursos matemáticos

using namespace std;

int main(){												//Clase principal
//inicialización de variables
	int multiplicando, multiplicador, suma;
	
	suma = 0;
	
//entrada de datos
	cout << "Introduce el multiplicando y el multiplicador (en el mismo orden y con espacios): ";
	cin >> multiplicando >> multiplicador;

//Se aplica el algoritmo de la multiplicación rusa
	while( multiplicando >= 1 ){
		if ( multiplicando%2 != 0 ){
			suma = suma + multiplicador;
		}
		multiplicando /= 2;
		multiplicador += multiplicador;
	}
	
//salida de datos
	cout << "El resultado de la multiplicacion es: " << suma << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
