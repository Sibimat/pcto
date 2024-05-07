#include <stdio.h>

int main()
{
    
    //VARIABILI//
    int a;
    int b;
    float c = 6.756385; // 6 numeri con la virgola massimo
    float d = 9.5762;
    double e = 12.7523752875275;
    double f = 43.439476735; // numeri virgola massimo 15 dopo la virgola massimo

    a=23;
    b=45;
    printf("somma: %d\n", a+b);
    printf("differenza: %d\n", a-b);
    printf("moltiplicazione: %d\n", a*b);
    printf("divisione: %d\n", a/b);

    printf("somma: %f\n", c+d);
    printf("differenza: %f\n", c-d);
    printf("moltiplicazione: %f\n", c*d);
    printf("divisione: %f\n", c/d);

    printf("somma: %lf\n", e+f);
    printf("differenza: %lf\n", e-f);
    printf("moltiplicazione: %lf\n", e*f);
    printf("divisione: %lf\n", e/f);

    









}

