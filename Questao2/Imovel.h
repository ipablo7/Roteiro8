#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include "Endereco.h"
#include <string>
#include <stdio.h>

using namespace std;

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();
        void setEndereco(string l, int n, string b, string cep, string c);
        Endereco getEndereco();
        virtual string getDescricao() = 0;
        virtual void setDescricao(string) = 0;

    private:
        Endereco endereco;
};

#endif // IMOVEL_H
