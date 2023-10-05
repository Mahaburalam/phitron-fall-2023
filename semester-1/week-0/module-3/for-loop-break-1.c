#include<stdio.h>
int main()
{
    int i = 0;

    for(i; i <= 25; i++)
    {
        printf("The Output is: %d\n", i);
        if(i == 18)
        {
            break;
        }
    }
    return 0;
}
