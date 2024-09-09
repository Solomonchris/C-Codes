#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b, op;
    printf("1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter value of a: ");
    scanf("%d", &a);
    printf("\nEnter value of b: ");
    scanf("%d", &b);
    printf("\nEnter an Arithmetic operation : ");
    scanf("%d", &op);
    switch (op)
    {
        case 1:
            printf("Sum of %d and %d is: %d", a, b, a+b);
            break;
        case 2:
            printf("Difference of %d and %d is: %d", a, b, a-b);
            break;
        case 3:
            printf("Product of %d and %d is: %d", a, b, a*b);
            break;
        case 4:
            printf("Division of %d and %d is: %d", a, b, a/b);
            break;
    }
    
    return 0;
}
