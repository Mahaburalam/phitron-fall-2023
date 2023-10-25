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
       if(numbers > max)
       {
            max = numbers; 
            
       }
    }
    printf("%d\n", max);
    return 0;
}
