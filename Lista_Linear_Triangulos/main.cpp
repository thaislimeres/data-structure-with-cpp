#include <iostream>
#include <stdlib.h>
#include "listalinear.h"
#include "triangulo.h"

using namespace std;

int main() {

    unsigned tam;

    cout << "Digite o tamanho da lista: ";
    cin >> tam;
    cout << endl;
    system("pause");
    cout << endl;
    Lista <Triangulo> mlista(tam);
    Triangulo t;

    unsigned int opc;

    do {
        system("cls");
        cout << "1 - Inserir" << endl;
        cout << "2 - Remover" << endl;
        cout << "3 - Ultimo" << endl;
        cout << "4 - Exibir a lista" << endl;
        cout << "5 - Finalizar" << endl;
        cout << "Selecione: ";
        cin >> opc;
        cout << endl;

        switch(opc) {

        case 1:
            if (mlista.listacheia()) {
                cout << "Lista cheia" << endl << endl;
            } else {
                cout << "Digite o lado A: ";
                cin >> t.a;
                cout << "Digite o lado B: ";
                cin >> t.b;
                cout << "Digite o lado C: ";
                cin >> t.c;

                // Verificar se e triangulo
                if(t.isTriangulo()) {
                    mlista.inserir(t);
                    cout << endl << "Sucesso" << endl << endl;
                } else {
                    cout << endl << "Esses lados nao representam um triangulo" << endl << endl;
                }
                system("pause");
                break;
            }

        case 2:
            if(mlista.listavazia()) {
                cout << endl << "Lista vazia" << endl << endl;
            } else {
                t = mlista.remover();
                cout << "Removido triangulo: " << t.a << t.b << t.c << endl << endl;
            }
            system("pause");
            break;

        case 3:
            if(mlista.listavazia()) {
                cout << "Lista vazia" << endl << endl;
            } else {
                t = mlista.ultimo();
                cout << "Ultimo triangulo: " << t.a << t.b << t.c << endl << endl;
            }
            system("pause");
            break;

        case 4:
            cout << "Elementos da Lista" << endl << endl;
            if(mlista.listavazia()) {
                cout<<"Lista vazia" << endl << endl;
            } else {
                for (int i = 0; i<= mlista.p ; i++){
                    t = mlista.elementos[i];
                    cout << "lado A: " << t.a << endl;
                    cout << "lado B: " << t.b << endl;
                    cout << "lado C: " << t.c << endl;
                    cout << "Perimetro: " << t.perimetro() << endl;
                    cout << "Area: " << t.area() << endl;
                    cout << "Tipo: " << t.tipo() << endl;
                }
                cout << endl;
            }
            system("pause");
            break;

        case 5:
            cout << "Fim" << endl;
            break;

        default:
            cout << endl << "Opcao invalida" << endl << endl;
            system("pause");
            break;
        }
    } while(opc != 5);
    return 0;
}
