#include <iostream>
#include <stdlib.h>
#include "teatro.h"

using namespace std;

int main() {

    Teatro t;

    t.inicializar();

    int opc;
    int fila;
    int polt;

    do {
        system("cls");
        cout << "Bem vindo ao Teatro FRL!" << endl << endl;

        for (int i = 0 ; i < LIN ; i++){
            for(int j = 0 ; j < COL ; j++){
                cout << t.teatro[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "SELECIONE" << endl;
        cout << "---------" << endl;
        cout << "1 - Comprar ingresso" << endl;
        cout << "2 - Devolver ingresso" << endl;
        cout << "3 - Trocar ingresso" << endl;
        cout << "4 - Sair" << endl;
        cin >> opc;

        switch(opc){
            case 1:
                cout << endl << "COMPRAR INGRESSO";
                cout << endl << "----------------" << endl;
                cout << "Digite a fileira: ";
                cin >> fila;
                cout << "Digite a poltrona: ";
                cin >> polt;
                if(t.estaOcupado(fila, polt)) {
                    cout << endl << "Assento ocupado" << endl;
                } else {
                    t.venderIngresso(fila, polt);
                }
                t.venderIngresso(fila, polt);
                cout << endl;
                system("pause");
                break;

            case 2:
                cout << endl << "DEVOLVER INGRESSO";
                cout << endl << "-----------------" << endl;
                cout << "Digite a fileira: ";
                cin >> fila;
                cout << "Digite a poltrona: ";
                cin >> polt;
                if(! t.estaOcupado(fila, polt)) {
                    cout << endl << "Assento nao esta ocupado" << endl;
                } else {
                    t.devolverIngresso(fila, polt);
                }
                cout << endl;
                system("pause");
                break;

            case 3:
                cout << endl << "DEVOLVER INGRESSO";
                cout << endl << "-----------------" << endl;
                cout << "Digite a fileira: ";
                cin >> fila;
                cout << "Digite a poltrona: ";
                cin >> polt;
                if(! t.estaOcupado(fila, polt)) {
                    cout << endl << "Assento nao esta ocupado" << endl << endl;
                } else {
                    t.devolverIngresso(fila, polt);
                    cout << endl << "COMPRAR INGRESSO";
                    cout << endl << "----------------" << endl;
                    cout << "Digite a fileira: ";
                    cin >> fila;
                    cout << "Digite a poltrona: ";
                    cin >> polt;
                    if(t.estaOcupado(fila, polt)) {
                        cout << endl << "Assento ocupado" << endl;
                    } else {
                        t.venderIngresso(fila, polt);
                    }
                    t.venderIngresso(fila, polt);
                    cout << endl;
                }
                system("pause");
                break;

            case 4:
                break;

            default:
                cout << "Opcao invalida" << endl;
                system("pause");
                break;
        }
    }while(opc != 4);

    return 0;
}
