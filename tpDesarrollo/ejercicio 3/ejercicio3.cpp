//EJERCICIO 3

#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

const int cantidadMaxima = 500;
const int mayoresQue = 100;
const int menoresQue = -10;


int main()
{
	int numerosIngresados[cantidadMaxima];
	int index = 0;
	int valorMaximo = 0;
	int valorPuntero = 0;

	do
	{
		cout << "Ingresa un numero: ";
		cin >> numerosIngresados[index];

		if (numerosIngresados[index] > valorMaximo)
		{
			valorMaximo = numerosIngresados[index];

			valorPuntero = index;
		}

	index++;
	}while (numerosIngresados[index-1] > 0);



	cout << "el numero mas grande ingresado fue: " << valorMaximo << endl;
	cout << "y se ubicaba en la posicion: " << valorPuntero+1;
}