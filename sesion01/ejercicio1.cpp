#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int salario_base;
	int salario_final;
	int incremento;
		
   salario_base = 1000;
	salario_final = salario_base;
	incremento = 200;
	salario_final = salario_final + incremento;
	salario_base = 3500;
		
	cout << "\nSalario base: " << salario_base;
	cout << "\nSalario final: " << salario_final;
}

/* Si se modifica el salario_base, también se modificara el salario_final porque se igualan las variables, por lo que sí
están ligadas durante todo el programa*/
