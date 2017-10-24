#ifndef COMISSIONADOS_H
#define COMISSIONADOS_H
#include "Funcionario.h"

class Comissionados : public Funcionario{
private:
	double vendasSemanais;
	double percentualComissao;
	double salarioBase;
public:
	Comissionados(std::string, int, double, double, double);
	void set_vendasSemanais(double);
	void set_percentualComissao(double);
	void set_salarioBase(double);

	double get_vendasSemanais();
	double get_percentualComissao();
	double get_salarioBase();

	virtual double calcularSalario();

};

#endif
