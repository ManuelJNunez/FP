#include <iostream>

using namespace std;

int main(){
	const int NUM_VOC = 5, MAXREP = 500, ASCII = 255;
	const char CENTINELA = '*';
	char matriz[NUM_VOC][MAXREP] = {32};
	char caracter;
	int freq[ASCII] = {0}, maxrep, pos;
	
	maxrep = pos = 0;
	
	cout << "Inserte el texto: ";
	caracter = cin.get();
	
	while(caracter != CENTINELA){
		if(caracter == 'a' ||caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ){
			freq[caracter]++;
			if( freq[caracter] > maxrep )
				maxrep = freq[caracter];
		}
		
		caracter = cin.get();
	}
	
	for(int i = 0; i < ASCII; i++){
		if( i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ){
			for(int j = 0; j <= freq[i]; j++){
				matriz[pos][j] = '*';
			}
			pos++;
		}
	}
	
	for( int i = maxrep; i > 0; i-- ){
		for( int j = 0; j < NUM_VOC; j++ ){
			if( j == 0 )
				cout << i;
				
			cout << " " << matriz[j][i];
			
			if( j == NUM_VOC - 1 )
				cout << endl;
		}
	}
	
	cout << "  " << "a" << " " << "e" << " " << "i" << " " << "o" << " " <<  "u" << endl;
	
	system("pause");
	return 0;
}
