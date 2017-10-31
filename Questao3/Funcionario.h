#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;


class Funcionario
{
    private:
        string nome;
        int matricula;

    public:
        Funcionario();

        void setMatricula(int);
        int getMatricula();
        void setNome(string);
        string getNome();

        virtual double calcularSalario() = 0;




};

#endif
