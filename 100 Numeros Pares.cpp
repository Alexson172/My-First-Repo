/* ESCRIBE UN PROGRAMA QUE IDENTIFIQUE LOS PRIMEROS 100 NUMEROS PARES*/
#include <iostream>
using namespace std;
int main (){
int i;

for (i = 1; i <= 200; i++){

  if (i % 2 == 0){

  cout << "El numero: " << i << " es par\n";

  }
  
}

return 0;

}