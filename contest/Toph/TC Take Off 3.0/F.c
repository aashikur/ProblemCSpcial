#include<stdio.h>
#include<stdbool.h>

int main()
{

    int t;
    scanf("%d ",&t);

    while(t--)
    {
        char str[10000];

        gets(str);

        int x = ((int) str[0] % 2 );

        int i = 1;
        while(str[i] != '\0')
        {
            if( (int)str[i]%2 != x)
            {
                if(str[i] != 'z')
                    str[i] +=1;
                else
                    str[i]-= 1;
            }
            i++;
        }

        int size = strlen(str);


        for(int i = 0; i<size; i++)
        {
            for(int j = i+1; j<size; j++)
            {
                if(str[i] == str[j])
                {
                    for(int k = j; k<size; k++)
                    {
                        str[k] = str[k+1];
                    }
                    j--;
                    size--;
                }
            }
        }
        puts(str);

    }

    return 0;
}
