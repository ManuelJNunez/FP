/*
El siguiente programa calculará la diferencia en segundos entre 2 momentos del día en los que un coche ha entrado en el 
parking y ha salido y calculará el precio que le ha costado aparcar en dicho lugar.
*/
#include <iostream>								//inclusión de los recursos de E/S
#include <cmath>									//inclusión de los recursos matemáticos

using namespace std;

int main(){											//clase principal
//se inicializan las variables
	int hora_i, minuto_i, segundo_i, hora_f, minuto_f, segundo_f, dif_horas, dif_minutos, dif_segundos, dif;
	double cantidad;
	const int H_M = 60;
	const double TRAMO1 = 0.0412;
	const double TRAMO2 = 0.0370;
	const double TRAMO3 = 0.0311;
	const double TRAMO4 = 0.0305;
	const double MASDE660 = 31.55;
	
//se le pregunta al usuario los datos
	cout << "Introduzca la hora inicial, minuto inicial y segundo inicial (separados por espacios): ";
	cin >> hora_i >> minuto_i >> segundo_i;
	cout << "Introduzca la hora final, minutos inicial y segundo final (separados por espacios): ";
	cin >> hora_f >> minuto_f >> segundo_f;
	
//se realizan los cálculos
	dif_horas = hora_f - hora_i;
	dif_minutos = minuto_f - minuto_i;
	dif_segundos = segundo_f - segundo_i;
	dif = ( dif_horas * H_M ) + ( dif_minutos ) + ( dif_segundos / 60 );

	if( dif <= 30 ){
		cantidad = dif * TRAMO1;
	}
	else if( dif <= 90 ){
		cantidad = ( ( dif - 30 ) * TRAMO2 ) + ( 30 * TRAMO1 );
	}
	else if( dif <= 120 ){
		cantidad = ( ( dif - 90 ) * TRAMO3 ) + ( 60 * TRAMO2 ) + ( 30 * TRAMO1 );
	}
	else if( dif <= 660 ){
		cantidad = ( ( dif - 120 ) *TRAMO4 ) + ( 30 * TRAMO3 ) + ( 60 * TRAMO2 ) + ( 30 * TRAMO1 );
	}
	else if( dif > 660 ){
		cantidad = MASDE660;	
	}
	
//salida de resultado
	cout << "La cantidad que debe pagar seria de: " << cantidad << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
