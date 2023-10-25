#include <stdio.h>
int main()
{
    float IELTS_Score;
    scanf("%f", &IELTS_Score);

    if(IELTS_Score == 6.5)
    {
        printf("I Can Go Germany");
    }
    else
    {
        printf("I Live In Bangladesh");
    }

    // printf("%f", IELTS_Score);
    return 0;
}

