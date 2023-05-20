#include <stdio.h>

int main()
{
    int num, del;
    printf("Enter Array Size: ");
    scanf("%d", &num);
    printf(" Position wanna Delete: ");

    scanf("%d", &del);

    int a[num],i;
    printf("   Enter Your Array:\n   ",num);

    for(i=0; i<num; i++)
        scanf(" %d",&a[i]);

    int max = sizeof(a)/4;
    int Bmax = max;
    int b[Bmax];

    for(i = 0 ; i<max; i++)
    {
        if(i<del-1)
            b[i] = a[i];
        else if(i == del-1)
        {
            Bmax--;
            continue;
        }
        else
            b[i-1] = a[i];
    } printf("   ");
    for(i = 0; i<Bmax; i++)
        printf("%d ", b[i]);


    return 0;
}
