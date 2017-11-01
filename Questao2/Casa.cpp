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

void Casa::descricao(){
    cout << "Casa com " << numPavimentos << " pavimentos, " << quantQuartos << " quartos." << endl <<
            "Area do terreno = " << areaT << endl << "Area construida = " << areaC << endl;
    cout << "Localizacao: " << endl;
    getEndereco().exibeEnd();
}

void Casa::setNumPavimentos(int nP){
    numPavimentos = nP;
}
void Casa::setQuantQuartos(int qQ){
    quantQuartos = qQ;
}
void Casa::setAreaT(double aT){
    areaT = aT;
}
void Casa::setAreaC(double aC){
    areaC = aC;
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
