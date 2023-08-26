#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    int cnt = 0;

    for(int i = 2; i*i <=n; i++)
    {
        if(n%i == 0)
        {
            cnt++;
            break;
        }
    }

    if(cnt == 0 && n>1)
    {
        cout << n << " ";
    }
}

int main()
{
    int x, y, str,ends;

    cin >> x >> y;

    str = x<y ? x:y;
    ends = x>y ? x:y;

    for(str; str<=ends; str++)
    {
        isPrime(str);

    }







    return 0;
}
