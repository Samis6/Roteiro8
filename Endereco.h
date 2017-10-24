#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco{
private:
	std::string logradouro, bairro, cidade, cep;
	int numero;
public:
	Endereco(std::string, std::string, std::string, std::string, int);


	std::string get_logradouro();
	std::string get_bairro();
	std::string get_cidade();
	std::string get_cep();
	int get_numero();

};

#endif
