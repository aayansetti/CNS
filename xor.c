#include <stdio.h>

void main()
{
    int i;
    char a[10];
    printf("Enter String:");
    scanf("%s",a);
    for(i=0;i<10;i++)
    {
        a[i]=a[i]^0;
    }
    printf("After the XOR Operation:");
    for(i=0;i<10;i++)
    {
        printf("%c",a[i]);
    }
}
