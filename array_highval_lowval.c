#include<stdio.h>
int main()
{
int arr[50],i,j,len;
  printf("enter the array length..\n");
  scanf("%d",&len);
srand(getpid());
for(i=0;i<len;i++)
{
arr[i]=rand()%100;
}
for(i=0;i<len;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
for(i=0;i<len;i++)
{
for(j=0;j<len-i-1;j++)
{
 if(arr[j]>arr[j+1])
 {
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
 }
}
}
int least_value=arr[0];
int highest_value=arr[len-1];
printf("%d %d ",least_value,highest_value); 
}
