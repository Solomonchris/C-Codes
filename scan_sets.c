#include <stdio.h>

void main()
{
	float A= 1300.36000;
	int B= 100;
	int C;
	char D;
	char name[100], name1[100];
	float E;
	/*printf("Output in Floating point: %f", A);
	printf("\nOutput in truncated floating point: %G", A);
	printf("\nOutput in Exponential Floating point: %E", A);
	printf("\nOutput in Integer: %-5d %d", B, B);
	printf("\nEnter value of C: ");
	scanf("%d", &C);
	printf("\nEnter name of a person: ");
	scanf("%s", &D);
	printf("\nEnter a decimal number: ");
	scanf("%f", &E);*/
	printf("\nEnter a string: ");
	scanf("%[abcdef]s", &name);
	printf("\nThe 1st string is :%s", name);
	printf("\n Enter another string: ");
	scanf("%[^abcde]s", &name1);
	printf("\nThe 2nd string is :%s", name1);
}
