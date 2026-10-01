/* realice un programa que permita al ususario tres numeros y diga cuales son los divisores en comun.
realice un programa que reciba un monto en bs y taza de conversion a $ y devuelva el monto en $
*/
#include <iostream>
using namespace std;
int main (){
	int numero1,numero2,numero3,numero_mayor;
	
	cout<<"ingrese el numero:"; cin>>numero1;
	cout<<"ingrese el numero:"; cin>>numero2;
	cout<<"ingrese el numero:"; cin>>numero3;
	
	if (numero1>=numero2 && numero1>=numero3){
		numero_mayor=numero1;
	}
	if (numero2>=numero1 && numero2>=numero3){
		numero_mayor=numero2;
	}
	if (numero3>=numero2 && numero3>=numero1){
		numero_mayor=numero3;
	}
	cout<<"el numero mayor es:"<<numero_mayor;
	
	
	
	return 0;
}