#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 5000)
    {
        printf("\nWe Can Go Cox'z Bazar\n");

        if(tk >= 10000)
        {
            printf("We Can Go Syleth");
        }
        else
        {
            printf("Go Back From Cox'z Bazar");
        }
    }
    else
    {
        printf("No Where We Visit");
    }
}
