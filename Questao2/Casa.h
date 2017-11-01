#ifndef CASA_H
#define CASA_H

#include "Imovel.h"

class Casa : public Imovel
{
    public:
        Casa();
        virtual ~Casa();

        void descricao();

        void setNumPavimentos(int);
        void setQuantQuartos(int);
        void setAreaT(double);
        void setAreaC(double);
        int getNumPavimentos();
        int getQuantQuartos();
        double getAreaT();
        double getAreaC();

    private:
        int numPavimentos, quantQuartos;
        double areaT, areaC;
};

#endif // CASA_H
