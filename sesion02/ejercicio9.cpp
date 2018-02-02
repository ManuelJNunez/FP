/*
El siguiente programa hará un incremento de un 2% y un 3% a un salario base
*/
#include <iostream>																							//inclusión de los recursos de E/S
#include <cmath>																								//inclusión de los recursos matemáticos

using namespace std;

int main(){																										//clase principal
//inicialización de variables																							
	double salario_base;																						
	double salario_final;
	double salario_final2;																				
	
	cout << "Introduce el salario base: ";																//se le pregunta al usuario el salario base
	cin >> salario_base;

//se hacen los cálculos
	salario_final = salario_base * 1.02;
	salario_final2	= salario_final * 1.03;

//se muestran los resultados en pantalla
	cout << "El salario con el incremento de un 2% seria de: " << salario_final << "\n";
	cout << "El salario con el incremento de 2% mas de un 5% seria de: " << salario_final2 << "\n";
	
	system("pause");
	return 0;																									//con esta orden finaliza el programa

}
