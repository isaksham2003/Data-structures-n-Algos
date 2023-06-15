#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="Saksham";
    int al=strlen(a);
    int bl=strlen("Porwal");
    if(al==bl)
    printf(" %s and %s are equal with lengths %d and %d",a,"Porwal",al,bl);
    else
    printf(" %s and %s are NOT equal with lengths %d and %d",a,"Porwal",al,bl);
    

    return 0;
}
