#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,c=0,n,m,z;
    char a[60],b[60],p[60],d[60];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter values of array of A:");
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    printf("Enter values of array of B:");
    for(i=0;i<n;i++)
    {
        scanf("%c",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(b[i]==b[j])
            c++;
        }
    }
    if(c==0)
    {
        printf("Enter the size of plaintext:");
        scanf("%d",&z);
        printf("Enter  plaintext:");
        for(i=0;i<z;i++)
        {
        scanf("%c",&p[i]);
        }
        printf("Encryption:");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(p[i]==a[j])
                {
                    m=j;
                }
            }    
                d[i]=b[m];
        }
        for(i=0;i<z;i++)
        {
         printf("%c",d[i]);   
        }
        printf("\nDecryption:");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(d[i]==b[j])
                {
                    m=j;
                }
            }
             p[i]=a[m];
        }
        for(i=0;i<z;i++)
        {
         printf("%c",p[i]);   
        }
        
    }
    else
    for(i=0;i<z;i++)
    {
        printf("%c already existed",b[i]);
    }
}
