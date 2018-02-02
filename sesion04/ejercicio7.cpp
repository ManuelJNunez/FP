/*
En el siguiente programa hay que introducir 3 numeros. El programa los analiza para ver si estan ordenados de menor a mayor o de mayor de menor. Si no estan ordenados se imprime
"No estan ordenados".
*/
#include <iostream>								//inclusión de recursos de E/S
#include <cmath>								//Inclusión de recursos matematicos

using namespace std;

int main(){										//clase principal
//inicializacion de variables
	int num1, num2, num3;
	
//introduccion de datos
	cout << "Introduce un numero: ";
	cin >> num1;
	cout << "Introduce otro: ";
	cin >> num2;
	cout << "Introduce el ultimo: ";
	cin >> num3;
	
	if(num1 > num2 ){
		if (num2 > num3){						//si el numero 1 es mayor que el 2 y el 2 mayor que el 3 entonces estan ordenados
			cout << "Estan ordendos de mayor a menor" << endl;
		}else{
			cout << "No estan ordenados" << endl;
		}
	}
	else if(num3 > num2){
		if(num2 > num1){						//si el numero 3 es mayor que el 2 y el 2 mayor que el 1 entonces estan ordenados
			cout << "Estan ordenados de menor a mayor" << endl;
		}else{
			cout << "No estan ordenados" << endl;
		}	
	}
	else{										//si no se cumple ninguna condición anterior no estan ordenados
		cout << "No estan ordenados" << endl;
	}
	
//finaliza el programa
	system("pause");
	return 0;	
}
