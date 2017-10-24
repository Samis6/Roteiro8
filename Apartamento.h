#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel{
private:
	std::string posicao;
	double valorCondominio;
	int nVagasNaGaragem;
public:
	Apartamento();
	Apartamento(std::string l, std::string b, std::string c, std::string cp, int num, std::string pos, double valor, int vGaragem);
	void set_posicao(std::string);
	void set_valorCondominio(double);
	void set_nVagasNaGaragem(int);

	std::string get_posicao();
	double get_valorCondominio();
	int get_nVagasNaGaragem();

	virtual void getDescricao();

};
#endif
