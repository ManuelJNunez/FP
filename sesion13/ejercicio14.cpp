#include <iostream>

using namespace std;

const int TAMANIO = 500, ASCII = 255;

class SecuenciaCaracteres{
	private:
		char secuencia[TAMANIO];
		int freq[ASCII], utils, numletras;
		
	public:
		SecuenciaCaracteres(){
			for( int i = 0; i <= ASCII; i++ )
				freq[i] = 0;
			
			utils = 0;
			numletras = 0;
		}
		
		void Aniade( char letra ){
			secuencia[utils] = letra;
			if( freq[letra] == 0 )
				numletras++;
				
			freq[letra]++;
			utils++;
		}
		
		bool Similares( SecuenciaCaracteres secord ){
			bool similar;
			int iguales;
			
			iguales = 0;
			
			similar = false;
			
			if( secuencia[0] == secord.secuencia[0] && secuencia[utils] == secord.secuencia[secord.utils] ){
				for(int i = 0; i < ASCII; i++ ){
					if( freq[i] == secord.freq[i] && freq[i] != 0 ){
						iguales++;
					}
				}
				if( iguales == numletras )
					similar = true;
			}
			
			return similar;
		}
};

int main(){
	SecuenciaCaracteres desordenada;
	SecuenciaCaracteres ordenada;
	const char CENTINELA = '#';
	char caracter;
	bool igual;
	
	igual = false;
	
	cout << "Inserte la palabra desordenada: ";
	caracter = cin.get();
	
	while( caracter != CENTINELA ){
		desordenada.Aniade(caracter);
		caracter = cin.get();
	}
	
	cout << "Ahora la ordenada: ";
	caracter = cin.get();
	
	while( caracter != CENTINELA ){
		if( caracter != '\n' )
			ordenada.Aniade(caracter);
			
		caracter = cin.get();
	}
	
	if( desordenada.Similares(ordenada) ){
		cout << "Son similares" << endl;
	}else{
		cout <<"No son similares" << endl;
	}
	
	system("pause");
	return 0;
}
