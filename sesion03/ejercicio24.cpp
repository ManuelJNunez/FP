/*
El siguiente programa introducira el numero de la variable X en la Y, el de la Y en la Z y el de la Z en la X.
*/

#include <iostream>														//Inclusión de los recursos de E/S
#include <cmath>														//Inclusión de los recursos matemáticos

using namespace std;

int main(){																//Clase principal
	double x, y, z, auxiliar, auxiliar2;								//Inicializa las variables
	
//introduccion de datos
	cout << "Inserte un numero X: ";
	cin >> x;
	cout << "Inserte un numero Y: ";
	cin >> y;
	cout << "Inserte un numero Z: ";									
	cin >> z;

	auxiliar = y;
	auxiliar2 = z;
	y = x;
	z = auxiliar;
	x = auxiliar2;
	
//salida de datos
	cout << "\nLa variable X vale: " << x << endl;
	cout << "La variable Y vale: " << y << endl;
	cout << "La variable Z vale: " << z << endl;
	
	system("pause");
	return 0;															//Finaliza el programa
}


