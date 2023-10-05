#include<stdio.h>
int main()
{
    int i,n, sum = 0;
    printf("Enter Your Number: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++)
    {
        //if(i%2 != 0)

        if(i%2 == 1)
        {
            sum = sum + i;
            printf("The Even Numbers is: %d\n", i);
        }

    }
    printf("\nThe Sum of Even Numbers are: %d", sum);
    return 0;
}

