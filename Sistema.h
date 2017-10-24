#ifndef SISTEMA_H
#define SISTEMA_H
#include "Assalariado.h"
#include "Comissionados.h"
#include "Horista.h"
#include "Funcionario.h"
#include <string>

class Sistema{
private:
	Funcionario *funcionario[3];
	double valorTotal;
public:
	Sistema();
	void set_funcionario(Funcionario *func, int i);
	Funcionario get_funcionario();
		
	
	double calculaValorTotalDaFolha();
	double consultaSalarioFuncionario();
};

#endif
