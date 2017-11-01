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

void Casa::setDescricao(string s){
    descricaoCasa = s;
}

string Casa::getDescricao(){
    return descricaoCasa;
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
