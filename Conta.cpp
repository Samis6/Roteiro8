#include <iostream>
#include "Iconta.h"
#include "Conta.h"

using namespace std;

Conta::Conta(){}

Conta::Conta(string n, double sM, int numC, double sal){

	set_nomeCliente(n);
	set_salarioMensal(sM);
	set_numeroConta(numC);
	set_saldo(sal);

}

void Conta::set_nomeCliente(string n){

	nomeCliente = n;


}

void Conta::set_limite(double lim){
	limite = lim;
}

void Conta::set_salarioMensal(double sM){
	
	if(sM < 0){

		cout<<"ERRO"<<endl;	
	
	}else{

		salarioMensal = sM;
	}

}
void Conta::set_numeroConta(int numC){
	
	if(numC < 0){
		cout << "ERRO" << endl;
	}else{
		numeroConta = numC;
	}
}

void Conta::set_saldo(double sal){

	if(sal < 0){
		cout<< "ERRO" << endl;

	}else{

		saldo = sal;
	}
}
void Conta::definirLimite(){
	limite = (saldo * 2);
}

string Conta::get_nomeCliente(){

	return nomeCliente;
}
double Conta::get_salarioMensal(){

	return salarioMensal;
}
int Conta::get_numeroConta(){

	return numeroConta;
} 

double Conta::get_saldo(){

	return saldo;
}
double Conta::get_limite(){

	return limite;
}

void Conta::sacar(double valor){
	if (valor > saldo ){
		cout<<"Erro, valor de saque maior que saldo"<<endl;
	}else{
		saldo  = saldo - valor;
		cout<<"Saldo atualizado R$"<<saldo<<endl;
	}

}

void Conta::depositar(double valor){
	if(valor < 0){
		cout <<"Erro, o valor depositado nao existe"<<endl;

	}else{
		saldo = saldo + valor;
		cout<<"Saldo atualizado R$"<<saldo<<endl;
	}
}
