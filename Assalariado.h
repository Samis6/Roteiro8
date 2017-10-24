#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario{
private:
	double salario;
public:
	Assalariado(std::string, int, double);
	void set_salario(double);
	double get_salario();

	virtual double calcularSalario();
};

#endif