#include <iostream>
#include "Casa.h"
using namespace std;

Casa::Casa(){}

void Casa::set_numeroDePavimentos(int nPavimentos){
	numeroDePavimentos = nPavimentos;
}

void Casa::set_qtDeQuartos(int quartos){
	qtDeQuartos = quartos;
}

void Casa::set_areaTerreno(double areaT){
	areaTerreno = areaT;
}

void Casa::set_areaConstruida(double areaQ){
	areaConstruida = areaQ;
}

int Casa::get_numeroDePavimentos(){
	return numeroDePavimentos;
}

int Casa::get_qtDeQuartos(){
	return qtDeQuartos;
}

double Casa::get_areaTerreno(){
	return areaTerreno;
}

double Casa::get_areaConstruida(){
	return areaConstruida;
}

void Casa::getDescricao(){
	cout << "Logradouro           : " << Endereco.get_logradouro << endl;
	cout << "Bairro               : " << Endereco.get_bairro << endl;
	cout << "Cidade               : " << Endereco.get_cidade << endl;
	cout << "CEP                  : " << Endereco.get_cep << endl;
	cout << "Numero               : " << Endereco.get_numero << endl;  
	cout << "Numero de pavimentos : " << get_numeroDePavimentos << endl;
	cout << "Quant. de quartos    : " << get_qtDeQuartos << endl;
	cout << "Area do terreno      : " << get_areaTerreno << endl;
	cout << "Area Construida      : " << get_areaConstruida << endl; 

}
