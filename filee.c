#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i;
scanf("%d",&n);
char *string=(char*)malloc(n*sizeof(char));
scanf("%s",string);
int q;
scanf("%d",&q);
int *queries=(int*)malloc(q*sizeof(int));
for(i=0;i<q;i++)
{
scanf("%d",&queries[i]);
}
int count=0;
int querynumber;
char alphabet;

int a;
for(a=0;a<q;a++)
{
count=0;
querynumber=queries[a];
alphabet=string[querynumber-1];
for(i=0;i<querynumber-1;i++)
{
if(string[i]==alphabet)
count++;
}
printf("%d\n",count);
}
return 0;
}
