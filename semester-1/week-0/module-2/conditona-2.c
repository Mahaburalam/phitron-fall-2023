#include <stdio.h>
int main()
{
    float IELTS_Score;
    scanf("%f", &IELTS_Score);

    if(IELTS_Score >= 6.5)
    {
        printf("I Can Go Germany\n");
    }
    /*
    if(IELTS_Score >= 7)
    {
        printf("I Can Go In Canada");
    }
    */
    else
    {
        printf("I Live In Bangladesh");
    }

    // printf("%f", IELTS_Score);
    return 0;
}


