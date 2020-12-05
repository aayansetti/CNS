#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int findGCD(int n1,int n2)
{
    int i,gcd;
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int powMOD(int a,int b,int n)
{
    long long x=1,y=a;
    while(b>0)
    {
        if(b%2==1)
        x=(x*y)%n;
        y=(y*y)%n;
        b/=2;
    }
    return (x%n);
}
int main()
{
    int p,q,n,phin;
    int data,cipher,decrypt;
    printf("Enter the values of P and Q:");
    scanf("%d %d",&p,&q);
    n=p*q;
    printf("\nValue of n:%d",n);
    phin=(p-1)*(q-1);
    printf("\nValue of phin:%d",phin);
    int e=0;
    for(e=5;e<=100;e++)
    {
        if(findGCD(phin,e)==1)
        break;
    }
    int d=0;
    for(d=e+1;d<=100;d++)
    {
        if(((d*e)%phin)==1)
        break;
    }
    printf("\nValue of e:%d\nValue of phin:%d",e,d);
    printf("\nEnter the data:");
    scanf("%d",&data);
    cipher=powMOD(data,e,n);
    printf("\nThe Encryprted Data:%d",cipher);
    decrypt=powMOD(cipher,d,n);
    printf("\nThe Decryprted Data:%d",decrypt);
}
