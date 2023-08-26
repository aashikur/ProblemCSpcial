#include <bits/stdc++.h>
using namespace std;
void pairof(int x);
int isPrime(int x);

int main()
{
    int x;
    cin >> x;

    pairof(x);
    return 0;
}

void pairof(int x)
{
    int i = 1;

    while(i <= x/2)
    {
        int num1 = i;
        int num2 = x-i;

        if(isPrime(num1) && isPrime(num2))
        {
            cout << i << " + " << x-i << " = " << x << endl;
        }
        i++;
    }
}

int isPrime(int x)
{

    if(x < 2) return 0;

    int cnt = 0;
    for(int i = 2 ; i*i<=x; i++)
    {
        if(x%i==0)
        {
            cnt++;
            break;
        }
    }

    if(cnt == 0 ) return 1;
}
