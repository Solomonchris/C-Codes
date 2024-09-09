#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b, c;
    printf("\nEnter value of a: ");
    scanf("%d", &a);
    printf("\nEnter value of b: ");
    scanf("%d", &b);
    printf("\nEnter value of c : ");
    scanf("%d", &c);
    if (a>b)
    {
        if (a>c)
        {
            printf("a is the largest");
        }
        else
        {
            printf("c is the largest");
        }
    }
    else
    {
        if (b>a)
        {
            if (b>c)
            {
                printf("b is the largest");
            }
        }
        else
        {
            printf("c is the largest");
        }
    }
    return 0;
}
