#include<stdio.h>
int main()
{
    int i = 0,n;

    printf("Please Enter Your Number: ");
    scanf("%d", &n);

    for(i; i <= n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d - Even\n", i);
        }
        else
        {
            printf("%d - Odd\n", i);
        }
    }
    return 0;
}
