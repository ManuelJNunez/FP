#include <iostream>																		//inclusión de los recursos E/S
#include <cmath>																			//inclusión de los recursos matemáticos

using namespace std;

int main(){
	double capital;
	double interes;
	double total;																				//se inicializan las variables
	
	cout << "Introduzca la cantidad de dinero depositada (en euros): ";		//se le pregunta al usuario la cantidad depositada
	cin >> capital;																			//esa cantidad se introduce en la variable capital
	
	cout << "Introduzca ahora el interes (numero entre 0 y 100): ";			//el usuario introduce el interés
	cin >> interes;																			//se introduce en la variable
	
	total = capital + capital * interes / 100;										//se calcula el total
	
	cout << "El total sería de: " << total;											//se calcula el total
	cout << "\n";
	
	system("pause");																			
	return 0;																					//se cierra el programa
}

/*Sí se podría, usando solo capital sería mejor, porque solo se usa una variable y se utiliza menos memoria*/
