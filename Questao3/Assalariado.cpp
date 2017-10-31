#include "Assalariado.h"

Assalariado::Assalariado()
{

}

void Assalariado::setSalario(double salario)
{
    this -> salario = salario;
}

double Assalariado::getSalario()
{
    return salario;
}

double Assalariado::calcularSalario()
{
    return getSalario();
}
