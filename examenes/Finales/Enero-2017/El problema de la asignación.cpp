/*
El siguiente programa buscará en la matriz de datos la asignación de técnicos más barata posible
*/
#include <iostream>

using namespace std;

int main(){
   const int TAM = 500;
   int n, valor, x[TAM][TAM] = {0}, b[TAM][TAM], suma, min, imin, jmin, t;
   
   min = 101;
   suma = 0;
   
   cout << "Ingrese el número de pedidos y técnicos: ";
   cin >> n;
   
   cout << "Ahora el precio de cada técnico: ";
   
   for(int j = 0; j < n; j++){
      for(int i = 0; i < n; i++){
         cin >> valor;
         b[i][j] = valor;
      }
   }
   
   for(int j = 0; j < n; j++){
      for(int i = 0; i < n; i++){
         t = j - 1;
         
         while( t >= 0 ){
            if( x[i][t] == 1 ){
               b[i][j] = 101;
            }
            t--;
         }
         
         if( b[i][j] < min ){
            imin = i;
            jmin= j;
            min = b[i][j];
         }
      }
      x[imin][jmin] = 1;
      suma += b[imin][jmin];
      min = 101;
   }
   
   cout << endl;
   
   for(int j = 0; j < n; j++){
      for(int i = 0; i < n; i++){
         cout << x[i][j] << " ";
      }
      cout << endl;
   }
   
   cout << endl;
   
   cout << "Coste de la asignación: " << suma << endl;
   
   system("pause");
   return 0;
}
