#include<stdio.h>
int main()
{
int num=1,set_cnt=0,clr_cnt=0;
for(int i=0;i<32;i++)
{
if(num & 1<<i)
{
set_cnt++;
}
else
clr_cnt++;
}
printf("%d %d ",set_cnt,clr_cnt);
}
