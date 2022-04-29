/*
Autor: Miguel Duss�n
*/

/*
Dise�e un programa que calcule e imprima en pantalla el di�metro, 
la longitud y el �rea de un c�rculo, dado r ingresado por el usuario.
El programa debe asumir que PI = 3.14159.
*/

#include <iostream>
#include <math.h> //Se utiliza para importar la funci�n de la operaci�n potencia
	
	using namespace std;

int main(){
	float pi= 3.14159;		//Declaraci�n e inicializaci�n del n�mero decimal pi
	int r = 0;				//Declaraci�n e inicializaci�n del radio
	float diametro = 0;		//Variable de coma flotante para el di�metro
	float longitud = 0;		//Variable de coma flotante para la longitud
	float area = 0;			//Variable de coma flotante para el �rea
	
	//Mensaje descriptivo
	cout << "Este programa calcula el diametro, la longitud y el area de ";
	cout<< "un circulo utilizando el radio ingresado por el usuario."<<endl<<endl;
	
	cout << "Escriba el radio del circulo: ";	//Impresi�n en pantalla
	cin >> r;									//Captura por teclado del n�mero
	
	diametro = 2 * r;
	longitud = pi * 2 * r;
	area = pi * pow(r,2);			//pow(r,2) eleva r a la potencia de 2: r^2.
	
	/*Imprimir los resultados
	El caracter "\t" representa una tabulaci�n, se usa para alinear los
	caracteres a la derecha */
	cout << "Diametro para un circulo de radio " << r << ":\t" << diametro << endl;
	cout << "Longitud para un circulo de radio " << r << ":\t" << longitud << endl;
	cout << "Area para un circulo de radio " << r << ":\t" << area << endl;
	
	cin.get();
	
	return 0;
}
