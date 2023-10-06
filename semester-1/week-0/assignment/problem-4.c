#include<stdio.h>
int main()
{
    int i = 1, n;
    scanf("%d", &n);

    for (i; i <= n; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;


}
