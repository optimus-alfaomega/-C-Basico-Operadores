/*
Autor: Miguel Duss�n
Fecha: Mar 18, 2013 9:16 PM
*/

/*
Este programa determina si un n�mero entero es negativo
utilizando una estructura S�-Entonces
*/

#include <iostream>
	
using namespace std;

int main(){
	int numero = 0;
	
	//Mensaje explicando el programa
	cout << "Este programa determina si un numero entero es negativo ";
	cout<<"utilizando una estructura Si-Entonces"<<endl<<endl;
	
	cout << "Escriba un numero: ";
	cin >> numero;
	/*
		Estructura selectiva S�-Entonces (If).
		El alcance de la estructura se identifica porque abre y cierra 
		llaves ({}).
		La condici�n para que ejecute el c�digo dentro de la estructura es
		que el n�mero sea menor que cero.
	*/
	if(numero<0){			//Abre la estructura
		//Imprime un mensaje si el n�mero es negativo
		cout << "El numero es negativo";
	}									//Cierra la estructura
	
	cin.get();
	
	return 0;
}
