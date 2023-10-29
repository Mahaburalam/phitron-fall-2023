#include<stdio.h>
int main()
{
    int n; //number of value given
    scanf("%d", &n);

    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        //printf("%d", arr[i]);
    }

    int position, value;
    scanf("%d %d", &position, &value);

    for(int i = n; i >= n+1; i--)
    {
        arr[i] = arr[i-1];
        printf("%d", arr[i]);
    }

    return 0;
}
