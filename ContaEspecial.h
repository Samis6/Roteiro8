#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include <string>

class ContaEspecial : public Conta{
private:
	
public:
	ContaEspecial();
	ContaEspecial(std::string, double, int, double);
	virtual void definirLimite();
};

#endif
