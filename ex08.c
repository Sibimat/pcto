#include <stdio.h>
int main()
{
    int anni;
    int b;

    scanf("%d", &anni);
    scanf("%d", &b);

    if (anni>b)
    {
        printf("è maggiorenne > di b");
    }
    else if(anni == b)
    {
        printf("ha 18 anni");
    }
    else
    {
        printf("è minorenne < di b");
    }




}