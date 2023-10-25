#include<stdio.h>
int main()
{
    int i = 1, n;

    scanf("%d", &n);

    for(i; i <= n; i++)
    {
        if(i%5 == 0)
        {
            printf("%d - Yes\n", i);
        }
        else
        {
            printf("%d - No\n", i);
        }
    }
    return 0;
}
