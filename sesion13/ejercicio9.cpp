#include <iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAM = 500;
		char secuencia[TAM];
		int utils;
	
	public:
		SecuenciaCaracteres(){
			utils = 0;
		}
		
		void Aniade( char letra ){
			secuencia[utils] = letra;
			utils++;
		}
		
		char getSecuencia( int pos ){
			return secuencia[pos];
		}
		
		int getUtils(){
			return utils;
		}
		
		void Inserta( SecuenciaCaracteres modificacion, int pos_insercion ){
			int k;
			
			k = 0;
			utils += modificacion.getUtils();
			
			for( int i = utils; i > pos_insercion; i-- ){
				secuencia[i] = secuencia[i - modificacion.getUtils()];
			}
			
			for( int j = pos_insercion; j < ( pos_insercion + modificacion.getUtils() ); j++ ){
				secuencia[j] = modificacion.getSecuencia(k);
				k++;
			}
		}
};

int main(){
	SecuenciaCaracteres seq;
	SecuenciaCaracteres mod;
	const char CENTINELA = '#';
	char caracter;
	int posicion;
	
	cout << "Introduce un texto: ";
	caracter = cin.get();
	
	while( caracter != CENTINELA ){
		seq.Aniade(caracter);
		caracter = cin.get();
	}
	
	cout << "Introduzca en que posición quiere inserta la nueva secuencia: ";
	cin >> posicion;
	
	cout << "Introduzca el texto que quiere añadir: ";
	caracter = cin.get();
	
	while( caracter != CENTINELA ){
		if ( caracter != '\n' )
			mod.Aniade(caracter);
			
		caracter = cin.get();
	}
	
	seq.Inserta( mod, posicion );
	
	for( int i = 0; i <= seq.getUtils(); i++ )
		cout << seq.getSecuencia(i);
	
	cout << endl;
	
	system("pause");
	return 0;
}
