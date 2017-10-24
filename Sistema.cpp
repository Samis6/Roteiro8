#include "Sistema.h"

Sistema::Sistema(){
	valorTotal = 0;
}

void Sistema::set_funcionario(Funcionario *func, int i){
	funcionario[i] = func;
	calculaValorTotalDeFolha(func.get_salario());
}

Funcionario Sistema::get_funcionario(){
	return funcionario[i];
}

void Sistema::calculaValorTotalDeFolha(double salf){
	valorTotal += salf;
}

double Sistema::consultaSalarioFuncionario(){
	
}


