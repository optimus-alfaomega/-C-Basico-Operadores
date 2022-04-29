/*
Autor: Miguel Duss�n
*/

/*
Escriba un programa que determine si un n�mero es positivo y menor que 100
*/

#include <iostream>
	
	using namespace std;

int main(){
	int numero = 0;							//Declaraci�n e inicializaci�n
	
	cout << "Escriba un numero: ";			//Impresi�n en pantalla
	cin >> numero;							//Captura por teclado del n�mero
	
	/*
	Estructura selectiva con una condicional compuesta.
	Tiene dos condiciones unidas por un Y l�gico (&&).
	Como el if se compone por una sola l�nea, puede dejarse sin
	llaves.
	*/
	if(numero>0 && numero<100)
		cout << "El numero es positivo y menor a 100";
	
	cin.get()
		
	return 0;
}
