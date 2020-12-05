#include <stdio.h>

void main()
{
    int i;
    char a[10],b[10],c[10];
    printf("Enter String:");
    scanf("%s",a);
    for(i=0;i<10;i++)
    {
        b[i]=a[i]&127;
        c[i]=a[i]^127;
    }
    printf("After the AND Operation:");
    for(i=0;i<10;i++)
    {
        printf("%c",b[i]);
    }
    printf("\nAfter the XOR Operation:");
    for(i=0;i<10;i++)
    {
        printf("%c",c[i]);
    }
}
