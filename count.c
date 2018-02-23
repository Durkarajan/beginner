#include <stdio.h>
int main()
{
long long r;
int count=0;
printf("Enter an integer:");
scanf("%lld",&r);
while(r!=0)
{
r/=10;
++count;
}
printf("%d",count);
}
