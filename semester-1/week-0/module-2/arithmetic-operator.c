#include <stdio.h>
int main()
{
    int number1 = 12, number2 = 23;

    int sum = (number1 + number2);
    int sub = (number1 - number2);

    int num1 = 2; int num2 = 5; //new variable assign
    int mul = (num1 * num2);
    int div = (number1 / number2);
    float div1 = (number1*1.0 / number2);

    int mod = (num2 % num1);


    printf("The Result of Addition is: %d\n", sum);
    printf("The Result of subtraction is: %d\n", sub);
    printf("The Result of Multiplication is: %d\n", mul);
    printf("The Result of Division is: %d\t", div);
    printf("The Result of Division1 is: %f\n", div1);

    printf("The Result of Modules/Remainder is: %d", mod);

    return 0;
}
