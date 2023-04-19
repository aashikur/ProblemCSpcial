#include<stdio.h>

int main()
{

    int i,n, cnt;

    printf("\nIf Number is Prime or Composite: ");
    scanf("%d",&n);

    cnt = 0;
    for(i = 1; i<=n; i++)
    {
        if(n%i == 0) cnt++;
    }

    if(cnt == 2)
        printf("%d is Prime\n",n);
    else
        printf("%d is Composite\n",n);


    return 0;

}
