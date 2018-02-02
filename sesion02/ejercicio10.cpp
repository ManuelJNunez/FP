/*
El siguiente programa realizará unos cáculos estadísticos usando la gaussiana
*/
#include <iostream>														//Inclusión de los recursos de E/S
#include <cmath>															//Inclusión de los recursos matemáticos

using namespace std;

int main(){																		//clase principal
//se inicializan las variables
	double esperanza, desviacion_tipica, abcisa, gaussiana;
	const double PI = 3.1416;
	
//se introducen los datos
	cout << "Introduzca la esperanza: ";
	cin >> esperanza;
	cout << "Introduzca la desviacion tipica: ";
	cin >> desviacion_tipica;
	cout << "Introduzca la abcisa: ";
	cin >> abcisa;
	
//se resuelve la ecuación
	gaussiana = 1/( desviacion_tipica * sqrt( 2 * PI ) ) * exp ( -0.5 * pow ( ( ( abcisa - esperanza )/desviacion_tipica ), 2 ) );

//se imprime el resultado
	cout << "El resultado es: " << gaussiana << "\n";
	
	system("pause");																//con estas variables se finaliza el programa
	return 0;
}

/*
Sin usar la función pow quedaría así:
gaussiana = 1/( desviacion_tipica * sqrt( 2 * PI ) ) * exp ( -0.5 * ( ( abcisa - esperanza )/desviacion_tipica ) * ( abcisa - esperanza )/desviacion_tipica );
*/
