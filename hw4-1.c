#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size,qqq;
    scanf("%d",&size);
    int num[size];
    for(int i=0;i<size-1;i++)
    {
        scanf("%d ",&num[i]);
    }

    for(int j=0;j<size;j++)
    {
        qqq=0;
        int temp=0,temp2=0,qqq=0;
        temp2=num[j]-1;
        for(int k=2;k<=temp2;k++)
        {
            temp=num[j]%k;
            if(temp==0)
            {
                printf("NO ");
                qqq=1;
                break;

            }
        }
        if(qqq!=1)
        {
            printf("YES ");
        }

    }
}
