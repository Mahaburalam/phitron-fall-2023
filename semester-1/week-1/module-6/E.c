#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    int numbers;
    int max = 0;
    for(int i = 0; i <= a; i++)
    {
       scanf("%d", &numbers);
        //printf("%d", numbers);
        //break;

       if(i > numbers)
       {
            max += numbers;
            printf("%d\n", max);
       }
    }
    return 0;
}
