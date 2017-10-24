#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionados.h"
#include "Sistema.h"
#include <string>
using namespace std;

int main (){
	string nomeA, nomeC, nomeH;
	double salarioH, salarioBase, salario, percentual, vendas, horas;
	int matriculaA=0, matriculaC=0, matriculaH=0, op;

	while(true){
		Assalariado A1(nomeA, matriculaA, salario);
		Comissionados C1(nomeC, matriculaC, salarioBase, percentual, vendas);
		Horista H1(nomeH, matriculaH, salarioH, horas);
		Sistema sist;

		cout << "Este programa serve para calcular o salario dos funcionarios." << endl;
		cout << "Qual tipo de funcionario voce quer adicionar:" << endl;
		cout << "(1) Assalariado" << endl;
		cout << "(2) Comissionado" << endl;
		cout << "(3) Horista" << endl;
		cout << "(4) Exibir dados armazenados" << endl;
		cout << "(5) Sair do programa" << endl;
		cin >> op;

		if(op == 1){
			cout << "Qual o nome do funcionario?" << endl;
			cin >> nomeA;
			cout << "Qual o numero de matricula?" << endl;
			cin >> matriculaA;
			cout << "Qual salario?" << endl;
			cin >> salario;
			sist.set_funcionario(A1, 0);
		}

		if(op == 2){
			cout << "Qual o nome do funcionario?" << endl;
			cin >> nomeC;
			cout << "Qual o numero de matricula?" << endl;
			cin >> matriculaC;
			cout << "Qual salario base?" << endl;
			cin >> salarioBase;
			cout << "Qual percentual de comissao?" << endl;
			cin >> percentual;
			cout << "Qual a quantidade de vendas da semana (em reais)" << endl;
			cin >> vendas;
			sist.set_funcionario(C1, 1);
		}

		if(op == 3){
			cout << "Qual o nome do funcionario?" << endl;
			cin >> nomeH;
			cout << "Qual o numero de matricula?" << endl;
			cin >> matriculaH;
			cout << "Qual salario por hora?" << endl;
			cin >> salarioH;
			cout << "Quantidade de horas trabalhadas:" << endl;
			cin >> horas;
			sist.set_funcionario(H1, 2);
		}

		if(op == 4){
			

			cout << endl;
			cout << "Assalariado" << endl;
			cout << A1.get_nome() << endl;
			cout << A1.get_matricula() << endl;
			cout << A1.get_salario() << endl;
			cout << A1.calcularSalario() << endl;
			cout << endl;
			cout << "Comissionado" << endl;
			cout << C1.get_nome() << endl;
			cout << C1.get_matricula() << endl;
			cout << C1.get_salarioBase() << endl;
			cout << C1.get_percentualComissao() << endl;
			cout << C1.get_vendasSemanais() << endl;
			cout << C1.calcularSalario() << endl;
			cout << endl;
			cout << "Horista" << endl;
			cout << H1.get_nome() << endl;
			cout << H1.get_matricula() << endl;
			cout << H1.get_salarioPorHora() << endl;
			cout << H1.get_horasTrabalhadas() << endl;
			cout << H1.calcularSalario() << endl;
		}

		if(op == 5){
			cout << "Obrigado por usar o sistema." << endl;
			return 1;
		}
	}
	

	return 0;
}
