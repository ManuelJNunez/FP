#include <iostream>

using namespace std;

class SecuenciaEnteros{
   private:
      static const int TAM = 500;
      int secuencia[TAM], utils;
      
   public:
      SecuenciaEnteros(){
         utils = 0;
      }
      
      void setSecuencia( int num ){
         secuencia[utils] = num;
         utils++;
      }
      
      int getUtils(){
         return utils;
      }
      
      int getSecuencia(int pos){
         return secuencia[pos];
      }
      
      SecuenciaEnteros Union( SecuenciaEnteros sec ){
         SecuenciaEnteros resultado; 
         bool encontrado;
		
	  	   encontrado = false;     	
      	
         for( int i = 0; i < utils; i++ ){
        	   resultado.setSecuencia(secuencia[i]);
         }
        
         for(int i = utils; i < sec.utils + utils ; i++){
            for(int j = 0; j < resultado.utils && !encontrado; j++){
               if( sec.secuencia[i-utils] == resultado.secuencia[j] )
                  encontrado = true;
            }
			
			if( !encontrado )
        		resultado.setSecuencia(sec.secuencia[i-utils]);
        		
        	encontrado = false;
		   }
        
         return resultado;
	   }
	   
	   SecuenciaEnteros Interseccion( SecuenciaEnteros sec ){
	      SecuenciaEnteros resultado;
	      bool encontrado;
         
         encontrado = false;	      
	      
	      for(int i = 0; i < utils; i++){
	         for(int j = 0; j < sec.utils && !encontrado; j++){
	            if( secuencia[i] == sec.secuencia[j] ){
	               encontrado = true;
	               resultado.setSecuencia(secuencia[i]);
               }
            }
            encontrado = false;
         }
	      
	      return resultado;
      }
      
      SecuenciaEnteros Diferencia( SecuenciaEnteros sec ){
         SecuenciaEnteros resultado;
         bool encontrado;
         
         encontrado = false;	      
	      
	      for(int i = 0; i < utils; i++){
	         for(int j = 0; j < sec.utils && !encontrado; j++){
	            if( secuencia[i] == sec.secuencia[j] ){
	               encontrado = true;
               }
            }
            
            if(!encontrado)
               resultado.setSecuencia(secuencia[i]);
            
            encontrado = false;
         }
         
         return resultado;
      }
      
      SecuenciaEnteros DifSimetrica( SecuenciaEnteros sec ){
         SecuenciaEnteros resultado, uni, inter;
         bool encontrado;
         
         encontrado = false;
         uni = Union(sec);
         inter= Interseccion(sec);
         
         for(int i = 0; i < uni.utils; i++){
            for( int j = 0; j < inter.utils && !encontrado; j++ )
               if( uni.secuencia[i] == inter.secuencia[j] )
                  encontrado = true;
                  
            if( !encontrado )
               resultado.setSecuencia(uni.secuencia[i]);
               
            encontrado = false;
         }
         
         return resultado;
      }
};

int main(){
   SecuenciaEnteros sec1, sec2, operacion;
   const int CENTINELA = -1;
   int numero, utils;
   
   cout << "Introduce una secuencia de números: ";
   cin >> numero;
   
	while( numero != CENTINELA ){
      sec1.setSecuencia(numero);
      cin >> numero;
	}
   
   cout << "Introduce la otra secuencia de números: ";
   cin >> numero;
   
	while( numero != CENTINELA ){
      sec2.setSecuencia(numero);
      cin >> numero;
	}
   
   operacion = sec1.Union(sec2);
   
   cout << "UNIÓN: {";
   
   utils = operacion.getUtils();
   
	for(int t = 0; t < utils; t++ ){
		cout << operacion.getSecuencia(t);
		
		if( t < utils-1 )
			cout << ",";
	}
   
   cout << "}" << endl;
   
   operacion = sec1.Interseccion(sec2);
   
   cout << "INTERSECCIÓN: {";
   
   utils = operacion.getUtils();
   
	for(int t = 0; t < utils; t++ ){
		cout << operacion.getSecuencia(t);
		
		if( t < utils-1 )
			cout << ",";
	}
   
   cout << "}" << endl;
   
   operacion = sec1.Diferencia(sec2);
   
   cout << "DIFERENCIA: {";
   
   utils = operacion.getUtils();
   
	for(int t = 0; t < utils; t++ ){
		cout << operacion.getSecuencia(t);
		
		if( t < utils-1 )
			cout << ",";
	}
   
   cout << "}" << endl;
   
   operacion = sec1.DifSimetrica(sec2);
   
   cout << "DIFERENCIA SIMÉTRICA: {";
   
   utils = operacion.getUtils();
   
	for(int t = 0; t < utils; t++ ){
		cout << operacion.getSecuencia(t);
		
		if( t < utils-1 )
			cout << ",";
	}
   
   cout << "}" << endl;
   
   system("pause");
   return 0;
}
