#ifndef RECURSIVA_H_INCLUDED
#define RECURSIVA_H_INCLUDED
#include <iostream>
#include <stdlib.h>

using namespace std;

double fatorial (int n) {
    double p = 1;
    if (n != 0) {
        for (int i = 1 ; i <= n ; i++) {
            p = p * 1;
        }
    }
    return p;
}

double fatR (int n) {
    if (n == 0) {
        cout << "Parada: " << n << endl;
        return 1;
    } else {
        return n * fatR (n - 1);
    }
}

int mdc (int x, int y) {
    if (x == y) {
        return x;
    } else {
        if (x < y) {
            return mdc (y, x);
        } else {
            return mdc (x - y, y);
        }
    }
}

int s (int m, int n) {
    if (m == n) {
        return m;
    } else {
        return s (m, n - 1) + n;
    }
}

int s2 (int m, int n) {
    if (m == n) {
        return m;
    } else {
        return m + s2 (m + 1, n);
    }
}

unsigned dig (int n) {
    if (abs(n) <= 9) {
        return 1;
    } else {
        return 1 + dig (n / 10);
    }
}

double pot(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        if (n < 0) {
            return 1 / pot(x, abs(n));
        } else {
            return x * pot (x, n - 1);
        }
    }
}

#endif // RECURSIVA_H_INCLUDED
