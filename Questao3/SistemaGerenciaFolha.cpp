#include "SistemaGerenciaFolha.h"

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
}


void SistemaGerenciaFolha::setFuncionario(Funcionario *f, int i){
    if (i < 3){
        funcionario[i] = f;
    }
}
double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double temp = 0;
    for(int i = 0; i < 3; i++){
        temp += funcionario[i]->calcularSalario();
    }
    return temp;
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(string a){
    for(int i = 0; i < 3; i++){
        if(funcionario[i]->getNome().compare(a) == 0){
            return funcionario[i]->calcularSalario();
        }
    }
    return -3;
}
