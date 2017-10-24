#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include <string>

#include "ContaEspecial.h"
#include "Conta.h"

using namespace std;

class ContaEspecial: public Conta
{
    public:
        ContaEspecial();

        void definirLimite();

};

#endif
