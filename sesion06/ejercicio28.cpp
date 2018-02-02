/*
El siguiente programa calculará cual de los 3 trabajadores tienen mayor media de satisfaccion a sus clientes y el numero de casos introducidos
*/
#include <iostream>															//Inclusión de recursos de E/S
#include <cmath>															//Inclusión de recursos matemáticos

using namespace std;

int main(){																	//Clase principal
//inicializacion de variables
	int id, dur, contador, contador1, contador2, contador3;
	bool resuelto;
	double salario_hora, satisfaccion, satisfaccion1, satisfaccion2, satisfaccion3, media1, media2, media3;
	
	contador = satisfaccion1 = satisfaccion2 = satisfaccion3 = 0;
	
//entrada de datos
	cout << "Introduzca el salario por hora de los empleados: ";
	cin >> salario_hora;
	
	cout << "Ahora introduzca con espacios y en el mismo orden la id del empleado, duracion (en segundos) de ";
	cout << "la llamada, si se ha resuelto o no el problema ( 1 o 0) y el grado de satisfaccion (-1 para terminar)" << endl;
	cin >> id >> dur >> resuelto >> satisfaccion;
	
	while ( id != -1 ){														//Funciona mientras que el id sea distinto de -1 (valor centinela)
		contador++;
		if ( id == 1 ){
			satisfaccion1 = satisfaccion1 + satisfaccion;
			contador1++;
		}
		else if ( id == 2 ){
			satisfaccion2 = satisfaccion2 + satisfaccion;
			contador2++;	
		}
		else if ( id == 3 ){
			satisfaccion3 = satisfaccion3 + satisfaccion;
			contador3++;
		}
		cin >> id >> dur >> resuelto >> satisfaccion;
	}	//while
	
	if ( contador != 0 ){													//Esta estructura condicional evita que se meta en los calculos y comparaciones si no se han introducido datos
		cout << "Se han introducido " << contador << " casos" << endl;
	
	//se calculan las medias
		media1 = satisfaccion1/contador1;
		media2 = satisfaccion2/contador2;
		media3 = satisfaccion3/contador3;
		
		if ( media1 > media3 && media1 > media2 ){							//Esta estructura condicional sirve para encontrar al trabajador con mayor media
			cout << "El 1 tiene mejor satisfaccion y su media es de: " << media1 << endl;
			cout << media1 << endl;
		}
		else if ( media2 > media3 && media2 > media1 ){
			cout << "El 2 tiene mejor satisfaccion y su media es de: " << media2 << endl;
		}
		else{
			cout << "El 3 tiene mejor satisfaccion y su media es de: " << media3 << endl;
		}
	}	//if
	else{
		cout << "No se introdujeron datos" << endl;
	}

//finaliza el programa
	system("pause");
	return 0;
}
