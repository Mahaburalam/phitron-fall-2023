#include<stdio.h>
int main()
{
    int i = 1, n;
    scanf("%d", &n);

    for(i; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    if (n == 1)
    {
        printf("-1\n");
    }
    return 0;
}
