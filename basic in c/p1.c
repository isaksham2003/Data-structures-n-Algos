#include<stdio.h>
int main()
{
    int i,j,r,k=0;
    printf("ENTER THE NUMBER OF ROWS");
    scanf("%d",&r);
    for (i=0;i<=r;++i)
    {
        for (j=1;j<=r-i;++j)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;

}