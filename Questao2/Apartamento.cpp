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

void Apartamento::descricao(){
    cout << "Apartamento " << posicao << " com " << numVagasGaragem << "vagas na garagem" << endl <<
            "Valor do condominio = " << valorCond << " reais." << endl;
    cout << "Localizacao: " << endl;
    getEndereco().exibeEnd();
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
