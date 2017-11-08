#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.h"


class Apartamento : public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();
        void setPosicao(string);
        void setNumVagasGaragem(int);
        void setValorCondominio(double);
        string getPosicao();
        int getNumVagasGaragem();
        double getValorCondominio();
        void getDescricao();
    private:
        string posicao;
        int numVagasGaragem;
        double valorCondominio;
};

#endif // APARTAMENTO_H
