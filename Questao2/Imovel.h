#ifndef IMOVEL_H
#define IMOVEL_H

#include "Endereco.h"
#include <iostream>

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();
        Endereco getEndereco();
        void setEndereco(string, int, string, string, string);
        virtual void getDescricao() = 0;
    private:
        Endereco endereco;
};

#endif // IMOVEL_H
