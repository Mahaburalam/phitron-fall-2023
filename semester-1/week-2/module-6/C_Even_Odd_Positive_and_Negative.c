#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int numbers;
    int even = 0, odd = 0, positive = 0, nagetive = 0;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &numbers);

        // even
        if(numbers % 2 == 0)
        {
            // even = even + numbers;
            even++;
            // printf("Even: %d\n", even);
        }
        // odd
        else if(numbers % 2 != 0)
        {
            // odd = odd + numbers;
            odd++;
            // printf("Odd: %d\n", odd);
        }
        if(numbers > 0)
        {
            positive++;
            // printf("Negative: %d\n", nagetive);
        }
        else if(numbers < 0)
        {
            nagetive++;
            // printf("Positive: %d", positive);
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, nagetive);
    return 0;
}
