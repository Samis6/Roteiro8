#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario{
protected:
	std::string nome;
	int matricula;
public:
	//Funcionario(std::string, int);
	void set_nome(std::string);
	void set_matricula(int);

	std::string get_nome();
	int get_matricula();

	virtual double calcularSalario() = 0;

};

#endif