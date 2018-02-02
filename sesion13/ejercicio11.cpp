#include <iostream>

using namespace std;

const int TAM = 1000;

class SecuenciaDoubles{
	private:
		double secuencia[TAM];
		int utils;
	
	public:
		void setSecuencia( double num, int pos ){
			secuencia[pos] = num;
		}
		
		double getSecuencia( int pos ){
			return secuencia[pos];
		}
		
		void setUtils( int contador ){
			utils = contador;
		}
		
		
};

int main(){
	SecuenciaDoubles sec;
	const int CENTINELA = -1;
	double entrada, ref;
	int contador, k;
	
	contador = 0;
	
//entrada de datos
	cout << "Introduzca un conjunto de numeros reales positivos: ";
	cin >> entrada;

//este bucle while se encarga de pasar los datos al vector privado
	while( entrada != CENTINELA ){
		sec.setSecuencia(entrada, contador);
		contador++;
		cin >> entrada;
	}
	
	cout << "Ahora introduza el numero de referencia y el numero k: ";
	cin >> ref >> k;
	
	double mayores_que[k];
	
	sec.setUtils(contador);
	sec.OrdenarSecuencia( k, mayores_que[k], ref );
	
	for ( int r = 0; r <= k; r++ )
		cout << mayores_que[r] << " ";
		
	cout << endl;
	
	system("pause");
	return 0;
}
