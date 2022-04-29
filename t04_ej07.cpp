/*
Autor: Miguel Duss�n
*/

/*
Escriba un programa que determine si un n�mero entero n es impar
*/

#include <iostream>
	
using namespace std;

int main(){
	
	int numero = 0;						//Declaraci�n e inicializaci�n
	
	//Mensaje descriptivo
	cout << "Programa que determina si un numero entero n es impar"<<endl<<endl;
	
	cout << "Escriba un numero: ";		//Impresi�n en pantalla
	cin >> numero;										//Captura por teclado del n�mero
	
	/*
	Estructura selectiva con la condici�n:
	si el n�mero MOD 2 es diferente de cero, entonces el n�mero es impar
	*/
	
	if(numero%2 != 0)
		cout << "El numero es impar";
	
	cin.get();
	
	return 0;
}
