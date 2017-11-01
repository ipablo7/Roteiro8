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
    int op, n, t = 0;
    Imovel *im[6];
  /*im[0] = new Casa();
    im[1] = new Casa();
    im[2] = new Apartamento();
    im[3] = new Apartamento();
    im[4] = new Terreno();
    im[5] = new Terreno();*/

    while(1){
        cout << "********MENU********" << endl;
        cout << "1 - Inserir imovel" << endl
             << "2 - Exibir todos imoveis cadastrados" << endl
             << "3 - Sair" << endl;
        cout << "Escolha uma opcao: " << endl;
        cin >> op;

        switch(op){
            case 1:
                cout << "********MENU********" << endl;
                cout << "1 - Casa" << endl
                     << "2 - Apartamento" << endl
                     << "3 - Terreno" << endl;
                cin >> op;

                switch(op){
                    case 1:
                        im[t] = new Casa();
                        cout << "Insira o endereco da casa: " << endl;
                        im[t]->setEndereco(l, n, b, cep, c);
                        cout << "Insira a quantidade de pavimentos: ";  //COMO FAZ PARA SETAR OS ATRIBUTOS
                                                                        //ESPECIFICOS DE OBJETO?
                        cout << "Insira a quantidade de quartos: ";     //ACHO QUE NÃO DÁ CERTO POR ARRAY
                                                                        //POLIMÓRFICO
                        cout << "Insira a area do terreno: ";

                        cout << "Insira a area construida: ";

                        t++;
                        break;
                    case 2:
                        im[t] = new Apartamento();
                        cout << "Insira o endereco do apartamento: " << endl;
                        im[t]->setEndereco(l, n, b, cep, c);
                        cout << "Insira a posicao do apartamento: " << endl;
                        cout << "Insira o valor do condominio: " << endl;
                        cout << "Insira a quantidade vagas na garagem: " << endl;
                        t++;
                        break;
                    case 3:
                        im[t] = new Terreno();
                        cout << "Insira o endereco da casa: " << endl;
                        im[t]->setEndereco(l, n, b, cep, c);
                        cout << "Insira a area do terreno: ";
                        t++;
                        break;
                }
                break;
            case 2:
                for(int i = 0; i < 6; i++){
                    im[i]->descricao();
                }
                break;
            case 3:
                return -1;
            default:
                cout << "Opcao inexistente, tente novamente." << endl;
                break;
        }
    }

    return 0;
}
