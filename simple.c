#include<stdio.h>

int main()
{

  unsigned int num = 0x3031;
  char ch;
  ch = num;
  printf("%c\n",ch);
  return 0;
}

#include<stdio.h>

int main()
{
   int i=10;
    int j=++i + i + i++ + i + ++i;
	printf("%d %d",j,i);
}

#include<stdio.h>

int main()
{
   int i=10;
   printf("%d %d %d %d %d",++i,i,i++,++i,i);
}