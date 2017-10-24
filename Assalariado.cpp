#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"

using namespace std;

Assalariado::Assalariado(string n, int m, double s){
	set_nome(n);
	set_matricula(m);
	set_salario(s);
}

void Assalariado::set_salario(double s){
	salario = s;
}

double Assalariado::get_salario(){
	return salario;
}

double Assalariado::calcularSalario(){
	cout << "O trabalhador e' assalariado. Seu salario e: R$" << get_salario() << ",0";
}
