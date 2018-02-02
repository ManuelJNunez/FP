/*Escojo la alternativa b*/
#include <iostream>																							//inclusión de los recursos de E/S
#include <cmath>																								//inclusión de los recursos matemáticos

using namespace std;

int main(){																										//clase principal
	double salario_base;																						//se abre la variable del salario base
	double salario_final;																					//se abre la variale del salario final
	
	cout << "Introduce el salario base: ";																//se le pregunta al usuario el salario base
	cin >> salario_base;
	
	salario_final = salario_base * 1.02;																//se calcula el salario final al aumentar el 2%
	
	cout << "El salario con el incremento de un 2% seria de: " << salario_final;			//se muestra el resultado en pantalla
	cout << "\n";
	
	system("pause");
	return 0;																									//con esta orden finaliza el programa

}
