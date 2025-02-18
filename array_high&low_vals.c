///////////////////////////////method1///////////////////////////////
#include<stdio.h>
int main()
{
int arr[50],i,j,len,low_val,high_val;
srand(getpid());
for(i=0;i<50;i++)
{
arr[i]=rand()%100;
}
for(i=0;i<50;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
for(i=0;i<50;i++)
{
for(j=0;j<50-i-1;j++)
{
 if(arr[j]>arr[j+1])
 {
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
 }
}
}
for(i=0;i<50;i++)
{
printf("%d ",arr[i]);
}
low_val=arr[0];
high_val=arr[50-1];
printf("\n%d %d",low_val,high_val);
}

//////////////////////method2////////////////
#include<stdio.h>
int main()
{
	int arr[50],len,i,j,low_val,high_val;
	printf("enter the array length..\n");
	scanf("%d",&len);
	srand(getpid());
	for(i=0;i<len;i++)
	{
		arr[i]=rand()%100;
	}
	for(i=0;i<len;i++)
	printf("%d ",arr[i]);
	
	low_val=high_val=arr[0];
	for(i=1;i<len;i++)
	{
		if(arr[i]>high_val)
		{
			high_val=arr[i];
		}
		else if(arr[i]<low_val)
		low_val=arr[i];
	}
	printf("\n%d %d",low_val,high_val);
}
