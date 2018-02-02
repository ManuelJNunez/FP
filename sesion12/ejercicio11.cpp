#include <iostream>

using namespace std;

const int TAM = 10000;

class SecuenciaCaracteres{
	private:
		char secuencia[TAM];
		int utils;
	public:
		void setSecuencia( char letra, int pos ){
			secuencia[pos] = letra;
		}
		
		char getSecuencia( int pos ){
			return secuencia[pos];
		}
		
		void setUtils( int tamanio ){
			utils = tamanio;
		}
		
		int getUtils(){
			return utils;
		}
		
		void Buscar ( char busca ){
			for (int i = 0; i < utils; i++)
				if (secuencia[i] == busca){
					Elimina(i);
					i--;
				}
		}
		
		void Elimina( int pos ){
			utils--;
			
			for ( int t = pos; t <= utils; t++ )
				secuencia[t] = secuencia[t+1];
		}
};

int main(){
	SecuenciaCaracteres text;
	const char CENTINELA = 35;
	char caracter, encontrar;
	int contador, newtam;
	
	contador = 0;
	
	cout << "Introduzca un texto: ";
	caracter = cin.get();
	
	while( caracter != CENTINELA ){
		text.setSecuencia( caracter, contador );
		contador++;
		caracter = cin.get();
	}
	
	text.setUtils(contador);
	
	cout << "Caracter a eliminar: ";
	cin >> encontrar;
	
	text.Buscar(encontrar);
	newtam = text.getUtils();
	
	for( int r = 0; r <= newtam; r++ )
		cout << text.getSecuencia(r);
	
	cout << endl;
	
	system("pause");
	return 0;
}
