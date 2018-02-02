#include <iostream>
#include <string>

using namespace std;

const int TAM = 200, ASCII = 255;

class SecuenciaCaracteres{
	private:
		char secuencia[TAM];
		int freq[ASCII], utils;
	
	public:
		SecuenciaCaracteres(){
			for( int t =  0; t <= ASCII; t++ )
				freq[t] = 0;
				
			utils = 0;
		}
		
		int getUtils(){
			return utils;
		}
		
		void setSecuencia( char letra ){
			secuencia[utils] = letra;
			utils++;
		}
		
		char getSecuencia( int pos ){
			return secuencia[pos];
		}
		
		void CountingSort(){
			int minimo, maximo;
			
			minimo = 255;
			maximo = 0;
				
			for( int i = 0; i < utils; i++ ){
				freq[secuencia[i]]++;
				
				if( secuencia[i] < minimo )
					minimo = secuencia[i];
				
				if( secuencia[i] > maximo )
					maximo = secuencia[i];
			}
			
			CountingSortEntre( minimo, maximo );
		}
		
		void CountingSortEntre( char min, char max ){
			int k = 0;
			
			for( int n = min; n <= max; n++ ){
				while( freq[n] > 0 ){
					secuencia[k] = n;
					freq[n]--;
					k++;
				}
			}
		}
};

int main(){
	SecuenciaCaracteres sec;
	const char CENTINELA = 35;
	char caracter;
	int contador;
	
	cout << "Inserte una cadena de caracteres: ";
	cin >> caracter;
	
	while( caracter != CENTINELA ){
		sec.setSecuencia(caracter);
		cin >> caracter;
	}
	
	sec.CountingSort();
	contador = sec.getUtils();
	
	for( int i = 0; i < contador; i++ )
		cout << sec.getSecuencia(i) << " "; 
	
	cout << endl;
	
	system("pause");
	return 0;
}
