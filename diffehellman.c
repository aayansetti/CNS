#include<stdio.h>
long long int power(int YA,int YB,int mod)
{
    long long int t;
    if(YB==1)
    return YA;
    t=power(YA,YB/2,mod);
    if(YB%2==0)
    return (t*t)%mod;
    else
    return (((t*t)%mod)*YA)%mod;
}
long long int calculateKey(int YA,int XA,int q)
{
    return power(YA,XA,q);
}
void main()
{
    int q,alpha,YA,YB,k1,k2,XA,XB;
    //Both the persons will be agreed upon the value of q and alpha.
    printf("Enter the values of q qnd alpha:");
    scanf("%d %d",&q,&alpha);
    //First person will choose XA.
    printf("\nEnter the value for XA:");
    scanf("%d",&XA);
    YA=power(alpha,XA,q);
    //second person will choose XB.
    printf("\nEnter the value for XB:");
    scanf("%d",&XB);
    YB=power(alpha,XB,q);
    printf("\nA computes the YA:%d",YA);
    printf("\nB computes the YB:%d",YB);
    k1=calculateKey(YB,XA,q);
    k2=calculateKey(YA,XB,q);
    printf("\nkey value for first person:%d",k1);
    printf("\nkey value for second person:%d",k2);
    if(k1==k2)
    printf("\nThe Keys exchanged successfully");
    else
    printf("\nThe exchanged keys are not same");
}
