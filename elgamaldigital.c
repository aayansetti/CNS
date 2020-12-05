#include<stdio.h>
#include<math.h>
int findGCD(int n1,int n2)
{
    int i,gcd;
    for(i=1;i<=n1&&i<=n2;++i)
    {
        if(n1%i==0&&n2%i==0)
        gcd=i;
    }
    return gcd;
}
void main()
{
    int q,a,xa,k,m,f,i;
    long long int ya=1,s1,s2,s3,s4,v1,v2,v3,v4;
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
    printf("\nA's public key is:{%d,%d,%lld}",q,a,ya);
    printf("\nRandom integer:");
    for(k=2;k<q;k++)
    {
        if(findGCD(k,q-1)==1)
        break;
    }
    printf("%d",k);
    s1=pow(a,k);
    s3=s1%q;
    for(f=1;f<=100;f++)
    {
        if((k*f)%(q-1)==1)
        break;
    }
    printf("\nInverse of key:%d",f);
    printf("\nEnter the plaintext:");
    scanf("%d",&m);
    s2=f*(m-(xa*s3));
    s4=s2%(q-1);
    if(s4>=0)
    s4=s2%(q-1);
    else
    s4=s2%(q-1)+(q-1);
    printf("\nSignature Pair:(%lld,%lld)",s3,s4);
    v1=pow(a,m);
    v2=v1%q;
    v3=pow(ya,s3)*pow(s3,s4);
    v4=v3%q;
    printf("\nComputed v1:%lld",v2);
    printf("\nComputed v2:%lld",v4);
    if(v2==v4)
    printf("\nSignature valid");
    else
    printf("\nSignature is invalid");
}
