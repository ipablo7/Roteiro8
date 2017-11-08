#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <iostream>
#include <string>

#include "Funcionario.h"

using namespace std;

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        void setFuncionario(Funcionario *f, int);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(string);
        virtual ~SistemaGerenciaFolha();
        //int cont;
    private:
        Funcionario *funcionario[3];
};

#endif // SISTEMAGERENCIAFOLHA_H
