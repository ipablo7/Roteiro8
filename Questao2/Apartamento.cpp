#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento()
{
    //ctor
}

Apartamento::~Apartamento()
{
    //dtor
}

void Apartamento::setDescricao(string s){
    descricaoApt = s;
}

string Apartamento::getDescricao(){
    return descricaoApt;
}

void Apartamento::setPosicao(string p){
    posicao = p;
}
void Apartamento::setValorCond(double v){
    valorCond = v;
}
void Apartamento::setNumVagasGaragem(int n){
    numVagasGaragem = n;
}
string Apartamento::getPosicao(){
    return posicao;
}
double Apartamento::getValorCond(){
    return valorCond;
}
int Apartamento::getNumVagasGaragem(){
    return numVagasGaragem;
}
