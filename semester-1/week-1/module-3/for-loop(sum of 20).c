#include<stdio.h>
int main()
{
    int sum = 0;

    for(int i = 0; i<=20; i++)
    {
        sum = sum + i;
        printf("The number is: %d\n", i);

        printf("Sum of the numbers is: %d\n\n", sum);
    }
    printf("\nSum of the numbers is: %d", sum);

    return 0;
}
