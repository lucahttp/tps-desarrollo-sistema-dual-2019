

// ejercicio 5,4

//#include "pch.h"
#include <iostream>
#include <sstream>

using namespace std;

const int cantidadMaxima = 500;
const int mayoresQue = 100;
const int menoresQue = -10;

enum formato {
	Y = 1,
	D = 2,
	M = 3
};

int yyyymmdd(int bb, int aa);

	string meses[12]
	{
		"enero",
		"febrero",
		"marzo",
		"abril",
		"mayo",
		"junio",
		"julio",
		"agosto",
		"septiembre",
		"octubre",
		"noviembre",
		"diciembre"
	};
	

int main()
{
	string colour[4] = { "Blue", "Red", "Orange", "Yellow" };
	string meses[12]
	{
		"enero",
		"febrero",
		"marzo",
		"abril",
		"mayo",
		"junio",
		"julio",
		"agosto",
		"septiembre",
		"octubre",
		"noviembre",
		"diciembre"
	};
	
	int numeritoMagico = 0;

	cout << "ingrese una fecha en formato YYYYMMDD: " << endl;
	cin >> numeritoMagico;

	cout << yyyymmdd(numeritoMagico, D) << " de ";

	cout << meses[yyyymmdd(numeritoMagico, M) - 1] << " de ";

	cout << yyyymmdd(numeritoMagico, Y);


		


}

int yyyymmdd(int bb, int aa)
{
	int exportAnio = 0;
	int exportMes = 0;
	int exportDia = 0;

	switch (aa)
	{
	case Y:
	{
		exportAnio = bb / 10000;
		return exportAnio;
	}; break;
	case M:
	{
		exportMes = (bb - ((bb / 10000) * 10000)) / 100;

		return exportMes;
	}; break;
	case D:
	{
		exportDia = bb - ((bb / 10000) * 10000) - ((bb - ((bb / 10000) * 10000)) / 100) * 100;
		return exportDia;
	}; break;

	default:
		break;
	}
}









/*


// C++ program to demonstrate array of strings using
// array of strings.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Initialize String Array
	string colour[4] = {"Blue", "Red", "Orange", "Yellow"};

	// Print Strings
	for (int i = 0; i < 4; i++)
		cout << colour[i] << "\n";
}


*/