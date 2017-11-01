#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"


class Apartamento : public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();

        void descricao();

        void setPosicao(string);
        void setValorCond(double);
        void setNumVagasGaragem(int);
        string getPosicao();
        double getValorCond();
        int getNumVagasGaragem();

    private:
        string posicao;
        double valorCond;
        int numVagasGaragem;
};

#endif // APARTAMENTO_H
