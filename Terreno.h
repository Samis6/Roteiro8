#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno : public Imovel {
private:
	double area;
public:
	Terreno();
	void set_area(double);
	double get_area();

	virtual void getDescricao();
};

#endif
