#include <iostream>
#include <cmath>

using namespace std;

const int PI = 3.1416;

class Punto2D{
	private:
		double x, y;
		
	public:
		Punto2D(){
			x = 0;
			y = 0;
		}
		
		Punto2D(double coordx, double coordy){
			setCoordenadas(coordx, coordy);
		}
		
		void setCoordenadas( double abcisa, double ordenada ){
			x = abcisa;
			y = ordenada;
		}
};

class PoligonoRegular{
	private:
		Punto2D centro;
		int nlados;
		double llados;
	
	public:
		PoligonoRegular(){
			nlados = 3;
			llados = 1;
			centro = Punto2D(0,0);
		}
		
		PoligonoRegular( double longitud, int lados ){
			llados = longitud;
			nlados = lados;
			centro = Punto2D(0,0);
		}
		
		PoligonoRegular( double longitud, int lados, Punto2D el_centro ){
			llados = longitud;
			nlados = lados;
			centro = el_centro;
		}
		
		double Radio(){
			return ( llados / ( 2.0 * sin(PI / nlados) ) );
		}
		
		double Perimetro(){
			return ( llados * nlados );
		}
		
		double Area(){
			double r = Radio();
						
			return ( ( nlados / 2.0 ) * r * r * sin(2 * PI / nlados) );
		}
		
		double Diferencia(){
			return ( Area() - Radio() );
		}
		
		bool Mayorque( PoligonoRegular otro ){
			return ( Area() > otro.Area() );
		}
		
		PoligonoRegular PoligonoNuevo( int k ){
			PoligonoRegular nuevo(NuevaLongitud(k), k*nlados, centro);
			
			return nuevo;
		}
		
		double NuevaLongitud( int k ){
			double r;
			
			r = Radio();
			
			return ( r * sqrt( 2 * ( 1 - cos( 2 * PI / k * nlados ) ) ) );
		}
};

int main(){
	PoligonoRegular poligono1, poligono2(4,6), p(poligono1.PoligonoNuevo(2));
	if( poligono1.Mayorque(poligono2) )
		cout << "El polígono 1 es mayor que el polígono 2";
	else
		cout << "El polígono 2 es mayor que el polígono 1";
	
	cout << poligono1.Radio();
	cout << endl;
	
	cout << "El área del nuevo polígono es: " << p.Area() << endl;
	
	system("pause");
	return 0;
}
