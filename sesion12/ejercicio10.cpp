#include <iostream>
#include <cmath>

using namespace std;

const int ASCII = 255;

class SecuenciaCaracteres{
	private:
		int freq[ASCII];
	public:
		SecuenciaCaracteres(){
			for ( int i = 0; i <= ASCII; i++ )
				freq[i] = 0;
		}
		
		void setFreq( char carac ){
			freq[carac]++;
		}
			
		void Moda( char& letra, int& rep ){
			for( int i = 0; i <= ASCII; i++ ){
				if ( freq[i] > rep ){
				rep = freq[i];
				letra = i;
				}
			}
		}
};

int main(){
	SecuenciaCaracteres sec;
	int mayor_freq;
	char caracter;
	
	mayor_freq = 0;
	
	cout << "Inserte un texto: ";
	caracter = cin.get();

	while( caracter != '#' ){
		sec.setFreq(caracter);
		caracter = cin.get();
	}
	
	sec.Moda( caracter, mayor_freq );
	
	cout << "El caracter que mas se repide es: " << caracter << " y se repite: " << mayor_freq << " veces" << endl;
	
	system("pause");
	return 0;
}

