#include "dames.h"


int main()
{
	Tauler tauler;

	tauler.inicialitza("dames_input.txt");
	cout << tauler.toString();
}