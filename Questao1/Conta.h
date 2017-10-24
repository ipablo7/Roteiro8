#ifndef CONTA_H
#define CONTA_H

#include "Iconta.h"
#include <iostream>
#include <string>

using namespace std;

class Conta: public IConta
{
    private:
        string nomeCliente;
        double salarioMensal;
        double numeroConta;
        double saldo;
        double limite;

    public:
        Conta();
        Conta(string,double,double,double);

        void setSalarioMensal(double);
        double getSalarioMensal();

        void setSaldo(double);
        double getSaldo();

        void setNumeroConta(double);
        double getNumeroConta();

        void setLimite(double);
        double getLimite();

        void setNomeCliente(string);
        string getNomeCliente();

        void sacar(double);
        void depositar(double);

        virtual void definirLimite();



};

#endif


