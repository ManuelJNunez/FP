#include <iostream>													//inclusión de los recursos de E/S
#include <cmath>														//inclusión de los recursos matemáticos

using namespace std;

int main(){																//Programa principal
	double radio;														//inicializa la variable radio
	double area; 														//inicializa la variable area
	double longitud;													//inicializa la variable longitud
	const double PI = 3.1416;										//establece la constante PI
	
	cout << "Indique el radio del círculo (en cm): ";		//pregunta al usuario el radio del círculo
	cin >> radio;														//introduce el radio en la variable
	
	area = PI*radio*radio;											//calcula el area del circulo
	longitud = 2*PI*radio;											//calcula la longitud del circulo
	
	cout << "\nEl area de la circunferencia seria " << area;
	cout << " cm y su longitud de " << longitud;
	cout << " cm\n";														//dice al usuario la longitud y area del circulo

	system("pause");
	return 0;																//se cierra el programa con esta orden
}

