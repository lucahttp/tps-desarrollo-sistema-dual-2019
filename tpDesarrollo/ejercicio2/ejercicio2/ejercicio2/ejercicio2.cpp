
// ejercicio 2

//#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

const int cantidadMaxima = 5;
const int mayoresQue = 100;
const int menoresQue = -10;


int main()
{

	int numerosIngresados[cantidadMaxima];

	int promedioNumeros = 0;
	int sumaNumeros = 0;
	int contadorDeNumeros = 0;
	int entrada = 0;

	for (int index = 0; index < cantidadMaxima; index++)
	{
		cout << "Ingresa un numero: ";
		cin >> numerosIngresados[index];
		if (numerosIngresados[index] > mayoresQue)
		{
			promedioNumeros = promedioNumeros + numerosIngresados[index];
			contadorDeNumeros++;

		}
		else  if (numerosIngresados[index] < menoresQue)
		{
			sumaNumeros = numerosIngresados[index] + sumaNumeros;
		}
	}

	cout << "el promedio de los numeros mayores que 100 es: " << (promedioNumeros / contadorDeNumeros) << endl;
	cout << "la suma de los numeros menores que -10 es: " << sumaNumeros;

}