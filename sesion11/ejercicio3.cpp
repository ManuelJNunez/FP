#include <iostream>				//inclusión de recursos de E/S
#include <cmath>				//inclusión de recursos matemáticos

using namespace std;

int main(){
//inicialización de variables
	const int CENTINELA = -1, TAM = 10000;
	double v[TAM], mayores_que[TAM], entrada, aux, ref;
	int utils, utils2, k;
	
	utils = utils2 = 0;
	
//entrada de datos
	cout << "Introduzca un conjunto de numeros reales positivos: ";
	cin >> entrada;

//este bucle while se encarga de pasar los datos al vector
	while( entrada != CENTINELA ){
		v[utils] = entrada;
		utils++;
		cin >> entrada;
	}

//entrada de datos
	cout << "Ahora introduza el numero de referencia y el numero k: ";
	cin >> ref >> k;
	
//este bucle se encarga de buscar los numeros mayores que la referencia y ordenarlos en el vector mayores_que
	for ( int izda = 0; izda < utils; izda++ ){
		if( ref < v[izda] ){
			mayores_que[utils2] = v[izda];
			for(int i = utils2; i > 0 && mayores_que[i] < mayores_que[i-1]; i--){
				aux = mayores_que[i];
				mayores_que[i] = mayores_que[i-1];
				mayores_que[i-1] = aux;	
			}
			utils2++;
		}
	}
	
//este bucle se encarga de la salida de datos desde el vector mayores_que
	for ( int x = 0; x < utils2 && x < k; x++ )
		cout << mayores_que[x] << " ";
	
	cout << endl;

//finaliza el programa
	system("pause");
	return 0;
}
