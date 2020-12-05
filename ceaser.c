#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int n,i,ch,k;
    char a[10],c[10];
    printf("Enter the string length:");
    scanf("%d",&n);
    printf("\nEnter String:");
    scanf("%s",a);
    printf("\nEnter the key must less be than 26:");
    scanf("%d",&k);
    if(k<26)
    {
     while(1)
     {
         printf("\n1.Encryption\n2.Decryption\n3.Exit\n");
         printf("Enter your choice:");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:for(i=0;i<n;i++)
             {
                 c[i]=a[i]+k;
                 if(isupper(a[i])&&c[i]>'Z')
                 c[i]=c[i]-26;
                 if(islower(a[i])&&c[i]>'z')
                 c[i]=c[i]-26;
                 printf("%c",c[i]);
             }
             break;
             case 2:for(i=0;i<n;i++)
             {
                 a[i]=c[i]-k;
                 if(isupper(c[i])&&a[i]<'A')
                 c[i]=c[i]+26;
                 if(islower(c[i])&&a[i]<'a')
                 c[i]=c[i]+26;
                 printf("%c",a[i]);
             }
             break;
             case 3:exit(0);
         }
         
     }
    }
}
