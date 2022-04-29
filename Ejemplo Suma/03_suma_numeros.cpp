/*
Autor: Miguel Dussán
Fecha: Mar 18, 2013 9:14 PM
*/

/*
Este programa suma dos números
*/

#include <iostream>

using namespace std;

int main(){
	int a;			//Declaración de entero
	int b = 0;	//Declaración e inicialización en la misma línea
	int c = 0;
	a = 0;			//Inicialización
	
	cout << "Este programa suma dos numeros" << endl << endl;
	
	cout << "Primer numero? ";	//Solicita el primer número
	cin >> a;					//Captura el primer número por teclado
	
	cout << "Segundo numero? ";	//Solicita el segundo número
	cin >> b;					//Captura el segundo número por teclado
	
	c = a + b;				//Realiza la operación y la almacena en una variable
	
	//Imprime la operación. 
	cout << a ;
	cout << " + ";
	cout << b ;
	cout << " = ";
	cout << c ;
	cout << endl;
	//Las impresiones en pantalla se pueden hacer también en una sola línea
	cout << a << " + " << b << " = " << c << endl;
	
	cin.get();
	
	return 0;
}
