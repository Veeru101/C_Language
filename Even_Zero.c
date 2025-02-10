// Replace even number with zeros and move to last.
#include<stdio.h>
int main()
{
	int arr[5],i,j=0,t1,t2;
	for(i=0;i<5;i++)
scanf("%d",&arr[i]);
for(i=0;i<5;i++)
printf("%d ",arr[i]);

for(i=0;i<5;i++)
{
if(arr[i]%2==0)
{
arr[i]=0;
}
}
for(i=0;i<5;i++)
{
 if(arr[i]!=0)
 {
   arr[j]=arr[i];
   j++;
 }
}
while(j<5)
{
arr[j]=0;
j++;
}
for(i=0;i<5;i++)
printf("%d ",arr[i]);
}
