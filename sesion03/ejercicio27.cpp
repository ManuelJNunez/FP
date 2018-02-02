/*
El siguiente programa comparará los datos de entrada de las variables para ver si se cumple cierta condición. Si se cumple se imprime en pantalla 1 y si no 0.
*/
#include <iostream>																	//Inclusión de recursos de E/S
#include <cmath>																	//Inclusión de recursos matemáticos

using namespace std;

int main(){																			//Clase principal
//inicialización de variables
	char letra;
	int edad, anio, adivine, s_minus, s_rango, s_bisiesto, s_adivinado;
	bool minus, rango, bisiesto, adivinado = true;

//Entrada de datos
	cout << "Introduzca una letra: ";
	cin >> letra;
	cout << "Introduzca un numero a ver si acierta mi edad: ";
	cin >> edad;
	cout << "Introduzca un numero a ver si acierta el que tengo pensado: ";
	cin >> adivine;
	cout << "Introduzca un año para ver si es bisiesto: ";
	cin >> anio;
	
	if ( letra >= 97 && letra <= 122 ){												//Si la letra es mayuscula da true y si no, da false
		minus = true;
	}else{
		minus = false;
	}
	
	if ( edad < 18 || edad > 65 ){													//Si introduce un numero menor que 18 o mayor de 65 da true
		rango = true;
	}else{
		rango = false;
	}
	
	if ( adivine >= 1 && adivine <= 100 ){											//Si introduce un numero entre 1 y 100 da true
		adivinado = true;
	}else{
		adivinado = false;
	}
	
	if ( anio%4 == 0 && anio%100 != 0 ){											//Si el año es bisiesto (multiplo de 4 y de 400 pero no de 100) da true
		bisiesto = true;
	}else if ( anio%400 == 0 ){
		bisiesto = true;
	}else{
		bisiesto = false;
	}
	
	if ( minus == true ){															//Si el bool da true entonces la salida es 1, si no es 0
		s_minus = 1;
	}else{
		s_minus = 0;
	}
	
	if ( rango == true ){
		s_rango = 1;
	}else{
		s_rango = 0;
	}
	
	if ( adivinado == true ){
		s_adivinado = 1;
	}else{
		s_adivinado = 0;
	}
	
	if ( bisiesto == true ){
		s_bisiesto = 1;
	}else{
		s_bisiesto = 0;
	}
	
//Salida del resultado
	cout << "Salida: " << s_minus << s_rango << s_adivinado << s_bisiesto << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
