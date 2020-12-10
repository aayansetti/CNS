#include<stdio.h>
#include<string.h>
void main()
{
int i,k, v[30];
char c,enc[30],pt[50];
for(i=0;i<26;i++)
{
v[i]=0;
}
i=0;
printf("Enter the plain text: ");
scanf("%s",pt);
printf("Enter the encryption values for each alphabet: \n");
while(i<26)
{
printf("%c: ",97+i);
scanf(" %c",&enc[i]);
k=enc[i]-97;
if(v[k]==1)
{
printf("Enter a value which is not assigned to another alphabet\n");
continue;
}
v[k]=1;
i++;
}
printf("The encrypted meassage is:    ");
for(i=0;i<strlen(pt);i++)
{
printf("%c",enc[pt[i]-97]);
}
printf("\n");
}
