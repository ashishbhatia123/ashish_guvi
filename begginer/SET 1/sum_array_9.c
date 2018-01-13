#include<stdio.h>
int main()
{
int N,K,a[100000],sum=0,i;
scanf("%d%d",&N,&K);
for( i=0;i<N;i++)
{
	scanf("%d",&a[i]);
}
for (i=0 ;i<K;i++)
{
	sum=sum+a[i];
}
printf("%d",sum);
return(0);
}
