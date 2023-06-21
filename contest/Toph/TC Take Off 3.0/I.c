#include <stdio.h>
#include<stdbool.h>

int main()
{
    int t;
    scanf("%d ",&t);

    while(t--)
    {

        char source[10005];
        gets(source);
        int sourceLength = strlen(source);

        char target[10005];
        gets(target);
        int targetLength = strlen(target);

        bool isThere;
        int strt = 0;
        for(int i = 0; i<targetLength; i++)
        {
            isThere = false;
            for(int j = strt; j<sourceLength; j++)
            {
                if(target[i] == source[j])
                {
                    strt = j+1;
                    isThere = true;
                    break;
                }
            }
            if(isThere == false) break;
        }

        if(isThere == true)
            printf("YES\n");
        else
            printf("NO\n");



    }
    return 0;
}


