#include <iostream>				//Inclusión de recursos matemátcicos
#include <cmath>				//Inclusión de recursos de E/S

using namespace std;

int main(){		//Clase principal
//inicialización de variables
	const int ASCII = 255;
	int freq[ASCII], mayor_freq;
	char caracter;
	
	mayor_freq = 0;
	
//este bucle iguala todo el vector freq a 0
	for ( int t = 0; t <= ASCII; t++ ){
		freq[t] = 0;
	}
	
//entrada de datos
	cout << "Inserte un texto: ";
	caracter = cin.get();
	
//este bucle sirve para contar cuantas veces se repite un carácter
	while( caracter != '#' ){
		freq[caracter]++;
		caracter = cin.get();
	}
	
//este bucle ecuentra que carácter se ha repetido más y cuantas veces
	for( int i = 0; i <= ASCII; i++ ){
		if ( freq[i] > mayor_freq ){
			mayor_freq = freq[i];
			caracter = i;
		}
	}
	
//salida de datos
	cout << "El caracter que mas se repite es: '" << caracter << "' con un total de " << mayor_freq << " apariciones" << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}


