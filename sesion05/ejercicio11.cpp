/*
El siguiente programa leerá las variables del salario que gana un trabajador por hora, la satisfaccion de los clientes con el, las hors trabajadas este mes y los casos resueltos.
Si el numero de casos resueltos es mayor que 30 se le suma un 4% al sueldo y si la satisfaccion de los clientes es de mas de 4 se le sumaun 2%.
*/
#include <iostream>							//inclusión de los recursos de E/S
#include <cmath>							//inclusión de los recursos matemáticos

using namespace std;

int main(){									//clase principal
//inicialización de variables
	double salario_hora, satisfaccion, sueldo, suma;
	int horas, resueltos;
	
	suma = 0;
	
//introducción de datos a las variables
	cout << "Introduzca el salario: ";
	cin >> salario_hora;
	cout << "Introduzca las horas que ha trabajado este mes: ";
	cin >> horas;
	cout << "Introduzca el numero de casos resueltos de manera satisfactoria: ";
	cin >> resueltos;
	cout << "Introduzca el grado medio de satisfaccion de los usuarios con el trabajador: ";
	cin >> satisfaccion;
	
//se calcula el sueldo sin la suma de porcentajes
	sueldo = salario_hora * horas;
	
//si se cumple las condiciones se suma un porcentaje al sueldo
	if ( resueltos > 30 ){
		suma = suma + 0.04;
	}
	else if ( resueltos >= 20 && resueltos <= 30 ){
		suma = suma + 0.03;
	}
	if( satisfaccion >= 4 ){
		suma = suma + 0.02;
	}
	
//cómputo
	sueldo = sueldo * ( 1 + suma );
	
//salida de datos
	cout << "\nEl sueldo del trabajador es de: " << sueldo << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
