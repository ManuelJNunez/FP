/*
El siguiente programa transforma las letras mayúsculas en minúsculas
*/
#include <iostream>															//Inclusión de los recursos de E/S
#include <cmath>															//Inclusión de los recursos matemáticos

using namespace std;

int main(){																	//Clase principal
	char caracter;																//Se inicializa la variable que guardará el carácter
	
//entrada de datos
	cout << "Introduzca un caracter en mayuscula: ";
	cin >> caracter;
	
//Se le suma 32 porque las minusculas se diferencian 32 posiciones en la tabla ASCII
	caracter = caracter + 32;
	
//salida de datos
	cout << "El caracter en mayuscula: " << caracter << endl;

//finaliza el programa	
	system("pause");
	return 0;
}
