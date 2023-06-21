#include <stdio.h>

int main()
{

    int max;
    scanf("%d",&max);

    int box[max];

    for(int i = 0; i<max; i++)
        scanf("%d",&box[i]);

    int run = max;
    while(run--)
    {
        for(int i = 0; i<max-1; i++)
        {
            if(box[i] > box[i+1])
            {
                int temp = box[i];
                box[i] = box[i+1];
                box[i+1] = temp;
            }
        }
    }




    for(int i = 0; i<max; i++)
      if(box[i] != box[i+1])  printf("%d ",box[i]);


    return 0;
}

