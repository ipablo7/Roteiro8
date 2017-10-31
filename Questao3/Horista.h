#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"


class Horista: public Funcionario
{
    private:
        double salarioPorHora;
        double horasTrabalhadas;

    public:
        Horista();

        void setSalarioPorHora(double);
        double getSalarioPorHora();
        void setHorasTrabalhadas(double);
        double getHorasTrabalhadas();

        double calcularSalario();



};

#endif
