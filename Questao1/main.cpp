#include "Conta.h"
#include "ContaEspecial.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Conta conta;
    ContaEspecial contaesp;
    string nomeCliente, numeroConta;
    double salarioMensal, saldo, valor;

    cout << "Digite o nome do cliente: " << endl;
    cin>>nomeCliente;

    cout << "Digite o numero da conta do cliente: "<<nomeCliente << endl;
    cin>>numeroConta;

    cout << "Digite o salario mensal do cliente: " <<nomeCliente<< endl;
    cin>>salarioMensal;

    cout << "Digite o saldo do cliente: " <<nomeCliente<< endl;
    cin>>saldo;

    conta = Conta(nomeCliente, numeroConta, salarioMensal, saldo);

    cout << endl << endl;


    cout << "Digite o nome do cliente: " << endl;
    cin>>nomeCliente;

    cout << "Digite o numero da conta do cliente: "<<nomeCliente << endl;
    cin>>numeroConta;

    cout << "Digite o salario mensal do cliente: " <<nomeCliente<< endl;
    cin>>salarioMensal;

    cout << "Digite o saldo do cliente: " <<nomeCliente<< endl;
    cin>>saldo;

    contaesp = ContaEspecial(nomeCliente, numeroConta, salarioMensal, saldo);


    cout<<"*****Conta corrente*****\n" << endl;

    cout<<"Digite o valor que voce desejar sacar: ";
    cin>>valor;
    conta.sacar(valor);
    cout<<"Digite o valor que voce desejar depositar: ";
    cin>>valor;
    conta.depositar(valor);

    cout << endl << endl;

    cout<<"*****Conta especial*****\n";
    cout<<"Digite o valor que voce desejar sacar: ";
    cin>>valor;
    contaesp.sacar(valor);
    cout<<"Digite o valor que voce desejar depositar: ";
    cin>>valor;
    contaesp.depositar(valor);

    return 0;
}
