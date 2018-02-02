/*
El siguiente programa leerá un número de 3 digitos e imprimirá los dígitos de dicho número separados por espacios
*/
#include <iostream>								//inclusión de los recursos de E/S
#include <cmath>								//inclusión de los recursos matemáticos

using namespace std;

int main (){									//clase principal
//se inicializan ls variables
	int num, dig1, dig2, dig3;
	
//introducción de datos para la variable
	cout << "Introduzca un numero de 3 digitos: ";
	cin >> num;
	
//se hacen los calculos
	dig1 = num/100;
	dig2 = (num - (dig1 * 100))/10;
	dig3 = num - (dig1 * 100) - (dig2 * 10);
	
//se imprime el resultado
	cout << "Los digitos del numero que introduciste son: " << dig1 << " " << dig2 << " " << dig3 << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
