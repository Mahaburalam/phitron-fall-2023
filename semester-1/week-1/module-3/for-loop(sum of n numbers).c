#include<stdio.h>
int main()
{
    int sum = 0;
    int i,n;

    printf("Enter your Numbers: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
        printf("The numbers is: %d\n", i);
    }

    printf("\nThe Sum of the numbers is: %d", sum);

    return 0;
}
