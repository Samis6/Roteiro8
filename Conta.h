#ifndef CONTA_H
#define CONTA_H
#include "Iconta.h"
#include <string>

class Conta : public Iconta{
	
	private:
	
	std::string nomeCliente;
	double salarioMensal, limite, saldo;
	int numeroConta;

	public:
	Conta();
	Conta(std::string, double, int, double);
	void set_nomeCliente(std::string);
	void set_salarioMensal(double);
	void set_saldo(double);
	void set_numeroConta(int);
	void set_limite(double);

	std::string get_nomeCliente();
	double get_salarioMensal();
	double get_limite();
	double get_saldo();
	int get_numeroConta();
	
	virtual void sacar(double);
	virtual void depositar(double);

	virtual void definirLimite();



};
#endif
