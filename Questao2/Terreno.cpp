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

void Terreno::setArea(double a){
    area = a;
}
double Terreno::getArea(){
    return area;
}
void Terreno::getDescricao(){
    cout << "Area do terreno = " << area << endl;
}
