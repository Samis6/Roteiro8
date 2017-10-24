#include <iostream>
#include "Funcionario.h"
#include "Comissionados.h"

using namespace std;

Comissionados::Comissionados(string n, int m, double salB, double vendas, double percentual){
	set_nome(n);
	set_matricula(m);
	set_salarioBase(salB);
	set_vendasSemanais(vendas);
	set_percentualComissao(percentual);
}

void Comissionados::set_vendasSemanais(double vendas){
	if(vendas < 0){
		cout << "erro, quantidade de vendas negativas" << endl;
	}else{
		vendasSemanais = vendas;
	}
}

void Comissionados::set_percentualComissao(double percentual){
	percentual = percentual/100;
	percentualComissao = percentual;
}

void Comissionados::set_salarioBase(double salB){
	if(salB < 0){
		cout << "erro, salario base negativo" << endl;
	}else{
		salarioBase = salB;
	}
}

double Comissionados::get_vendasSemanais(){
	return vendasSemanais;
}

double Comissionados::get_percentualComissao(){
	return percentualComissao;
}

double Comissionados::get_salarioBase(){
	return salarioBase;
}

double Comissionados::calcularSalario(){
	double salario;
	salario = salarioBase + (4 * (percentualComissao * vendasSemanais));
	cout << "Trabalhador comissionado, seu salario mensal com " << vendasSemanais << " reais de vendas semanais e':" << endl;
	cout << "R$ " << salario << endl; 
}
