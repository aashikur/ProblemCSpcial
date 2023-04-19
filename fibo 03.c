#include<stdio.h>

int main()
{
    int i,n, cnt, prime = 1, N,X;

    printf("First N-th Prime Num From X. \nX and N is: ");
    scanf("%d %d",&X, &N);

    for(n = X; prime<=N; n++)
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
