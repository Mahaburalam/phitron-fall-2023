#include<stdio.h>
int main()
{
   // P. First digit !
   int n, store;
   scanf("%d", &n);

    store = (n/1000);
    //printf("%d", store);

    if(store%2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

   return 0;
}
