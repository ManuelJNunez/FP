/*
El siguiente programa imprimirá todas las descomposiciones posibles de un número introducido
*/
#include <iostream>				//Inclusión de recursos de E/S
#include <cmath>				//Inclusión de recursos matemáticos

using namespace std;

int main(){		//Clase principal
//Inicialización de variables
	int num, suma, j, h;
	
//Entrada de datos
	cout << "Introduzca un numero: ";
	cin >> num;

//CÓMPUTOS
	for ( int i=1; i <= ( num/2 ); i++ ){
		j = i;
		suma = 0;
			while( suma < num ){			//Este bucle encuentra secuencias
				suma += j;
				j++;
			}
			if( suma == num ){				//Una vez que encuentra una secuencia correcta se pasa a este condicional
				suma = 0;
				h = j-1;
				while ( suma < num ){		//Este bucle sirve para imprimir las secuencias correctas
					cout << h << " ";
					suma += h;
					h--;
				}
			cout << endl;
			}
	}

//Finaliza el programa
	system("pause");
	return 0;
}
