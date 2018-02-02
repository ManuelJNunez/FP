/*
El siguiente programa calculará la estimación de problación dentro de 3 años en un territorio
*/
#include <iostream>											//Inclusión de los recursos de E/S
#include <cmath>											//Inclusión de los recursos matemáticos

using namespace std;

int main(){
//se inicializan las variables
	unsigned long int tasa_natalidad, tasa_mortalidad, tasa_migracion, poblacion_inicial, poblacion_final;
	const int TEMP = 3;
	
	cout << "Introduzca la poblacion inicial: ";
	cin >> poblacion_inicial;
	cout << "Introduzca la tasa de natalidad: ";
	cin >> tasa_natalidad;
	cout << "Introduzca la tasa de mortalidad: ";
	cin >> tasa_mortalidad;
	cout << "Introduzca la tasa de migracion: ";
	cin >> tasa_migracion;
	
//se realizan los cálculos
	tasa_natalidad = poblacion_inicial * tasa_natalidad/1000;
	tasa_mortalidad = poblacion_inicial * tasa_mortalidad/1000;
	tasa_migracion = poblacion_inicial * tasa_migracion/1000;
	poblacion_final = ( TEMP ) * (poblacion_inicial + tasa_natalidad - tasa_mortalidad + tasa_migracion);
	
//se imprime el resultado
	cout << "La poblacion final seria de: " << poblacion_final << " habitantes\n";
	
//se finaliza el programa
	system("pause");
	return 0;
}
