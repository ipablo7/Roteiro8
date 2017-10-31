#include "Funcionario.h"

Funcionario::Funcionario()
{

}

void Funcionario::setMatricula(int matricula)
{
    this -> matricula = matricula;
}

int Funcionario::getMatricula()
{
    return matricula;
}

void Funcionario::setNome(string nome)
{
    this -> nome = nome;
}
string Funcionario::getNome()
{
    return nome;
}
