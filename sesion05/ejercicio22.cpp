/*
El siguiente programa realizará unos cáculos estadísticos usando la gaussiana. El programa verificara si los datos introducidos estan en el rango correcto.
*/
#include <iostream>															//Inclusión de los recursos de E/S
#include <cmath>															//Inclusión de los recursos matemáticos

using namespace std;

int main(){																	//clase principal
//se inicializan las variables
	double media, desviacion, abcisa, gaussiana, minimo, maximo, incremento;
	const double PI = 3.1416;
	
//se introducen los datos
	cout << "Introduzca la esperanza: ";
	cin >> media;
	
	do{
		cout << "Introduzca la desviacion tipica: ";
		cin >> desviacion;
	}while( desviacion < 0 );{
		if( desviacion < 0 ){
		cout << "La desviacion no puede ser menor que 0";
		}
	}
	
	cout << "Introduzca el minimo: ";
	cin >> minimo;
	
	do{
		cout << "Introduzca el maximo: ";
		cin >> maximo;
	}while( minimo > maximo );{
		if( minimo > maximo ){
		cout << "El maximo no puede ser menor que el minimo";
		}
	}
	
	cout << "Introduzca el incremento: ";
	cin >> incremento;
	
	abcisa = minimo;
	
//se resuelve la ecuación
	while( abcisa <= maximo ){
		gaussiana = 1/( desviacion * sqrt( 2 * PI ) ) * exp ( -0.5 * pow ( ( ( abcisa - media )/desviacion ), 2 ) );
		cout << "El resultado es: " << gaussiana << "\n";
		abcisa += incremento;
	}
	
	system("pause");																//con estas variables se finaliza el programa
	return 0;
}
