#include <iostream>
#include "Imovel.h"
#include "Endereco.h"
//#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <string>
using namespace std;

int main (){
	string logradouro, bairro, cidade, numero, cep;
	int nPavimentos, quartos;
	double areaTerreno, areaConstruida;

	Imovel * imob[1];

	imob[0] = new Apartamento("rua 1", "Jose Americo", "Joao Pessoa", 58074100, 195, "Segundo andar", 600, 1);
	imob[1] = 0;

	//cout << imob[0] -> getDescricao() << endl;
	cout << imob[0] -> getEndereco().get_logradouro() << endl;
	cout << imob[0] -> getEndereco().get_bairro() << endl;
	cout << imob[0] -> getEndereco().get_cidade() << endl;
	cout << imob[0] -> getEndereco().get_cep() << endl;
	cout << imob[0] -> getEndereco().get_numero() << endl;
	cout << ((Apartamento*)imob[0]) -> get_posicao() << endl;
	cout << ((Apartamento*)imob[0]) -> get_valorCondominio() << endl;
	cout << ((Apartamento*)imob[0]) -> get_nVagasNaGaragem() << endl;


	return 0;
}

