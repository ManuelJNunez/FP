#include <iostream>

using namespace std;

class SecuenciaCaracteres{
   private:
      static const int TAMANIO = 100;
      char secuencia[TAMANIO];
      int utils;
      
   public:
      SecuenciaCaracteres(){
         utils = 0;
      }
      
      int getUtils(){
         return utils;
      }
      
      int Capacidad(){
         return TAMANIO;
      }
      
      void Aniade( char nuevo ){
         secuencia[utils] = nuevo;
         utils++;
      }
      
      char Elemento( int indice ){
         return secuencia[indice];
      }
      
      bool Contiene( SecuenciaCaracteres q ){
         int iguales, posencontrado;
         bool encontrado;
         
         encontrado = false;
         
         iguales = posencontrado= 0;
         
         if( utils > q.utils ){
            for(int i = 0; i <= q.utils; i++){
               for(int j = posencontrado; j <= utils && !encontrado; j++){
                  if( q.secuencia[i] == secuencia[j] ){
                     iguales++;
                     encontrado = true;
                     posencontrado = j+1;
                  }
               }
               encontrado = false;
            }
         }
         
         return ( iguales == q.utils );
      }
};

int main(){
   SecuenciaCaracteres p, q;
   const char CENTINELA = '#';
   char caracter;
   string cadena;
   
   cout << "Ingrese una secuencia: ";
   caracter = cin.get();
   
   while( caracter != CENTINELA ){
      p.Aniade(caracter);
      caracter = cin.get();
   }
   
   cout << "Ahora ingrese la otra secuencia: ";
   caracter = cin.get();
   
   while( caracter != CENTINELA ){
      q.Aniade(caracter);
      caracter = cin.get();
   }
   
   if( p.Contiene(q) )
      cout << "P contiene a Q";
   else
      cout << "P no contiene a Q";
      
   cout << endl;
   
   system("pause");
   return 0;
}
