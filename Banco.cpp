#include <iostream>
#include <string>
#include "Iconta.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;


int main() {

	string nomeCliente;
	double salarioMensal;
	int numeroConta;
	int escolha, op;
	double saldo, saque, deposito;

	
		cout << "Bem vindo ao programa do banco mais top do mundo:" <<endl;

		cout << "Digite o seu nome cliente do banco Topperson:" <<endl;
		cin >> nomeCliente;

		cout << "Qual o numero da sua conta:" <<endl;
		cin >> numeroConta;
	
		cout << "Qual o seu salario mensal:" <<endl;
		cin >> salarioMensal;

		saldo = salarioMensal;
		Conta C(nomeCliente, salarioMensal, numeroConta, saldo); 
		ContaEspecial C_Especial(nomeCliente, salarioMensal, numeroConta, saldo);

	while(true){
		cout << "Escolha \n(1) Acessar saldo" <<" \n(2) Sacar "<<" \n(3) Depositar "<<" \n(4) Verificar limite "<<" \n(5) Acessar Conta Especial 			"<<" \n(0) Sair \n"<< endl;
		cin >> escolha;
	
		if (escolha == 1){
			cout<< C.get_nomeCliente() <<" Seu saldo eh de:"<< C.get_saldo() <<"R$ "<<endl;
		}
		
		if(escolha == 2){
			cout << "Qual valor do saque?" << endl;
			cin >> saque;
			C.sacar(saque);
			//cout << C.get_nomeCliente() << "Sacou: " <<  << endl;
		}

		if(escolha == 3){
			cout << "Qual valor do deposito?" << endl;
			cin >> deposito;
			C.depositar(deposito);
		}
		
		if(escolha == 4){
			C.definirLimite();
			cout << "O limite da sua conta e: " << C.get_limite() << endl;
			
		}

		if(escolha == 5){
			cout << "Escolha \n(1) Acessar saldo" <<" \n(2) Verificar limite " <<" \n(0) Sair \n"<< endl;
			cin >> op;
			if (op == 1){
				cout<< C.get_nomeCliente() <<" Seu saldo eh de:"<< C.get_saldo() <<"R$ "<<endl;
			}

		
			if(op == 2){
				C_Especial.definirLimite();
				cout << "O limite da sua conta e: " << C_Especial.get_limite() << endl;
				
			}
			
			if(op == 0){
				return -1;
			}
		}
		
		if(escolha == 0){
			return 1;			
		}

		
	}
}

