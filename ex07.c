#include <stdio.h>
int main ()
{
   int a;
   int b;

   printf("inserisci due numeri: ");
   scanf("%d", &a);
   scanf("%d", &b);

    if (a>b)
    {
        printf("a è > di b");
    }
    else if(a == b)
    {
        printf(" a è uguale a b");
    }
    else
    {
        printf("a è < di b");
    }
    



}
