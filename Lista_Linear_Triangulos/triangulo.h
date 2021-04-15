#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include <math.h>

using namespace std;

struct Triangulo {
    float a, b, c;

    float perimetro() {
        return a+b+c;
    }

    // Formula de Herao
    float area() {
        float s = (a+b+c)/2;
        return sqrt( s*(s-a)*(s-b)*(s-c) );
    }

    bool isTriangulo() {
        return (a<b+c && b<a+c && c<a+b);
    }

    string tipo() {
        if(a == b && b == c) {
            return "Equilatero";
        } else if(a == b || b == c || a == c) {
            return "Isosceles";
        } else {
            return "Escaleno";
        }
    }

};

#endif // TRIANGULO_H_INCLUDED
