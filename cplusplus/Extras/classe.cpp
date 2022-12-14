#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstdio>

class poligono {
protected:
    double a,b;

public:
    poligono(void) { a=b=0; }
    poligono(double x, double y) { a=x; b=y; }
    virtual double Area(void)=0;
    virtual double volume(void)=0;
    //{ printf("Estou no poligono\n"); return -1;} 
};

class triangulo : public poligono {
public:
    triangulo(void) { a=b=0; }
    triangulo(double x, double y) { a=x; b=y; }
    double Area(void) {
        return a*b/2;
    }
    double volume(void) { return a*a; }
};

class quadrilatero : public poligono {
public:
    quadrilatero(void) { a=b=0; }
    quadrilatero(double x, double y) { a=x; b=y; }
    double Area(void) {
        return a*b;
    }
    double volume(void) { return a*a; }
};

void Print(poligono &p) {
    printf("Area: %lf\n",p.Area());  //(*p). == p->
}

//double poligono::Area(void) { printf("OLA"); }
//double poligono::volume(void) { printf("OLA"); }

int main(void) {
    triangulo b(1,1);
//    printf("b.Area(): %lf\n",b.Area());
    printf("=============\n");
    Print(b);
    printf("************\n");

    quadrilatero c(1,1);
//    printf("c.Area(): %lf\n",c.Area());
    printf("#############\n");
    Print(c);
    printf("------------\n");
//    printf("%lf\n",b.a);
}
