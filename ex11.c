#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a> 1969)
    {
        printf("dopo il 1969");
        printf("anni trascorsi: %d", a-1969);
    }
    else if(a==1969)
    {
        printf("stesso anno");
    }
    else
    {
        printf("prima del 1969");
        printf("differenza: %d\n", 1969-a);
    }
}
