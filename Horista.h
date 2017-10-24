#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario{
private:
	double salarioPorHora;
	double horasTrabalhadas;
public:
	Horista(std::string, int, double, double);
	void set_salarioPorHora(double);
	void set_horasTrabalhadas(double);

	double get_salarioPorHora();
	double get_horasTrabalhadas();

	virtual double calcularSalario();

};

#endif