#include "Casa.h"
using namespace std;

Casa::Casa()
{
    //ctor
}

Casa::~Casa()
{
    //dtor
}

void Casa::setNumPavimentos(int a){
    numPavimentos = a;
}

void Casa::setQuantQuartos(int a){
    quantQuartos = a;
}

void Casa::setAreaT(double a){
    areaT = a;
}

void Casa::setAreaC(double a){
    areaC = a;
}

int Casa::getNumPavimentos(){
    return numPavimentos;
}

int Casa::getQuantQuartos(){
    return quantQuartos;
}

double Casa::getAreaT(){
    return areaT;
}

double Casa::getAreaC(){
    return areaC;
}

void Casa::getDescricao(){
    cout << "Casa: " << endl
         << "Numero de pavimetos: " << numPavimentos << endl
         << "Quantidade de quartos: " << quantQuartos << endl
         <<"Area construida = " << areaC << endl
         << "Area do terreno = " << areaT << endl;
}
