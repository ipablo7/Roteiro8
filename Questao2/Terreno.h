#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"


class Terreno : public Imovel
{
    public:
        Terreno();
        virtual ~Terreno();

        void setDescricao(string s);
        string getDescricao();

        void setArea(double);
        double getArea();

    private:
        string descricaoT;
        double area;
};

#endif // TERRENO_H
