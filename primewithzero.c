#include <stdio.h>
int isprime(int num)
{
    int i,j,cnt=0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
        cnt++;
        break;
        }
    }
    if(cnt)
    {
    return num;
    }
    else
    return 0;
    
}
int main()
{
    int arr[20],i,j=0,len,prime;
    printf("enter the size of the array.\n");
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
    arr[i]=isprime(arr[i]);
    }
    for(i=0;i<len;i++)
    {
    printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<len;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<len)
    {
        arr[j]=0;
        j++;
    }
    for(i=0;i<len;i++)
    {
    printf("%d ",arr[i]);
    }
    
}