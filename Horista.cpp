#include <iostream>
#include "Funcionario.h"
#include "Horista.h"

using namespace std;

Horista::Horista(string n, int m, double salH, double hr){
	set_nome(n);
	set_matricula(m);
	set_salarioPorHora(salH);
	set_horasTrabalhadas(hr);
}

void Horista::set_salarioPorHora(double salH){
	if(salH < 0){
		cout << "salario incorreto." << endl;
	}else{
		salarioPorHora = salH;
	}
}

void Horista::set_horasTrabalhadas(double hr){
	if(hr < 0){
		cout << "nenhuma hora trabalhada. errado." << endl;
	}else{
		horasTrabalhadas = hr;
	}
}

double Horista::get_salarioPorHora(){
	return salarioPorHora;
}

double Horista::get_horasTrabalhadas(){
	return horasTrabalhadas;
}

double Horista::calcularSalario(){
	if(horasTrabalhadas > 0 && horasTrabalhadas <= 40){
		cout << "Trabalhador horista, mas o mesmo nao teve hora extra, portanto, seu salario e R$ " << (get_salarioPorHora() * 40) << ",00" << endl;		
	}else if(horasTrabalhadas > 40){
		cout << "Trabalhador horista. Trabalhou o total de " << horasTrabalhadas << " horas" << endl;
		cout << "portanto seu salario do mes sera: R$ " << (get_salarioPorHora() * 40) + (((horasTrabalhadas - 40) * 1.5) * get_salarioPorHora()) << ",00" << endl;
	}
}
