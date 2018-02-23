#include <stdio.h>
int main()
{
int a=2,b=1,c=3;
if(a>b)
{
if(b>c)
{
printf("b is middle one");
}
else if(c>a)
{
printf("a is middle one");
}
else
{
printf("c is middle one");
}
}
else
{
if(b<c)
{
printf("b is middle one");
}
else if(c<a)
{
printf("a is middle one");
}
else
{
printf("c is middle one");
}
}
 return 0;
}
