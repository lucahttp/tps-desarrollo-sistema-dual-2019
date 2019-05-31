// ejercicio 4 
#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

const int cantidadMaxima = 500;
const int mayoresQue = 100;
const int menoresQue = -10;


int main()
{
	int numeritoMagico = 0;
	int numeroQueEsMultiploDe3 = 0;
	int numeroQueNoEsMultiploDe5ySiDe3 = 0;
	int temp = 0;
	int contador = 0;

	cout << "Decime un numero: " << endl;
	cin >> numeritoMagico;

	while(contador < numeritoMagico)
	{
		temp =temp +3;

		if ( (temp % 5) != 0)
		{

			cout << " "  << temp << " es divisible por 3 y no por 5" << endl;
			contador++;
		}
		
	}

}