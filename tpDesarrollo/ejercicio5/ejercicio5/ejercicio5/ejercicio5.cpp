
//  ejercicio 5.1

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

int main()
{

	int numeritoMagico = 0;

	cout << "ingrese una fecha en formato YYYYMMDD: " << endl;
	cin >> numeritoMagico;


	cout << yyyymmdd(numeritoMagico, Y) << " ";

	if (yyyymmdd(numeritoMagico, M) < 10)
	{
		cout << "0";
	}

	cout << yyyymmdd(numeritoMagico, M) << " " << yyyymmdd(numeritoMagico, D);

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