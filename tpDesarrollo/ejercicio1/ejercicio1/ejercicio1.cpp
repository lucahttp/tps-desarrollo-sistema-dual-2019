
//ejercicio 1

//4#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;


int main()
{
	int unaVariable = 0;
	int entrada = 0;

	for (int index = 0; index < 10; index++)
	{
		cout << "Ingresa un numero: ";
		cin >> entrada;
		if (entrada > unaVariable)
		{
			unaVariable = entrada;

		}
	}

	std::cout << unaVariable;
}