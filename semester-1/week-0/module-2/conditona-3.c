#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);

    if(taka >= 103)
    {
        printf("I can buy iPhone");
    }
    else if(taka < 90)
    {
        printf("I Can Buy Samsung phone");
    }
    else if(taka > 40)
    {
        printf("I Can Buy Honor Phone");
    }
    else
    {
        printf("I Can Buy Button Phone");
    }
}
