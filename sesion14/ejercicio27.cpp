#include <iostream>

using namespace std;

int main(){
	int util_filas, util_columnas, num;
	
	cout << "Inserte el tamaño de la matriz (numero de filas y columnas): ";
	cin >> util_filas >> util_columnas;
	
	int matriz[util_filas][util_columnas], traspuesta[util_columnas][util_filas];
	
	cout << "Ahora inserte los valores de la matriz:\n";
	
	for( int i = 0; i < util_filas; i++ )
		for( int j = 0; j < util_columnas; j++ ){
			cin >> num;
			matriz[j][i] = num;
			traspuesta[i][j] = num;
		}
	
	cout << "La traspesta de la matriz sería:\n";
			
	for( int k = 0; k < util_columnas; k++ ){
		for( int t = 0; t < util_filas; t++ ){
			cout << traspuesta[t][k] << " ";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
