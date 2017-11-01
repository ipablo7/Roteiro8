#include "Terreno.h"

using namespace std;

Terreno::Terreno()
{
    //ctor
}

Terreno::~Terreno()
{
    //dtor
}

void Terreno::setDescricao(string s){
    descricaoT = s;
}

string Terreno::getDescricao(){
    return descricaoT;
}

void Terreno::setArea(double a){
    area = a;
}
double Terreno::getArea(){
    return area;
}
