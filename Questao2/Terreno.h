#ifndef TERRENO_H
#define TERRENO_H

#include "Imovel.h"


class Terreno : public Imovel
{
    public:
        Terreno();
        virtual ~Terreno();
        void setArea(double);
        double getArea();
        void getDescricao();
    private:
        double area;
};

#endif // TERRENO_H
