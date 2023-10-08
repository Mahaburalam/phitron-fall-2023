#include<stdio.h>
int main()
{
    //M. Capital or Small or Digit

    int digit;
    char alphabate;

    scanf("%d", &digit);
    scanf("%c", &alphabate);

    if(alphabate >= 'a' && alphabate <= 'z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else if(alphabate >= 'A' && alphabate <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else
    {
        printf("IS DIGIT\n");
    }
    return 0;
}
