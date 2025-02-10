//pattrens
#include<stdio.h>
int main()
{
	int i,num,j;
	scanf("%d",&num);
	for(i=0;i<num;i++,printf("\n"))
	{
	for(j=num;j>=0;j--)
	{
	(i>=j)?printf(" *"):printf(" ");
	}
	}
}

#include<stdio.h>
int main()
{
	int i,num,j;
	scanf("%d",&num);
	for(i=num;i>0;i--,printf("\n"))
	{
	for(j=num;j>=0;j--)
	{
	(i<=j)?printf(" "):printf("* ");
	}
	}
}