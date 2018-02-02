/*
El siguiente programa calcula el salario final a partir del salario base
*/
#include <iostream>																							//inclusión de los recursos de E/S
#include <cmath>																								//inclusión de los recursos matemáticos

using namespace std;

int main(){																										//clase principal
//inicialización de variable salario_base																						
	double salario_base, salario_final, salario_final2;
	const double P1 = 1.02;
	const double P2 = 1.03;																																										
	
	cout << "Introduce el salario base: ";																//se le pregunta al usuario el salario base
	cin >> salario_base;
	
//se inicializan las constantes
	salario_final = salario_base * P1;
	salario_final2 = salario_final * P2;

//se muestran los resultados en pantalla
	cout << "El salario con el incremento de un 2% seria de: " << salario_final << "\n";
	cout << "El salario con el incremento de 2% mas de un 5% seria de: " << salario_final2 << "\n";
	
	system("pause");
	return 0;																									//con esta orden finaliza el programa

}
