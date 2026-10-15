#include <stdio.h>
#include <stdlib.h>

int main()
{
    int resp, cand1=0, cand2=0, cand3=0, cand4=0, nulo=0, branco=0;
    scanf("%d", &resp);
    while(resp!=0)
    {
        if(resp==1)
        {
            cand1++;
        }
        else if(resp==2)
        {
            cand2++;
        }
        else if(resp==3)
        {
            cand3++;
        }
        else if(resp==4)
        {
            cand4++;
        }
        else if(resp==5)
        {
            nulo++;
        }
        else if(resp==6)
        {
            branco++;
        }
        scanf("%d", &resp);
    }
    printf("%d\n", cand1);
    printf("%d\n", cand2);
    printf("%d\n", cand3);
    printf("%d\n", cand4);
    printf("%d\n", nulo);
    printf("%d\n", branco);
    return 0;
}
