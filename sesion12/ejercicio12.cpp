#include <iostream>

using namespace std;

const int TAM = 1000;

class SecuenciaCaracteres{
	private:
		char secuencia[TAM];
	
		bool EsCorrecto( int min, int max, int num ){
			return ( num >= min ) && ( num < max );
		}
	
	public:
		void setSecuencia( char letra, int pos ){
			secuencia[pos] = letra;
		}
		
		char getSecuencia(int pos){
			return secuencia[pos];
		}
		
		int EliminaBloque( int izq, int dcha, int utils ){
			int borrar;
			
			borrar = dcha-izq;
			
			for( int i = 0; i <= borrar; i++ ){
				for ( int t = izq; t < utils; t++ ){
					secuencia[t] = secuencia[t+1];
				}
				utils--;
			}
			
			return utils;
		}
		
		bool LeerIntPositivo( int utils, int num ){
			return EsCorrecto ( 0, utils, num );
		}
		
		bool LeeIntRango( int izq, int max, int num ){
			return EsCorrecto( izq, max, num );
		}
};

int main(){
	SecuenciaCaracteres text;
	const char CENTINELA = 35;
	char caracter;
	int borrarizq, borrardcha, contador;
	string mensaje;
	bool correcto;
	
	correcto = false;
	contador = 0;
	
	cout << "Introduzca un texto: ";
	caracter = cin.get();

	while( caracter != CENTINELA ){
		text.setSecuencia( caracter, contador );
		contador++;
		caracter = cin.get();
	}
	
	while ( !correcto ){
		cout << "Introduzca el numero a partir de donde quiera borrar: ";
		cin >> borrarizq;
		correcto = text.LeerIntPositivo( contador, borrarizq );
	}
	
	correcto = false;
	
	while ( !correcto ){
		cout << "Introduzca hasta donde quiere borrar: ";
		cin >> borrardcha;
		correcto = text.LeeIntRango( borrarizq, contador, borrardcha );
	}
	
	contador = text.EliminaBloque( borrarizq, borrardcha, contador );
	
	for( int r = 0; r < contador; r++ )
		cout << text.getSecuencia(r);
	
	cout << endl;
	
	system("pause");
	return 0;
}
