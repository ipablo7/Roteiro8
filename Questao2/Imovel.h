#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include "Endereco.h"
#include <string>

using namespace std;

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();
        void setEndereco(string l, int n, string b, string cep, string c);
        Endereco getEndereco();
        virtual void descricao() = 0;

    private:
        Endereco endereco;
};

#endif // IMOVEL_H
