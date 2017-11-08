#include <iostream>
#include <string>
#include <iostream>
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

/*void setImovel(Imovel *im){
    static Imovel *imovel[6];
    static int i = 0;
    imovel[i] = im;
}*/

int main()
{
    Imovel *im[6];
    Casa c[2];
    Apartamento apt[2];
    Terreno ter[2];
    string logradouro, bairro, cidade, CEP, b;
    int op, numb;

    while(1){
        cout << "### MENU ###" << endl;
        cout << "1 - Cadastrar casa" << endl;
        cout << "2 - Cadastrar apartamento" << endl;
        cout << "3 - Cadastrar terreno" << endl;
        cout << "4 - Mostrar descricao dos imoveis cadastrados" << endl;
        cout << "5 - Sair" << endl;

        cin >> op;
        int cont = 0;

        switch(op){
            case 1:
                cout << "Insira o logradouro da casa: ";
                cin >> logradouro;
                cout << "Insira o numero: ";
                cin >> numb;
                cout << "Insira o bairro: ";
                cin >> bairro;
                cout << "Insira o CEP: ";
                cin >> CEP;
                cout << "Insira a cidade: ";
                cin >> cidade;
                c[cont].setEndereco(logradouro, numb, bairro, CEP, cidade);
                cout << "Qual o numero de pavimentos? ";
                int n;
                cin >> n;
                c[cont].setNumPavimentos(n);
                cout << "Qual a quantidade de quartos? ";
                cin >> n;
                c[cont].setQuantQuartos(n);
                cout << "Insira a area construida: ";
                double d;
                cin >> d;
                c[cont].setAreaC(d);
                cout << "Insira a area do terreno: ";
                cin >> d;
                c[cont].setAreaT(d);
                im[cont] = &c[cont];
                //setImovel(&c[cont]);
                cont++;
                break;
            case 2:
                cout << "Insira o logradouro: ";
                cin >> logradouro;
                cout << "Insira o numero: ";
                cin >> numb;
                cout << "Insira o bairro: ";
                cin >> bairro;
                cout << "Insira o CEP: ";
                cin >> CEP;
                cout << "Insira a cidade: ";
                cin >> cidade;
                apt[cont].setEndereco(logradouro, numb, bairro, CEP, cidade);
                cout << "Insira a posicao(bloco): ";
                //string b;
                cin >> b;
                apt[cont].setPosicao(b);
                cout << "Insira o valor do condominio: ";
                double v;
                cin >> v;
                apt[cont].setValorCondominio(v);
                cout << "Insira o numero de vagas na garagem: ";
                int a;
                cin >> a;
                apt[cont].setNumVagasGaragem(a);

                im[cont] = &apt[cont];
                cont++;
                break;
            case 3:
                cout << "Insira o logradouro: ";
                cin >> logradouro;
                cout << "Insira o numero: ";
                cin >> numb;
                cout << "Insira o bairro: ";
                cin >> bairro;
                cout << "Insira o CEP: ";
                cin >> CEP;
                cout << "Insira a cidade: ";
                cin >> cidade;
                ter[cont].setEndereco(logradouro, numb, bairro, CEP, cidade);
                cout << "Insira a area do terreno: ";
                double t;
                cin >> t;
                ter[cont].setArea(t);

                im[cont] = &ter[cont];
                cont++;
                break;
            case 4:
                for(int i = 0; i < 6; i++){
                    im[i]->getDescricao();
                    //rim[i]->getEndereco();
                }
                break;
            case 5:
                return -1;
        }
    }

    return 0;
}
