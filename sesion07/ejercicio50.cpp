/*
El siguiente programa contará las veces que aparece un número en un rango especificado por los valores leídos desde teclado
*/
#include <iostream>					//Inclusión de recursos de E/S
#include <cmath>					//Inclusión de recursos matemáticos

using namespace std;

int main(){		//Clase principal
//Inicialización de variables
	int cifra, min, max, aux, apariciones;
	
	apariciones = 0;
	
//Entrada de datos
	cout << "Introduzca la cifra que quiera buscar: ";
	cin >> cifra;
	cout << "Ahora el rango donde quiera buscar esa cifra separados por espacio: ";
	cin >> min >> max;
	
//CÓMPUTOS
	for ( int i = min; i <= max; i++ ){
		aux = i;
		while( aux > 0 ){
			if ( aux % 10 == cifra ){
				apariciones++;				//Esta variable cuenta el numero de apariciones del numero
			}
			aux = aux / 10;					//Se divide entre 10 para ir comprobando las cifras más a la izquierda del número
		}
	}
	
//Salida de datos
	cout << "La cifra aparece " << apariciones << " veces en el intervalo mencionado" << endl;
	
//Finaliza el programa
	system("pause");
	return 0;	
}
