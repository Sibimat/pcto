#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a+b> c && b+c> a && a+c > b)
    {
        printf("è un triangolo");
    }
    else
    {
        printf("non è un triangolo");
    }
    if (a==b && b==c)
    {
        printf("triangolo equilatero");
    }
    else if(a==b || b==c || c==a)
    {
        printf("triangolo isocele");
    }
    else 
    {
        printf("triangolo scaleno");
    }
   





}