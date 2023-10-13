#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr;
    int p_sum = 0, n_sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr);
        // printf("%d ", arr[i]);

        if(arr >= 0)
        {
            p_sum = p_sum + arr;
        }
        else
        {
            n_sum = n_sum + arr;
        }
    }
    printf("%d %d ", p_sum, n_sum);

    return 0;
}
