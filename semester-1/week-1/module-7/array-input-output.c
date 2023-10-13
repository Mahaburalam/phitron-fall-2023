#include<stdio.h>
int main()
{
    // array decleration
    int arr[4];

    // array input
    for(int i = 0; i < 4; i++)
    {
        // array value input
        scanf("%d", &arr[i]);
        // array value output
        printf(" value of array %d: %d\n", i, arr[i]);
    }

    //array output
    /*for(int i = 0; i < 4; i++)
    {
        printf("%d\n", arr[i]);
    }*/

    return 0;
}
