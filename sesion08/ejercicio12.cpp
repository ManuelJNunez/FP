#include <iostream>
#include <cmath>

using namespace std;

const int S_TO_H = 3600;

double LeerEnRango(){
	double valor;
	do{
		cin >> valor;
	}while( valor > 5 || valor < 0 );
	
	return valor; 
}

int SegundosAHoras( int tiempo ){
	tiempo = tiempo / S_TO_H;
	
	return tiempo;
}

double Media( double suma, double denominador ){
	double media;
	if( denominador != 0 ){
		media = suma / denominador;
		
		return media;
	}else
		cout << "No has introducido datos de un trabajador";
}

double SalarioFinal( double salario_hora, int horas_trabajadas, int resueltos, double satisfaccion, int lim_resueltos1, int lim_resueltos2, double satisfaccionaceptable,
	double aumentoresueltos1, double aumentoresueltos2, double aumentosatisfaccion ){
	double aumento, salario;
	
	aumento = 1;
	salario = horas_trabajadas * salario_hora;
	
		if( resueltos > lim_resueltos2 )
			aumento += aumentoresueltos2;
		else if( resueltos > lim_resueltos1 )
			aumento += aumentoresueltos1;
	
		if( satisfaccion >= satisfaccionaceptable )
			aumento += aumentosatisfaccion;
		
		salario *= aumento;
	
		return salario;
}

int main(){
	double salario_hora, duracion, satisfaccion, satisfaccion1, satisfaccion2, satisfaccion3, 
	satisfaccionaceptable, aumentoporresueltos1, aumentoporresueltos2, aumentoporsatisfaccion;
	int id_operador, contador1, contador2, contador3, resueltos1, resueltos2, resueltos3, tiempo1, 
	tiempo2, tiempo3, lim_resueltos1, lim_resueltos2;
	bool resuelto;
	string mensaje;
	const int CENTINELA = -1, ID_OP1 = 1, ID_OP2 = 2, ID_OP3 = 3;
	
	contador1 = contador2 = contador3 = resueltos1 = resueltos2 = resueltos3 = tiempo1 = tiempo2 = 
	tiempo3 = satisfaccion1 = satisfaccion2 = satisfaccion3 = 0;
	
	cout << "Inserte el sueldo por hora: ";
	cin >> salario_hora;
	
	cout << "Inserte (en el mismo orden y con espacios): Los 2 límites de aumento por casos resueltos, ";
	cout << "el limite aceptable de satisfaccion y con el mismo orden los aumentos: ";
	cin >> lim_resueltos1 >> lim_resueltos2 >> satisfaccionaceptable >> 
	aumentoporresueltos1 >> aumentoporresueltos2 >> aumentoporsatisfaccion;
	
	cout << "Inserte (en el mismo orden y con espacios): ID, duracion, resuelto, satisfaccion: ";
	cin >> id_operador;
	
	while ( id_operador != CENTINELA ){
		cin >> duracion >> resuelto;
		satisfaccion = LeerEnRango();
		
		if( id_operador == ID_OP1 ){
			contador1++;
			satisfaccion1 += satisfaccion;
			tiempo1 += duracion;
			if ( resuelto == 1 )
				resueltos1++;
		}
		
		if( id_operador == ID_OP2 ){
			contador2++;
			tiempo2 += duracion;
			satisfaccion2 += satisfaccion;
			if ( resuelto == 1 )
				resueltos2++;
		}
		
		if( id_operador == ID_OP3 ){
			contador3++;
			tiempo3 += duracion;
			satisfaccion3 += satisfaccion;
			if ( resuelto == 1 )
				resueltos3++;
		}
		
		cin >> id_operador;
	}
	
	
	
	cout << endl << SalarioFinal(salario_hora, SegundosAHoras(tiempo1), resueltos1, Media(satisfaccion1,contador1), 
	lim_resueltos1, lim_resueltos2, satisfaccionaceptable, aumentoporresueltos1, aumentoporresueltos2, aumentoporsatisfaccion ) << endl;
	cout <<  SalarioFinal(salario_hora, SegundosAHoras(tiempo2), resueltos2, Media(satisfaccion2,contador2), 
	lim_resueltos1, lim_resueltos2, satisfaccionaceptable, aumentoporresueltos1, aumentoporresueltos2, aumentoporsatisfaccion ) << endl;
	cout << SalarioFinal(salario_hora, SegundosAHoras(tiempo3), resueltos3, Media(satisfaccion3,contador3), 
	lim_resueltos1, lim_resueltos2, satisfaccionaceptable, aumentoporresueltos1, aumentoporresueltos2, aumentoporsatisfaccion ) << endl;
	
	system("pause");
	return 0;
}
