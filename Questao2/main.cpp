#include <iostream>
#include <string>
#include "Imovel.h"
#include "Endereco.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

int main()
{
    string l, b, cep, c;
    string descr;
    int n;
    Imovel *im[6];
    im[0] = new Casa();
    im[1] = new Casa();
    im[2] = new Apartamento();
    im[3] = new Apartamento();
    im[4] = new Terreno();
    im[5] = new Terreno();

    for(int i = 0; i < 6; i++){
        cout << "Insira o endereco do imovel " << i+1 << endl;
        cout << "Insira o logradouro: ";
        cin >> l;
        cout << "Insira o numero: ";
        cin >> n;
        cout << "Insira o bairro: ";
        cin >> b;
        cout << "Insira o CEP: ";
        cin >> cep;
        cout << "Insira a cidade: ";
        cin >> c;
        im[i]->setEndereco(l, n, b, cep, c);
        cout << "Descricao do imovel: ";
        cin >> descr;
        im[i]->setDescricao(descr);
    }

    for(int i = 0; i < 6; i++){
        cout << im[i]->getDescricao() << endl;
        im[i]->getEndereco().exibeEnd();
    }

    return 0;
}
