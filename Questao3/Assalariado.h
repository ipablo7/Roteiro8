#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"


class Assalariado: public Funcionario
{
    private:
        double salario;

    public:
        Assalariado();

        void setSalario(double);
        double getSalario();

        double calcularSalario();




};

#endif
