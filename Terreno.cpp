#include <iostream>
#include "Terreno.h"

using namespace std;

Terreno::Terreno(){}

void Terreno::set_area(double a){
	if(a < 0){
		cout << "ERRO" << endl;
	}else{
		area = a;
	}
}

double Terreno::get_area(){
	return area;
}

void Terreno::getDescricao(){
	cout << "Logradouro           : " << Endereco.get_logradouro << endl;
	cout << "Bairro               : " << Endereco.get_bairro << endl;
	cout << "Cidade               : " << Endereco.get_cidade << endl;
	cout << "CEP                  : " << Endereco.get_cep << endl;
	cout << "Numero               : " << Endereco.get_numero << endl;
	cout << "Area do terreno      : " << get_area << endl;
}
