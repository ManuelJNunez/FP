#include <iostream>													//Inclusión de recursos de E/S
#include <cmath>													//Inclusión de recursos matemáticos

using namespace std;

int main(){															//clase principal
//inicialización de variables
	int num, max, min, intentos;
	const int MAX_INT = 3;
	
	intentos = 0;
	
//el siguiente bucle  do/while verifica que los datos esten en el intervalo correcto
	do{
		cout << "Introduce un numero positivo: ";
		cin >> min;
	}while ( min <= 0 );
	
//el siguiente bucle do/while verifica que los datos esten en el intervalo correcto
	do{
		cout << "Introduce un numero mayor que el de antes: ";
		cin >> max;
	}while( max <= min );
	
/*
el siguiente bucle do/while verifica que los datos esten en el intervalo correcto ([min,max]), 
si no lo estan el usuario tiene 3 intentos para acertar
*/
	do{
		cout << "Introduce un valor en el intervalo [min,max]: ";
		cin >> num;
		intentos++;
		if( num <= max && num >= min ){
			intentos = 	MAX_INT;
		}
	}while( intentos < MAX_INT );
	
//la siguiente estructura condicional sirve para saber si del bucle anterior se salio con o sin exito
		if( num <= max && num >= min ){
			cout << endl << num - min << " " << max - num << endl;
		}else{
			cout << "\nYa lo has intentado demasiadas veces sin exito" << endl;
		}
	
//con esta orden finaiza el programa
	system("pause");
	return 0;
}
