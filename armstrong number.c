#include <stdio.h>
#include <math.h>
int main()
{
int i,num,lastDigit,d,sum;
scanf("%d",&num);
sum=0;
i=num;
d=(int)log10(num)+1;
while(num>0)
{
lastDigit=num%10;
sum=sum+round(pow(lastDigit,d));
num=num/10;
}
if(i==sum)
{
printf("Yes",i);
}
else
{
printf("No",i);
}
return 0;
}
