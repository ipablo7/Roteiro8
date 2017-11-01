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

void Terreno::descricao(){
    cout << "Terreno com area = " << area << "m²" << endl;
    cout << "Localizacao: " << endl;
    getEndereco().exibeEnd();
}

void Terreno::setArea(double a){
    area = a;
}
double Terreno::getArea(){
    return area;
}
