#include <iostream>				//Inclusión de recursos de E/S
#include <cmath>				//Inclusión de recursos matemáticos

using namespace std;

int main(){		//clase principal
//inicialización de variables
	const int TAM = 1000;
	char codificada[TAM], descodificada[TAM], caracter;
	int utils_c, utils_d;
	
	utils_c = utils_d = 0;

//entrada de datos
	cout << "Inserte un texto codificado: ";
	caracter = cin.get();
	
//este bucle inserta todas las letras del bucle introducido en el vector
	while ( caracter != '#' ){
		codificada[utils_c] = caracter;
		utils_c++;
		caracter = cin.get();
	}
	
//este bucle se encarga de decodificar el mensaje
	for ( int i = 0; i <= utils_c; i++ ){
		if( i == 0 && codificada[0] != ' ' ){
			descodificada[utils_d] = codificada[0];
			utils_d++;
		}
		if( codificada[i] == ' ' ){
			if(codificada[i-1] != ' ' && i > 0 ){
				descodificada[utils_d] = codificada[i-1];
				utils_d++;
			}
			if(codificada[i+1] != ' ' && i < (utils_c-1) ){
				descodificada[utils_d] = codificada[i+1];
				utils_d++;
			}
		}
	}
	
//este bucle imprime la solución en pantalla
	for ( int t = 0; t <= utils_d; t++ )
		cout << descodificada[t];
		
	cout << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
