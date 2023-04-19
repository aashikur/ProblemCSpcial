#include<stdio.h>

int main()
{
    int i,n, cnt, prime = 1, ToNum;

    printf("First N-th Prime Num, N-th is: ");
    scanf("%d",&ToNum);

    for(n = 1; prime<=ToNum; n++)
    {
        cnt = 0;
        for(i = 1; i<=n; i++)
        {
            if(n%i == 0) cnt++;
        }
        if(cnt == 2)
        {
            printf("%d ",n);
            prime++;
        }
    }



    return 0;

}
