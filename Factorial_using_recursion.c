#include<stdio.h>
long int fact(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Invalid Enter a positive number");
    }
    else
    {
        printf("\nFactorial of %d = %ld", n, fact(n));
    }
    return 0;
}

long int fact(int n) 
{
    if (n>=1)
        return n*fact(n-1);
        
    else
        return 1;
}
