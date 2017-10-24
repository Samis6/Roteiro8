#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include "Endereco.h"

class Imovel{
protected:
	std::string descricao;
	Endereco e1;
public:
	Imovel();
	Endereco getEndereco();
	virtual void getDescricao() = 0;

};
#endif
