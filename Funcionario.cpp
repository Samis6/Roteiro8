#include <iostream>
#include "Funcionario.h"
using namespace std;

/*Funcionario::Funcionario(string n, int m){
	set_nome(n);
	set_matricula(m);
}*/

void Funcionario::set_nome(string n){
	nome = n;
}

void Funcionario::set_matricula(int m){
	if(m < 0){
		cout << "Erro na matricula." << endl;
	}else{
		matricula = m;
	}
}

string Funcionario::get_nome(){
	return nome;
}

int Funcionario::get_matricula(){
	return matricula;
}