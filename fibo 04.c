    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num1 = 0,cnt=0,n, num2 = 1, NextNum;
        scanf("%d",&n);

        while(num1<n)
        {
            NextNum = num1+num2;
            num1 = num2;
            num2 = NextNum;
            cnt++;
        }
        cnt = (num1==n)? cnt : -1;
        printf("%d\n", cnt);

    }


