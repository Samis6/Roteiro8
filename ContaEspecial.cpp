#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(){

}

ContaEspecial::ContaEspecial(std::string n, double sM, int numC, double sal){
	set_nomeCliente(n);
	set_salarioMensal(sM);
	set_numeroConta(numC);
	set_saldo(sal);
}

void ContaEspecial::definirLimite(){
	set_limite(get_salarioMensal() * 3);
}

