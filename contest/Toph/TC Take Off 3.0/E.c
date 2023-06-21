#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int size1,size2;
        scanf("%d %d ",&size1,&size2);

        char str1[size1];
        char str2[size2];

        int size3 = size1+size2;
        char result[size3];

        gets(str1);
        gets(str2);

        int i = 0;
        while (str1[i] != '\0')
        {
            result[i] = str1[i];
            i++;
        }

        int j = 0;
        while (str2[j] != '\0')
        {
            result[i+j] = str2[j];
            j++;
        }
        result[i+j] = '\0';

        for(int p = 0; p<size3; p++)
        {
            if('a' <= result[p] && 'z'>= result[p] )
                continue;
            else if('A' <= result[p] && 'Z'>= result[p] )
                continue;
            else if('0' <= result[p] && '9'>= result[p] )
                result[p] = '_';
            else
                result[p] = ' ';
        }

        puts(result);



    }
    return 0;
}


