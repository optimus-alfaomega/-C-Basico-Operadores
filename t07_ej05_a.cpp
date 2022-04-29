/*
Autor: Miguel Duss�n
*/

/*
Escriba un programa que permita al usuario introducir N n�meros enteros, y 
permita determinar el mayor y el menor de los n�meros introducidos.
*/

#include <iostream>

/*
Esta biblioteca se utiliza para extraer la constante del n�mero m�s grande
y m�s peque�o del tipo int
*/
#include <climits> 
	
using namespace std;

int main(){
	int cantidad_numeros = 0;
	int numero = 0;
	int numero_mayor = INT_MIN;	//Constante que indica el n�mero m�s peque�o de
								//los enteros
								//Se asigna este valor para que cualquier 
								//n�mero lo supere y sea, en principio, el mayor
	int numero_menor = INT_MAX;	//Constante que indica el n�mero m�s peque�o de 
								//los enteros. Se asigna este valor para que 
								//cualquier n�mero sea menor
	int contador = 0;
	
	//Mostrar explicaci�n del programa
	cout << "Este programa permite al usuario introducir N numeros enteros, y"; 
	cout <<"determinar el mayor y el menor de los numeros introducidos.";
	cout<<endl<<endl;
	
	//Pedir la cantidad de n�meros
	cout << "Cuantos numeros desea ingresar? ";
	cin >> cantidad_numeros;
	
	//Mientras el contador sea menor a la cantidad de n�meros
	while(contador < cantidad_numeros){	
		cout << "Numero? ";				//Pedir un n�mero
		cin >> numero;
		
		// Revisar si este n�mero es mayor al n�mero m�s grande guardado
		if(numero > numero_mayor)		
			//Si es mayor, se guarda como el mayor de los ingresados
			numero_mayor = numero;		
		
		// Revisar si este n�mero es menor al n�mero m�s peque�o guardado
		if(numero < numero_menor){
			//Si es menor, se guarda como el menor de los ingresados
			numero_menor = numero;		
		}
		/*
		Operador unario, que incrementa en 1 del contador.
		Equivalente a: 
		contador = contador + 1;
		*/
		contador++;						
	}
	
	//Mostrar los n�meros en pantalla
	cout << "El numero mayor entre los ingresados es: " << numero_mayor << endl;
	cout << "El numero menor entre los ingresados es: " << numero_menor << endl;
	
	cin.get();
	
	return 0;
}
