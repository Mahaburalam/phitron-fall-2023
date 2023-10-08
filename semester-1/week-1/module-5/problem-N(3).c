#include<stdio.h>
int main()
{
    //N. Char

    char input;
    scanf("%c", &input);

    int result;

    if(input >= 'a' && input <= 'z')
    {
        //upper case letter
        result = input - 32;
        printf("%c\n", result);
    }
    else
    {
        //lower case letter
        result = input + 32;
        printf("%c\n", result);
    }
    return 0;
}
