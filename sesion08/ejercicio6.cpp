/*
El siguiente ejercicio hará la sumatorio de un número factorial (usando funciones) y lo irá sumando a un numero factorial menor hasta llegar a 1
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int LeeIntRango ( string mensaje ){
	int valor;
		do{
			cout << mensaje;
			cin >> valor;
		}
		while ( valor < 1 || valor > 20 );

	return valor;
}

int SumaFactoriales ( int num ){
	int multiplicador, suma;
	
	suma = 0, multiplicador = 1;
	
		for ( int i = num; num != 0; i-- ){
			multiplicador *= i;
			
			if ( i <= 1 ){
				suma += multiplicador;
				i = num;
				num--;
				multiplicador = 1;
			}
		}
	
	return suma;
}

// int Factorial( int factorial );

int main(){
//inicialización de variables
	string mensaje;
	
	mensaje = "Introduce un numero entre 1 y 20: ";
	
//salida de resultados
	cout << "El resultado es: " << SumaFactoriales(LeeIntRango(mensaje)) << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}

/*
int SumaFactoriales( int num ){
	return Factorial(num);
}

int Factorial( int factorial ){
	int suma, multiplicando, multiplicador;
	
	suma = 0;
	
	while( factorial != 0 ){
		multiplicando = factorial;
		multiplicador = 1;
		while ( multiplicando != 0 ){					//Este bucle se encarga de encontrar el valor del factorial
			multiplicador *= multiplicando;
			multiplicando--;
		}
		suma += multiplicador;							//Una vez encontrado se va sumando
		factorial--;									//Se le resta una unidad a t para hacer el proximo factorial, hasta llegar a 0, que es cuando se cierra el bucle
	}
	return suma;
}
*/
