/*
El siguiente ejercicio hará la sumatorio de un número factorial y lo irá sumando a un numero factorial menor hasta llegar a 1
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
//inicialización de variables
	int t, multiplicador, suma, multiplicando;
	
	suma = 0;
	
//Introducción de datos
	cout << "Introduzca un numero: ";
	cin >> t;

//*CÓMPUTO*	
	while( t != 0 ){
		multiplicando = t;
		multiplicador = 1;
		while ( multiplicando != 0 ){			//Este bucle se encarga de encontrar el valor del factorio
			multiplicador *= multiplicando;
			multiplicando--;
		}
		suma += multiplicador;					//Una vez encontrado se va sumando
		t--;									//Se le resta una unidad a t para hacer el proximo factorial, hasta llegar a 0, que es cuando se cierra el bucle
	}
	
//salida de resultados
	cout << "El resultado es: " << suma << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
