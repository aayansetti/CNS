#include<stdio.h>
#include<string.h>
void main()
{
    int n,i;
    char pt[30],ct[50],dt[50],key[50];
    printf("Enter the plaintext:");
    scanf("%s",pt);
    n=strlen(pt);
    printf("Enter the key values must be equal to %d:",n);
    scanf("%s",key);
    for(i=0;i<n;i++)
    {
        pt[i]=pt[i]-97;
        key[i]=key[i]-97;
    }
    for(i=0;i<n;i++)
    {
        ct[i]=pt[i]+key[i];
        while(ct[i]>26)
        {
            ct[i]=ct[i]-26;
        }
    }
    for(i=0;i<n;i++)
    {
        dt[i]=ct[i]-key[i];
        while(dt[i]<0)
        {
            dt[i]=dt[i]+26;
        }
    }
    printf("Encrypted message:");
    for(i=0;i<n;i++)
    {
        printf("%c",ct[i]+97);
    }
    printf("\nDecrypted message:");
    for(i=0;i<n;i++)
    {
        printf("%c",dt[i]+97);
    }
}
