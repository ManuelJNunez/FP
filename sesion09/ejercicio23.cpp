#include <iostream>					//Inclusión de recursos de E/S
#include <cmath>					//Inclusión de recursos matemáticos

using namespace std;

class Recta{
	private:
		double a, b, c, x, y;												//datos miembros privados
		
		bool SonCorrectos( double num1, double num2 ){						//método privado para evitar que a y b sean 0 simultaneamente
			return ! ( num1 > 0 || num2 > 0 );
		}
	
	public:
		Recta(){															//constructor
			a = 0;
			b = 0;
			c = 0;
		}
		void setCoeficientes( double coefa, double coefb, double coefc ){	//este método establece los coeficientes que son datos miembros privados
			if ( !SonCorrectos(coefa, coefb) ){
				a = coefa;
				b = coefb;
				c = coefc;
			}
		}

		void setParametros( double paramx, double paramy ){					//este método establece los parametros privados
			x = paramx;
			y = paramy;
		}
	
		double Pendiente(){													//este metodo calcula la pendiente											
			if ( b != 0 )
				return -(a/b);
		}

		double Ordenada(){													//este calcula la ordenada perteneciente a la abcisa
			if ( b != 0 )
				return ( -c - (x*a) )/b;
		}
	
		double Abcisa(){													//y este la abcisa perteneciente a la ordenada
			if ( a != 0 )
				return ( -c - (y*b) )/a;
		}
};	//fin de la clase

int main(){											//clase principal
//inicialzación de variables y de objetos de clase
	const int TAM = 5;
	Recta uno;
	Recta dos;
	double entradas[5], entra;
	double entrax, entray;
	int utils;
	
	utils = 0;

//entrada de datos
	cout << "Introduzca los 3 coeficientes de las 2 rectas: ";
	cin >> entra;
	
	while( utils < 5 ){
		entradas[utils] = entra;
		utils++;
		cin >> entra;
	}
	
	cout << "Ahora introduzca una abcisa y una ordenanada: ";
	cin >> entrax >> entray;
	
	uno.setParametros(entrax,entray);
	uno.setCoeficientes(entradas[0], entradas[1], entradas[2]);
	dos.setCoeficientes(entradas[3], entradas[4], entradas[5]);
	
//salida de la solución
	cout << "Pendiente recta 1: " << uno.Pendiente() << endl;
	cout << "Pendiente recta 2: " << dos.Pendiente() << endl;
	cout << "La abcisa perteneciente a la ordenada seria: " << uno.Abcisa() << endl;
	cout << "La ordenada perteneciente a la abcisa seria: " << uno.Ordenada() << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}	//main
