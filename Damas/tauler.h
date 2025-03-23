#pragma once
#include <string>
using namespace std;

#include "fitxes.h"


class Tauler
{
public:
	Tauler() : tornBlanques(true) {}
	void inicialitza(const string& nomFitxer);
	void actualitzaMovimentsValids(); // Recorre todas las Fitxes y actualiza su variable Moviment con todos los movimientos validos
	void getPosicionsPossibles(const Posicio& origen, int& nPosicions, Posicio posicionsPossibles[]);
	bool mouFitxa(const Posicio& origen, const Posicio& desti);
	string toString() const;

	void llegeixTauler(const string& nomFitxer, char tauler[N_FILES][N_COLUMNES]);
	void mostraTauler();

private:
	Fitxa m_tauler[N_FILES][N_COLUMNES];
	char m_taulerEnChars[N_FILES][N_COLUMNES];
	bool tornBlanques;
};
