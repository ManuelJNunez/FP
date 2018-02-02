#include <iostream>
#include <cmath>

using namespace std;

const int S_TO_H = 3600;

double LeerEnRango(){
	const int MAXIMO, MINIMO;
	double valor;
	do{
		cin >> valor;
	}while( valor > MAXIMO || valor < MINIMO );
	
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
	}else
		cout << "No has introducido datos de un trabajador";
	
	return media;
}

double SalarioFinal( double salario_hora, int horas_trabajadas, int resueltos, double satisfaccion ){
	const int SUBIDA4 = 0.04, SUBIDA3 = 0.03, SUBIDA2 = 0.02, MUCHOSRESUELTOS = 30, ACEPTABLESRESUELTOS = 20;
	const double  SATISFACCIONBUENA = 4;
	double aumento, salario;
	
	aumento = 1;
	salario = horas_trabajadas * salario_hora;
	
		if( resueltos > MUCHOSRESUELTOS )
			aumento += SUBIDA4;
		else if( resueltos > ACEPTABLESRESUELTOS )
			aumento += SUBIDA3;
	
		if( satisfaccion >= SATISFACCIONBUENA )
			aumento += SUBIDA2;
		
		salario *= aumento;
	
		return salario;
}

int main(){
	double salario_hora, duracion, satisfaccion, satisfaccion1, satisfaccion2, satisfaccion3;
	int id_operador, contador1, contador2, contador3, resueltos1, resueltos2, resueltos3, tiempo1, tiempo2, tiempo3;
	bool resuelto;
	string mensaje;
	const int CENTINELA = -1, ID_OP1 = 1, ID_OP2 = 2, ID_OP3 = 3;
	
	contador1 = contador2 = contador3 = resueltos1 = resueltos2 = resueltos3 = tiempo1 = tiempo2 = 
	tiempo3 = satisfaccion1 = satisfaccion2 = satisfaccion3 = 0;
	
	cout << "Inserte el sueldo por hora: ";
	cin >> salario_hora;
	
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
	
	cout << endl << SalarioFinal(salario_hora, SegundosAHoras(tiempo1), resueltos1, Media(satisfaccion1,contador1)) << endl;
	cout << SalarioFinal(salario_hora, SegundosAHoras(tiempo2), resueltos2, Media(satisfaccion2,contador2)) << endl;
	cout << SalarioFinal(salario_hora, SegundosAHoras(tiempo3), resueltos3, Media(satisfaccion3,contador3)) << endl;
	
	system("pause");
	return 0;
}
