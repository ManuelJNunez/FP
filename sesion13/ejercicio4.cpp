#include <iostream>
#include <string>

using namespace std;

const int TAM = 1000;

class SecuenciaCaracteres{
	private:
		char secuencia[TAM];
	
	public:
		void setSecuencia( char letra, int pos ){
			secuencia[pos] = letra;
		}
		
		string Descodificador( int utils ){
			string descodificado;
				
			descodificado = "";
			
			for ( int i = 0; i <= utils; i++ ){
				if( i == 0 && secuencia[0] != ' ' )
					descodificado += secuencia[0];
				
				if( secuencia[i] == ' ' ){
					if( secuencia[i-2] != ' ' && (i-2) > 0 )
						if(secuencia[i-1] != ' ' && i > 0 )
							descodificado += secuencia[i-1];
						
					if(secuencia[i+1] != ' ' && i < (utils-1) )
						descodificado += secuencia[i+1];
				}
			}
			
			return descodificado;
		}
};

int main(){
	SecuenciaCaracteres text;
	const char CENTINELA = 35;
	char caracter;
	int utils_c;
	
	utils_c = 0;
	
//entrada de datos
	cout << "Inserte un texto codificado: ";
	caracter = cin.get();
	
//este bucle inserta todas las letras del bucle introducido en el vector
	while ( caracter != CENTINELA ){
		text.setSecuencia( caracter, utils_c );
		utils_c++;
		caracter = cin.get();
	}
	
	cout << text.Descodificador( utils_c ) << endl;
	
	system("pause");
	return 0;
}
