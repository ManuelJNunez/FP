#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1416;

class Circunferencia{
	private:
		double xcentro, ycentro, radio;
	
	public:
		void setCentro ( double x, double y ){
			xcentro = x;
			ycentro = y;
		}
		
		void setRadio( double rad ){
			radio = rad;
		}
		
		double Longitud(){
			return 2 * PI * radio;
		}
		
		double Area(){
			return  PI * pow( radio, 2 );
		}
		
		double DistanciaCentro( double x, double y ){	
			return sqrt ( pow( ( xcentro - x ), 2 ) + pow( ( ycentro - y ), 2 ) );
		}
};

int main(){
	Circunferencia cir;
	double x, y, r;
	
	cout << "Inserte las coordenadas de centro de la circunferencia y su radio: ";
	cin >> x >> y >> r;
	
	cir.setCentro( x, y );
	cir.setRadio( r );
	
	cout << "La longitud de la circunferencia vale: " << cir.Longitud() << endl;
	cout << "El area de la circunferencia vale: " << cir.Area() << endl;
	
	cout << endl << "Ahora introduzca las coordenadas de un punto: ";
	cin >> x >> y;
	
	if ( cir.DistanciaCentro( x, y ) <= r ){
		cout << "El punto introducido esta dentro de la circunferencia";
	}else{
		cout << "El punto introducido no esta dentro de la circunferencia";
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}
