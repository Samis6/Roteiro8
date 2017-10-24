#include <iostream>
#include "Endereco.h"
using namespace std;

Endereco::Endereco(string l, string b, string c, string cp, int num){
	logradouro = l;
	bairro = b;
	cidade = c;
	cep = cp;
	numero = num;
}

string Endereco::get_logradouro(){
	return logradouro;
}

string Endereco::get_bairro(){
	return bairro;
}

string Endereco::get_cidade(){
	return cidade;
}

string Endereco::get_cep(){
	return cep;
}

int Endereco::get_numero(){
	return numero;
}
