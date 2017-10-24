#include <iostream>
#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento(){}

Apartamento::Apartamento(std::string l, std::string b, std::string c, std::string cp, int num, std::string pos, double valor, int vGaragem){
	e1 = Endereco(l, b, c, cp, num);
	set_posicao(pos);
	set_valorCondominio(valor);
	set_nVagasNaGaragem(vGaragem);
}

void Apartamento::set_posicao(string pos){
	posicao = pos;
}

void Apartamento::set_valorCondominio(double valor){
	valorCondominio = valor;
}

void Apartamento::set_nVagasNaGaragem(int vGaragem){
	nVagasNaGaragem = vGaragem;
}

string Apartamento::get_posicao(){
	return posicao;
}

double Apartamento::get_valorCondominio(){
	return valorCondominio;
}

int Apartamento::get_nVagasNaGaragem(){
	return nVagasNaGaragem;	
}

/*void Apartamento::getDescricao(){
	return descricao;
}*/	
