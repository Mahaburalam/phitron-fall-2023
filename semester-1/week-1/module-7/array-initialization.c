#include<stdio.h>
int main()
{
    int arr[5] = {1};
    int ar[7] = {1, 3, 2, 9, 0, 4, 8};

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n\n");

    for(int i = 0; i < 7; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}
