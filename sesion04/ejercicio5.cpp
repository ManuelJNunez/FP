/*
El siguiente programa leerá las variables del salario que gana un trabajador por hora, la satisfaccion de los clientes con el, las hors trabajadas este mes y los casos resueltos.
Si el numero de casos resueltos es mayor que 30 se le suma un 4% al sueldo.
*/
#include <iostream>								//Inclusión de los recursos de E/S
#include <cmath>								//Inclusión de los recursos matemáticos

using namespace std;

int main(){										//clase principal
//inicialización de variabbles
	double salario_hora, satisfaccion, sueldo;
	int horas, resueltos;
	
//entrada de datos
	cout << "Introduzca el salario: ";
	cin >> salario_hora;
	cout << "Introduzca las horas que ha trabajado este mes: ";
	cin >> horas;
	cout << "Introduzca el numero de casos resueltos de manera satisfactoria: ";
	cin >> resueltos;
	cout << "Introduzca el grado medio de satisfaccion de los usuarios con el trabajador: ";
	cin >> satisfaccion;
	
//se calcula el sueldo
	sueldo = salario_hora * horas;

//si se cumple la condicion de haber resuelto 30 casos satisfactoriamente se le suma un 4% al sueldo	
	if( resueltos > 30){
		sueldo = sueldo * 1.04;
	}
	
//salida del resultado
	cout << "\nEl sueldo del trabajador es de: " << sueldo << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
