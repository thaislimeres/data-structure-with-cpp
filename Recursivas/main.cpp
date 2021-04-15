#include <iostream>
#include <stdlib.h>
#include "recursiva.h"

using namespace std;

int main() {

    cout << "Recursivas" << endl;
    cout << "Fatorial de 5: " << fatorial(5) << endl;
    cout << "Fatorial de 5 rec: " << fatR(5) << endl;
    cout << "MDC (64,14): " << mdc(64,14) << endl;
    cout << "S(10,15): " << s(10,15) << endl;
    cout << "S2(10,15): " << s2(10,15) << endl;
    cout << "S2(1,10): " << s(1,10) << endl;
    cout << "dig(532): " << dig(532) << endl;
    cout << "dig(101): " << dig(101) << endl;
    cout << "dig(-53222): " << dig(-53222) << endl;
    cout << "pot(2,5): " << pot(2,5) << endl;
    cout << "pot(3,4): " << pot(3,4) << endl;
    cout << "pot(2,-5): " << pot(2,-5) << endl;

    return 0;
}
