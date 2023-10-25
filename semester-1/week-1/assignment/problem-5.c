#include<stdio.h>
int main()
{
    int i;
    scanf("%d", &i);

    if(i>1000)
    {
        printf("I will buy Punjabi\n");
        i = i - 1000;

        if(i>=500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
        else
        {
        }
    }
    else
    {
        printf("Bad luck!");
    }


    return 0;
}
