include<stdio.h>
#include<math.h>
void main()
{
    int q,a,xa,ya,p,k,m,m1,c1=1,c2=1,k1=1,z,ki,i;
    printf("Enter prime number q:");
    scanf("%d",&q);
    printf("\nEnter primitive root of q:");
    scanf("%d",&a);
    printf("\nEnter A's private key:");
    scanf("%d",&xa);
    for(i=0;i<xa;i++)
    {
        ya=pow(a,xa);
        ya=ya%q;
    }
    printf("\nA's public key is:{%d,%d,%d}",q,a,ya);
    printf("\nEnter random integer:");
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        k=pow(ya,p);
        k=k%q;
    }
    printf("\nKey is:%d",k);
    printf("\nEnter the plaintext:");
    scanf("%d",&m);
    printf("\nEncryption:");
    printf("\nPlaintext is:%d",m);
    for(i=0;i<p;i++)
    {
        c1=pow(a,p);
        c1=c1%q;
    }
    c2=m*k;
    c2=c2%q;
    printf("\nCiphertext:(%d,%d)",c1,c2);
    printf("\nDecryption:");
    printf("\nCiphertext:(%d,%d)",c1,c2);
    for(i=0;i<xa;i++)
    {
        k1=pow(c1,xa);
        k1=k1%q;
    }
    printf("\nKey is:%d",k1);
    z=0,ki=1;
    while(z!=1)
    {
        if((ki*k)%q==1)
        break;
        ki++;
    }
    m1=c2*ki;
    m1=m1%q;
    printf("\nPlaintext:%d",m1);
}
