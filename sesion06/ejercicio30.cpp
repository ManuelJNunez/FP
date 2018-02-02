/*
El siguiente programa sirve para separar con espacios las cifras del numero introducido
*/
#include <iostream>									//Inclusión de los recursos de E/S
#include <cmath>									//Inclusión de recursos matemáticos

using namespace std;

int main(){											//Clase principal
//inicialización de variables
	int num, cifras, aux, divisor;
	
	cifras = 0;
	
//entrada de datos
	cout << "Introduce un numero: ";
	cin >> num;
	
	aux = num;
	
	while( aux != 0 ){								//Este bucle while sirve para averiguar cuantas cifras tiene el numero introducido
		aux /= 10;
		cifras++;
	}
	
/*
Este bucle divide entre 10 elevado al numero de cifras restado a las cifras menos las veces que se repide el bucle.
Luego hace el modulo del numero entre el divisor de antes para sacar el resto y continuar con el bucle.
*/
	while( cifras != 0 ){
		cifras--;
		divisor = pow (10, cifras);
		cout << num/divisor << " ";
		num = num % divisor;
	}
	
	cout << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
