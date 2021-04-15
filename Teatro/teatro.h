#ifndef TEATRO_H_INCLUDED
#define TEATRO_H_INCLUDED
#define LIN 5
#define COL 10

struct Teatro {

    char teatro[LIN][COL];

    void inicializar() {
        for (int i = 0 ; i < LIN ; i++){
            for (int j = 0 ; j < COL ; j++){
                teatro[i][j]='0';
            }
        }
    }

    void venderIngresso(int lin, int col) {
        teatro[lin-1][col-1]='X';
    }

    void devolverIngresso(int lin, int col) {
        teatro[lin-1][col-1]='0';
    }

    bool estaOcupado(int lin, int col) {
        return teatro[lin-1][col-1]=='X';
    }

};

#endif // TEATRO_H_INCLUDED
