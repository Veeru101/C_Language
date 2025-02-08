// words reverse in string. 
#include<stdio.h>
#include<string.h>
void rev_str(char *t, char *p)
{
	while(t<p)
	{
	*t=*t^*p;
	*p=*t^*p;
	*t=*t^*p;
	t++;
	p--;
	}
}
int main()
{
char str[20]="hyd is good",*p,*q,ch;
int len;
//gets(str);
p=str;
while(q=strchr(p,' '))
{
rev_str(p,q-1);
q+=1;
p=q;
}

rev_str(p,p+strlen(p)-1);
puts(str);
}