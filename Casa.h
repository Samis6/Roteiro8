#ifndef CASA_H
#define CASA_H
#include "Imovel.h"

class Casa : public Imovel{
private:
	int numeroDePavimentos;
	int qtDeQuartos;
	double areaTerreno;
	double areaConstruida;
public
	Casa();
	
	void set_numeroDePavimentos(int);
	void set_qtDeQuartos(int);
	void set_areaTerreno(double);
	void set_areaConstruida(double);

	int get_numeroDePavimentos();
	int get_qtDeQuartos();
	double get_areaTerreno();
	double get_areaConstruida();

	virtual void getDescricao();


};
#endif
