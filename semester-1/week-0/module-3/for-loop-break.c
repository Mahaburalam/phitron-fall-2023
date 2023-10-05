#include<stdio.h>
int main()
{
    int i;
    for(i = 0; i <= 23; i++)
    {
        if(i == 17)
        {
            break;
        }
        printf("The value is : %d\n", i);
    }
    return 0;
}
