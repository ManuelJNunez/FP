/*
El siguiente pograma lee un año e indica si es bisiesto o no
*/
#include <iostream>						//Inclusión de los recursos de E/S
#include <cmath>						//Inclusión de los recursos matemáticos

using namespace std;

int main(){								//Clase principal
	int num;							//Inicialización de la variable que corresponde a los años
	
//entrada de datos
	cout << "Introduce un año para saber si es bisiesto o no: ";
	cin >> num;
	
	if( num%4 == 0 && num%100 != 0 ){					//Si el numero es multiplo de 4 y no es multiplo de 100 es bisiesto
		cout << "Es bisiesto" << endl;
	}else if( num%400 == 0 ){							//Si el numero es multiplo de 400 tambien e bisiesto
		cout << "Es bisiesto" << endl;
	}else{												//Si no se cumple ninguna condicion anterior no es bisiesto
		cout << "No es bisiesto" << endl;
	}
	
//finaliza el programa
	system("pause");
	return 0;
}
