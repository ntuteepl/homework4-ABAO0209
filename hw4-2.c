#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int account[6][3]={{123,456,9000},{456,789,5000},{789,888,6000},{336,558,10000},{775,666,12000},{566,221,7000}};
    int acc,pas,z;
    while(1)
    {
        scanf("%d %d",&acc,&pas);
        for(int i=0;i<6;i++)
        {
            if(acc==account[i][0]&&pas==account[i][1])
            {
                printf("%d\n",account[i][2]);
                z=1;
            }
        }
        if(z!=1){printf("error\n");}
    }
}
