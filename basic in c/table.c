#include<stdio.h>
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    for (int i=1;i<=10;++i)
    {
        printf("%d\n",a*i);
    }
    return 0;
}
