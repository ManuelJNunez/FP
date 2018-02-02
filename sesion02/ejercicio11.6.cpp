/*
El siguiente programa calculará la diferencia en segundos entre 2 momentos del día
*/
#include <iostream>								//inclusión de los recursos de E/S
#include <cmath>									//inclusión de los recursos matemáticos

using namespace std;

int main(){											//clase principal
//se inicializan las variables
	int hora_i, minuto_i, segundo_i, hora_f, minuto_f, segundo_f, dif_horas, dif_minutos, dif_segundos, dif;
	const int H_S = 3600;
	const int M_S = 60;
	
//se le pregunta al usuario los datos
	cout << "Introduzca la hora inicial: ";
	cin >> hora_i;
	cout << "Introduzca el minuto inicial: ";
	cin >> minuto_i;
	cout << "Introduzca el segundo inicial: ";
	cin >> segundo_i;
	cout << "Introduzca la hora final: ";
	cin >> hora_f;
	cout << "Introduzca el minuto final: ";
	cin >> minuto_f;
	cout << "Introduzca el segundo final: ";
	cin >> segundo_f;
	
//se relaizan los cálculos
	dif_horas = hora_f - hora_i;
	dif_minutos = minuto_f - minuto_i;
	dif_segundos = segundo_f - segundo_i;
	dif = ( dif_horas * H_S ) + ( dif_minutos * M_S ) + dif_segundos;

//salida de datos
	cout << "La diferencia entre los dos momentos seria de: " << dif << " segundos\n";
	
//finaliza el programa
	system("pause");
	return 0;
}
